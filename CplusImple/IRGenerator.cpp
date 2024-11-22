#include "CplusImpleBaseListener.h"
#include "CplusImpleLexer.h"
#include "CplusImpleParser.h"
#include "antlr4-runtime.h"
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/Support/raw_ostream.h>
#include <map>
#include <memory>
#include <iostream>
#include <vector>

using namespace llvm;
using namespace antlr4;

class IRGenerator : public CplusImpleBaseListener {
private:
    LLVMContext context;                         // Contexto LLVM
    std::unique_ptr<Module> module;              // Módulo LLVM
    IRBuilder<> builder;                         // Constructor de instrucciones IR
    std::vector<std::map<std::string, AllocaInst*>> symbolTableStack; // Pila de tablas de símbolos

    Function *currentFunction;                   // Función actual en construcción
    std::string controlVariable;                 // Variable de control para bucles 'for'

    Type *int8PtrType;                           // Tipo i8* (puntero de 8 bits)

public:
    IRGenerator()
        : module(std::make_unique<Module>("CplusImple", context)),
          builder(context), currentFunction(nullptr) {
        // Inicializar int8PtrType
        Type *int8Type = Type::getInt8Ty(context);
        int8PtrType = PointerType::get(int8Type, 0);
    }

    // Función para crear variables en el bloque de entrada
    AllocaInst* createEntryBlockAlloca(Function *function, const std::string &varName) {
        IRBuilder<> tmpB(&function->getEntryBlock(), function->getEntryBlock().begin());
        return tmpB.CreateAlloca(builder.getInt32Ty(), nullptr, varName);
    }

    // Entrada al programa
    void enterProg(CplusImpleParser::ProgContext *ctx) override {
        // Iniciar la pila de tablas de símbolos
        symbolTableStack.push_back({});

        // Procesar las definiciones de funciones
        for (auto *funcDefCtx : ctx->funcDef()) {
            enterFuncDef(funcDefCtx);
        }

        // Procesar la función main
        enterMainDef(ctx->mainDef());

        // Vaciar la pila de tablas de símbolos
        symbolTableStack.pop_back();
    }

    // Entrada al main
    void enterMainDef(CplusImpleParser::MainDefContext *ctx) override {
        if (module->getFunction("main")) {
            // Si 'main' ya está definido, no lo volvemos a definir
            return;
        }

        FunctionType *mainType = FunctionType::get(builder.getInt32Ty(), false);
        currentFunction = Function::Create(mainType, Function::ExternalLinkage,
                                           "main", module.get());

        BasicBlock *entry = BasicBlock::Create(context, "entry", currentFunction);
        builder.SetInsertPoint(entry);

        // Añadir una nueva tabla de símbolos para el ámbito del main
        symbolTableStack.push_back({});

        // Generar el cuerpo del main
        for (auto *statCtx : ctx->stat()) {
            generateStatement(statCtx);
        }

        // Verificar si el bloque actual no tiene terminación
        if (!builder.GetInsertBlock()->getTerminator()) {
            builder.CreateRet(builder.getInt32(0));
        }

        // Salir del ámbito del main
        symbolTableStack.pop_back();
    }

    // Definición de funciones
    void enterFuncDef(CplusImpleParser::FuncDefContext *ctx) {
        // Obtener el nombre de la función
        std::string funcName = ctx->ID(0)->getText();

        // Verificar si la función ya está definida
        if (module->getFunction(funcName)) {
            std::cerr << "Error: función '" << funcName << "' ya está definida.\n";
            return;
        }

        // Obtener los parámetros
        std::vector<Type*> paramTypes;
        std::vector<std::string> paramNames;

        if (ctx->paramList()) {
            for (auto param : ctx->paramList()->ID()) {
                paramTypes.push_back(builder.getInt32Ty()); // Asumimos que los parámetros son enteros
                paramNames.push_back(param->getText());
            }
        }

        // Crear el tipo de la función
        FunctionType *funcType = FunctionType::get(builder.getInt32Ty(), paramTypes, false);
        Function *function = Function::Create(funcType, Function::ExternalLinkage,
                                              funcName, module.get());

        // Crear un nuevo bloque básico para la función
        BasicBlock *entry = BasicBlock::Create(context, "entry", function);
        builder.SetInsertPoint(entry);

        // Añadir una nueva tabla de símbolos para el ámbito de la función
        symbolTableStack.push_back({});

        // Asignar los parámetros a variables locales
        unsigned idx = 0;
        for (auto &arg : function->args()) {
            std::string varName = paramNames[idx++];
            // Crear una variable local
            AllocaInst *alloca = createEntryBlockAlloca(function, varName);
            // Almacenar el valor del argumento en la variable local
            builder.CreateStore(&arg, alloca);
            // Añadir la variable a la tabla de símbolos actual
            symbolTableStack.back()[varName] = alloca;
        }

        // Guardar la función actual
        Function *prevFunction = currentFunction;
        currentFunction = function;

        // Generar el cuerpo de la función
        for (auto *statCtx : ctx->stat()) {
            generateStatement(statCtx);
        }

        // Manejar el valor de retorno
        Value *retValue = nullptr;
        if (ctx->ID().size() > 1) {
            // Obtener la variable de retorno opcional después de 'endin'
            std::string returnVar = ctx->ID(1)->getText();
            retValue = getVariableValue(returnVar);
            if (!retValue) {
                std::cerr << "Error: variable de retorno '" << returnVar
                          << "' no declarada.\n";
                retValue = builder.getInt32(0); // Valor por defecto
            }
        } else if (ctx->endin()->expr()) {
            // Si 'endin' tiene una expresión, evaluarla
            retValue = visitExpr(ctx->endin()->expr());
        } else {
            // Si no hay variable de retorno ni expresión, retornar 0 por defecto
            retValue = builder.getInt32(0);
        }

        // Crear la instrucción de retorno
        builder.CreateRet(retValue);

        // Salir del ámbito de la función
        symbolTableStack.pop_back();

        // Restaurar la función actual
        currentFunction = prevFunction;

        // Restaurar el punto de inserción
        builder.ClearInsertionPoint();
    }

    // Método general para generar código para cualquier tipo de declaración (stat)
    void generateStatement(CplusImpleParser::StatContext *ctx) {
        if (auto *assign = ctx->assignment()) {
            generateAssignment(assign);
        } else if (auto *print = ctx->printExpr()) {
            generatePrintExpr(print);
        } else if (auto *ifStat = ctx->ifStat()) {
            generateIfStat(ifStat);
        } else if (auto *whileStat = ctx->whileStat()) {
            generateWhileStat(whileStat);
        } else if (auto *forStat = ctx->forStat()) {
            generateForStat(forStat);
        } else if (auto *funcCall = ctx->funcCall()) {
            visitFuncCall(funcCall);
        } else {
        }
    }

    // Implementación del bucle 'while'
    void generateWhileStat(CplusImpleParser::WhileStatContext *ctx) {
        // Obtener la función actual
        Function *currentFunction = builder.GetInsertBlock()->getParent();

        // Crear los bloques básicos necesarios
        BasicBlock *condBlock = BasicBlock::Create(context, "while_cond", currentFunction);
        BasicBlock *bodyBlock = BasicBlock::Create(context, "while_body", currentFunction);
        BasicBlock *afterBlock = BasicBlock::Create(context, "while_after", currentFunction);

        // Crear un salto incondicional al bloque de condición
        builder.CreateBr(condBlock);

        // Generar código para el bloque de condición
        builder.SetInsertPoint(condBlock);
        Value *condition = visitCondition(ctx->condition());
        builder.CreateCondBr(condition, bodyBlock, afterBlock);

        // Generar código para el cuerpo del bucle
        builder.SetInsertPoint(bodyBlock);
        for (auto *statCtx : ctx->whileBody()->stat()) {
            generateStatement(statCtx);
        }
        // Después de ejecutar el cuerpo, volver a evaluar la condición
        builder.CreateBr(condBlock);

        // Configurar el punto de inserción en el bloque después del bucle
        builder.SetInsertPoint(afterBlock);
    }

    // Implementación del bucle 'for'
    void generateForStat(CplusImpleParser::ForStatContext *ctx) {
        // Obtener la función actual
        Function *currentFunction = builder.GetInsertBlock()->getParent();

        // Asegurar que 'temp' está declarado en el bloque de entrada si se usa
        if (!symbolTableStack.back().count("temp")) {
            symbolTableStack.back()["temp"] = createEntryBlockAlloca(currentFunction, "temp");
        }

        // Crear los bloques básicos necesarios
        BasicBlock *initBlock = BasicBlock::Create(context, "for_init", currentFunction);
        BasicBlock *condBlock = BasicBlock::Create(context, "for_cond", currentFunction);
        BasicBlock *bodyBlock = BasicBlock::Create(context, "for_body", currentFunction);
        BasicBlock *incBlock = BasicBlock::Create(context, "for_inc", currentFunction);
        BasicBlock *afterBlock = BasicBlock::Create(context, "for_after", currentFunction);

        // Salto al bloque de inicialización
        builder.CreateBr(initBlock);

        // Bloque de inicialización
        builder.SetInsertPoint(initBlock);
        // Generar el código para la inicialización (forInit)
        generateAssignment(ctx->forInit()->assignment());
        // Extraer el nombre de la variable de control
        controlVariable = ctx->forInit()->assignment()->ID()->getText();
        // Después de la inicialización, saltar al bloque de condición
        builder.CreateBr(condBlock);

        // Bloque de condición
        builder.SetInsertPoint(condBlock);
        // Evaluar la condición (forCondition)
        Value *condition = visitCondition(ctx->forCondition()->condition());
        // Bifurcar según la condición
        builder.CreateCondBr(condition, bodyBlock, afterBlock);

        // Bloque del cuerpo del bucle
        builder.SetInsertPoint(bodyBlock);
        for (auto *statCtx : ctx->forBody()->stat()) {
            generateStatement(statCtx);
        }
        // Después del cuerpo, saltar al bloque de incremento
        builder.CreateBr(incBlock);

        // Bloque de incremento
        builder.SetInsertPoint(incBlock);
        // Generar el código para el incremento (forIncrement)
        generateForIncrement(ctx->forIncrement()->NUM());
        // Después del incremento, volver al bloque de condición
        builder.CreateBr(condBlock);

        // Bloque después del bucle
        builder.SetInsertPoint(afterBlock);
    }

    // Implementación del incremento del bucle 'for'
    void generateForIncrement(tree::TerminalNode *incrementNum) {
        // Obtener el valor actual de la variable de control
        AllocaInst *controlVarPtr = getVariablePtr(controlVariable);
        Value *controlVar = builder.CreateLoad(builder.getInt32Ty(), controlVarPtr, controlVariable);

        // Obtener el valor del incremento
        int incrementValueInt = std::stoi(incrementNum->getText());
        Value *incrementValue = ConstantInt::get(context, APInt(32, incrementValueInt));

        // Calcular el nuevo valor
        Value *newValue = builder.CreateAdd(controlVar, incrementValue, "inc");

        // Almacenar el nuevo valor en la variable de control
        builder.CreateStore(newValue, controlVarPtr);
    }

    // Generación de código para asignaciones
    void generateAssignment(CplusImpleParser::AssignmentContext *ctx) {
        std::string varName = ctx->ID()->getText();
        Value *value = visitExpr(ctx->expr());

        // Buscar la variable en las tablas de símbolos
        AllocaInst *varAlloc = getVariablePtr(varName);

        // Si no existe crearemos una nueva variable en el ámbito actual
        if (!varAlloc) {
            varAlloc = createEntryBlockAlloca(currentFunction, varName);
            symbolTableStack.back()[varName] = varAlloc;
        }

        // Asignar el valor a la variable
        builder.CreateStore(value, varAlloc);
    }

    // Obtener el puntero a una variable
    AllocaInst* getVariablePtr(const std::string &varName) {
        for (auto it = symbolTableStack.rbegin(); it != symbolTableStack.rend(); ++it) {
            if (it->count(varName)) {
                return (*it)[varName];
            }
        }
        return nullptr;
    }

    // Generación de código para expresiones de impresión
    void generatePrintExpr(CplusImpleParser::PrintExprContext *ctx) {
        // Crear o reutilizar la declaración de printf
        Function *printfFunc = module->getFunction("printf");
        if (!printfFunc) {
            std::vector<Type *> printfArgs = {int8PtrType};
            FunctionType *printfType = FunctionType::get(builder.getInt32Ty(), printfArgs, true);
            printfFunc = Function::Create(printfType, Function::ExternalLinkage,
                                          "printf", module.get());
        }

        // Procesar los elementos de la lista de impresión
        for (size_t i = 0; i < ctx->printList()->children.size(); i += 2) {
            auto *child = ctx->printList()->children[i];
            if (!child) continue;

            std::string text = child->getText();
            if (text.front() == '"') {
                // Es una cadena de texto
                text = text.substr(1, text.size() - 2); // Eliminamos las comillas

                // Añadir un salto de línea si es el último elemento
                if (i + 1 >= ctx->printList()->children.size()) {
                    text += "\n";
                }

                // Crear la cadena global
                Value *formatStr = builder.CreateGlobalString(text);

                // Hacer bitcast al tipo i8*
                Value *formatStrPtr = builder.CreateBitCast(formatStr, int8PtrType);

                builder.CreateCall(printfFunc, {formatStrPtr});
            } else {
                // Es una expresión o variable
                auto *exprCtx = dynamic_cast<CplusImpleParser::ExprContext*>(child);
                if (exprCtx) {
                    Value *value = visitExpr(exprCtx);

                    // Crear el formato para imprimir enteros
                    std::string format = "%d";
                    if (i + 1 >= ctx->printList()->children.size()) {
                        format += "\n";
                    }
                    Value *formatStr = builder.CreateGlobalString(format);

                    // Hacer bitcast al tipo i8*
                    Value *formatStrPtr = builder.CreateBitCast(formatStr, int8PtrType);

                    builder.CreateCall(printfFunc, {formatStrPtr, value});
                } else {
                }
            }
        }
    }

    // Visitar expresiones
    Value* visitExpr(CplusImpleParser::ExprContext *ctx) {
        if (ctx->arithmetic()) {
            return visitArithmetic(ctx->arithmetic());
        } else if (ctx->funcCall()) {
            return visitFuncCall(ctx->funcCall());
        } else if (ctx->STRING()) {
            return nullptr;
        }
        return nullptr;
    }

    // Visitar llamadas a funciones
    Value* visitFuncCall(CplusImpleParser::FuncCallContext *ctx) {
        // Obtener el nombre de la función
        std::string funcName = ctx->ID()->getText();

        // Obtener la función desde el módulo
        Function *function = module->getFunction(funcName);
        if (!function) {
            // La función no existe
            std::cerr << "Error: función '" << funcName << "' no definida.\n";
            return nullptr;
        }

        // Obtener los argumentos
        std::vector<Value*> args;
        if (ctx->argList()) {
            for (auto exprCtx : ctx->argList()->expr()) {
                args.push_back(visitExpr(exprCtx));
            }
        }

        // Crear la llamada a la función
        return builder.CreateCall(function, args, "calltmp");
    }

    // Visitar expresiones aritméticas
    Value* visitArithmetic(CplusImpleParser::ArithmeticContext *ctx) {
        Value *left = visitTerm(ctx->term(0));
        size_t termIndex = 1;
        for (size_t i = 1; i < ctx->children.size(); i += 2) {
            auto *opChild = ctx->children[i];
            std::string op = opChild->getText();
            Value *right = visitTerm(ctx->term(termIndex++));
            if (op == "+") {
                left = builder.CreateAdd(left, right, "addtmp");
            } else if (op == "-") {
                left = builder.CreateSub(left, right, "subtmp");
            }
        }
        return left;
    }

    // Visitar términos
    Value* visitTerm(CplusImpleParser::TermContext *ctx) {
        Value *left = visitFactor(ctx->factor(0));
        size_t factorIndex = 1;
        for (size_t i = 1; i < ctx->children.size(); i += 2) {
            auto *opChild = ctx->children[i];
            std::string op = opChild->getText();
            Value *right = visitFactor(ctx->factor(factorIndex++));
            if (op == "*") {
                left = builder.CreateMul(left, right, "multmp");
            } else if (op == "/") {
                left = builder.CreateSDiv(left, right, "divtmp");
            }
        }
        return left;
    }

    // Visitar factores
    Value* visitFactor(CplusImpleParser::FactorContext *ctx) {
        if (ctx->NUM()) {
            return ConstantInt::get(context, APInt(32, std::stoi(ctx->NUM()->getText())));
        } else if (ctx->ID()) {
            std::string varName = ctx->ID()->getText();
            return getVariableValue(varName);
        } else if (ctx->expr()) {
            return visitExpr(ctx->expr());
        }
        return nullptr;
    }

    // Obtener el valor de una variable
    Value* getVariableValue(const std::string &varName) {
        AllocaInst *varAlloc = getVariablePtr(varName);
        if (varAlloc) {
            return builder.CreateLoad(builder.getInt32Ty(), varAlloc, varName);
        }
        // Variable no encontrada
        std::cerr << "Error: variable '" << varName << "' no declarada.\n";
        return nullptr;
    }

    // Visitar condiciones
    Value *visitCondition(CplusImpleParser::ConditionContext *ctx) {
        Value *left = visitExpr(ctx->expr(0));
        Value *right = visitExpr(ctx->expr(1));

        // Generar la comparación basada en el operador
        std::string op = ctx->relOp()->getText();
        if (op == "==") {
            return builder.CreateICmpEQ(left, right, "eqtmp");
        } else if (op == "!=") {
            return builder.CreateICmpNE(left, right, "netmp");
        } else if (op == "<") {
            return builder.CreateICmpSLT(left, right, "lttmp");
        } else if (op == "<=") {
            return builder.CreateICmpSLE(left, right, "letmp");
        } else if (op == ">") {
            return builder.CreateICmpSGT(left, right, "gttmp");
        } else if (op == ">=") {
            return builder.CreateICmpSGE(left, right, "getmp");
        }
        return nullptr;
    }

    // Generación de la estructura if-else
    void generateIfStat(CplusImpleParser::IfStatContext *ctx) {
        // Obtener la función actual
        Function *currentFunction = builder.GetInsertBlock()->getParent();

        // Crear los bloques básicos
        BasicBlock *ifBlock = BasicBlock::Create(context, "if", currentFunction);
        BasicBlock *elseBlock = ctx->elseStat() ? BasicBlock::Create(context, "else",
                                    currentFunction) : nullptr;
        BasicBlock *mergeBlock = BasicBlock::Create(context, "merge", currentFunction);

        // Evaluar la condición
        Value *condition = visitCondition(ctx->condition());
        builder.CreateCondBr(condition, ifBlock, elseBlock ? elseBlock : mergeBlock);

        // Generar instrucciones para el bloque 'if'
        builder.SetInsertPoint(ifBlock);
        for (auto *statCtx : ctx->ifBody()->stat()) {
            generateStatement(statCtx);
        }
        if (!builder.GetInsertBlock()->getTerminator()) {
            builder.CreateBr(mergeBlock);
        }

        // Generar instrucciones para el bloque 'else' si es que existe
        if (elseBlock) {
            builder.SetInsertPoint(elseBlock);
            for (auto *statCtx : ctx->elseStat()->elseBody()->stat()) {
                generateStatement(statCtx);
            }
            if (!builder.GetInsertBlock()->getTerminator()) {
                builder.CreateBr(mergeBlock);
            }
        }

        // Configurar el punto de inserción en el bloque 'merge'
        builder.SetInsertPoint(mergeBlock);
    }

    // Generación del código IR y guardado en un archivo
    void generateIR(const std::string &filename) {
        std::error_code EC;
        raw_fd_ostream dest(filename, EC);
        if (EC) {
            errs() << "No se pudo abrir el archivo: " << EC.message() << "\n";
            return;
        }
        module->print(dest, nullptr);
    }
};
