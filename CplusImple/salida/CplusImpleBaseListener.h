
// Generated from CplusImple.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "CplusImpleListener.h"


/**
 * This class provides an empty implementation of CplusImpleListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CplusImpleBaseListener : public CplusImpleListener {
public:

  virtual void enterProg(CplusImpleParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(CplusImpleParser::ProgContext * /*ctx*/) override { }

  virtual void enterInclude(CplusImpleParser::IncludeContext * /*ctx*/) override { }
  virtual void exitInclude(CplusImpleParser::IncludeContext * /*ctx*/) override { }

  virtual void enterMainDef(CplusImpleParser::MainDefContext * /*ctx*/) override { }
  virtual void exitMainDef(CplusImpleParser::MainDefContext * /*ctx*/) override { }

  virtual void enterFuncDef(CplusImpleParser::FuncDefContext * /*ctx*/) override { }
  virtual void exitFuncDef(CplusImpleParser::FuncDefContext * /*ctx*/) override { }

  virtual void enterParamList(CplusImpleParser::ParamListContext * /*ctx*/) override { }
  virtual void exitParamList(CplusImpleParser::ParamListContext * /*ctx*/) override { }

  virtual void enterStat(CplusImpleParser::StatContext * /*ctx*/) override { }
  virtual void exitStat(CplusImpleParser::StatContext * /*ctx*/) override { }

  virtual void enterAssignment(CplusImpleParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(CplusImpleParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterExpr(CplusImpleParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(CplusImpleParser::ExprContext * /*ctx*/) override { }

  virtual void enterArithmetic(CplusImpleParser::ArithmeticContext * /*ctx*/) override { }
  virtual void exitArithmetic(CplusImpleParser::ArithmeticContext * /*ctx*/) override { }

  virtual void enterTerm(CplusImpleParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(CplusImpleParser::TermContext * /*ctx*/) override { }

  virtual void enterFactor(CplusImpleParser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(CplusImpleParser::FactorContext * /*ctx*/) override { }

  virtual void enterIfStat(CplusImpleParser::IfStatContext * /*ctx*/) override { }
  virtual void exitIfStat(CplusImpleParser::IfStatContext * /*ctx*/) override { }

  virtual void enterIfBody(CplusImpleParser::IfBodyContext * /*ctx*/) override { }
  virtual void exitIfBody(CplusImpleParser::IfBodyContext * /*ctx*/) override { }

  virtual void enterElseStat(CplusImpleParser::ElseStatContext * /*ctx*/) override { }
  virtual void exitElseStat(CplusImpleParser::ElseStatContext * /*ctx*/) override { }

  virtual void enterElseBody(CplusImpleParser::ElseBodyContext * /*ctx*/) override { }
  virtual void exitElseBody(CplusImpleParser::ElseBodyContext * /*ctx*/) override { }

  virtual void enterWhileStat(CplusImpleParser::WhileStatContext * /*ctx*/) override { }
  virtual void exitWhileStat(CplusImpleParser::WhileStatContext * /*ctx*/) override { }

  virtual void enterWhileBody(CplusImpleParser::WhileBodyContext * /*ctx*/) override { }
  virtual void exitWhileBody(CplusImpleParser::WhileBodyContext * /*ctx*/) override { }

  virtual void enterForStat(CplusImpleParser::ForStatContext * /*ctx*/) override { }
  virtual void exitForStat(CplusImpleParser::ForStatContext * /*ctx*/) override { }

  virtual void enterForInit(CplusImpleParser::ForInitContext * /*ctx*/) override { }
  virtual void exitForInit(CplusImpleParser::ForInitContext * /*ctx*/) override { }

  virtual void enterForCondition(CplusImpleParser::ForConditionContext * /*ctx*/) override { }
  virtual void exitForCondition(CplusImpleParser::ForConditionContext * /*ctx*/) override { }

  virtual void enterForIncrement(CplusImpleParser::ForIncrementContext * /*ctx*/) override { }
  virtual void exitForIncrement(CplusImpleParser::ForIncrementContext * /*ctx*/) override { }

  virtual void enterForBody(CplusImpleParser::ForBodyContext * /*ctx*/) override { }
  virtual void exitForBody(CplusImpleParser::ForBodyContext * /*ctx*/) override { }

  virtual void enterCondition(CplusImpleParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(CplusImpleParser::ConditionContext * /*ctx*/) override { }

  virtual void enterRelOp(CplusImpleParser::RelOpContext * /*ctx*/) override { }
  virtual void exitRelOp(CplusImpleParser::RelOpContext * /*ctx*/) override { }

  virtual void enterPrintExpr(CplusImpleParser::PrintExprContext * /*ctx*/) override { }
  virtual void exitPrintExpr(CplusImpleParser::PrintExprContext * /*ctx*/) override { }

  virtual void enterInputExpr(CplusImpleParser::InputExprContext * /*ctx*/) override { }
  virtual void exitInputExpr(CplusImpleParser::InputExprContext * /*ctx*/) override { }

  virtual void enterFuncCall(CplusImpleParser::FuncCallContext * /*ctx*/) override { }
  virtual void exitFuncCall(CplusImpleParser::FuncCallContext * /*ctx*/) override { }

  virtual void enterArgList(CplusImpleParser::ArgListContext * /*ctx*/) override { }
  virtual void exitArgList(CplusImpleParser::ArgListContext * /*ctx*/) override { }

  virtual void enterPrintList(CplusImpleParser::PrintListContext * /*ctx*/) override { }
  virtual void exitPrintList(CplusImpleParser::PrintListContext * /*ctx*/) override { }

  virtual void enterEndin(CplusImpleParser::EndinContext * /*ctx*/) override { }
  virtual void exitEndin(CplusImpleParser::EndinContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

