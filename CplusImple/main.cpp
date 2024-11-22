#include "CplusImpleLexer.h"
#include "CplusImpleParser.h"
#include "IRGenerator.cpp"  // Incluye la implementación del listener
#include "antlr4-runtime.h"
#include <fstream>
#include <iostream>

using namespace antlr4;

int main(int argc, const char* argv[]) {
    if (argc != 3) {
        std::cerr << "Uso: " << argv[0] << " <archivo_fuente> <salida_IR>" << std::endl;
        return 1;
    }

    std::ifstream stream(argv[1]);
    if (!stream.good()) {
        std::cerr << "No se pudo abrir el archivo: " << argv[1] << std::endl;
        return 1;
    }

    ANTLRInputStream input(stream);
    CplusImpleLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    CplusImpleParser parser(&tokens);

    // Generar el árbol de análisis
    tree::ParseTree *tree = parser.prog();

    // Crear e inicializar el listener
    IRGenerator irGen;
    tree::ParseTreeWalker::DEFAULT.walk(&irGen, tree);

    // Generar el archivo IR
    irGen.generateIR(argv[2]);

    std::cout << "Código IR generado en " << argv[2] << std::endl;
    return 0;
}
