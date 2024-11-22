
// Generated from CplusImple.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "CplusImpleParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CplusImpleParser.
 */
class  CplusImpleListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(CplusImpleParser::ProgContext *ctx) = 0;
  virtual void exitProg(CplusImpleParser::ProgContext *ctx) = 0;

  virtual void enterInclude(CplusImpleParser::IncludeContext *ctx) = 0;
  virtual void exitInclude(CplusImpleParser::IncludeContext *ctx) = 0;

  virtual void enterMainDef(CplusImpleParser::MainDefContext *ctx) = 0;
  virtual void exitMainDef(CplusImpleParser::MainDefContext *ctx) = 0;

  virtual void enterFuncDef(CplusImpleParser::FuncDefContext *ctx) = 0;
  virtual void exitFuncDef(CplusImpleParser::FuncDefContext *ctx) = 0;

  virtual void enterParamList(CplusImpleParser::ParamListContext *ctx) = 0;
  virtual void exitParamList(CplusImpleParser::ParamListContext *ctx) = 0;

  virtual void enterStat(CplusImpleParser::StatContext *ctx) = 0;
  virtual void exitStat(CplusImpleParser::StatContext *ctx) = 0;

  virtual void enterAssignment(CplusImpleParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(CplusImpleParser::AssignmentContext *ctx) = 0;

  virtual void enterExpr(CplusImpleParser::ExprContext *ctx) = 0;
  virtual void exitExpr(CplusImpleParser::ExprContext *ctx) = 0;

  virtual void enterArithmetic(CplusImpleParser::ArithmeticContext *ctx) = 0;
  virtual void exitArithmetic(CplusImpleParser::ArithmeticContext *ctx) = 0;

  virtual void enterTerm(CplusImpleParser::TermContext *ctx) = 0;
  virtual void exitTerm(CplusImpleParser::TermContext *ctx) = 0;

  virtual void enterFactor(CplusImpleParser::FactorContext *ctx) = 0;
  virtual void exitFactor(CplusImpleParser::FactorContext *ctx) = 0;

  virtual void enterIfStat(CplusImpleParser::IfStatContext *ctx) = 0;
  virtual void exitIfStat(CplusImpleParser::IfStatContext *ctx) = 0;

  virtual void enterIfBody(CplusImpleParser::IfBodyContext *ctx) = 0;
  virtual void exitIfBody(CplusImpleParser::IfBodyContext *ctx) = 0;

  virtual void enterElseStat(CplusImpleParser::ElseStatContext *ctx) = 0;
  virtual void exitElseStat(CplusImpleParser::ElseStatContext *ctx) = 0;

  virtual void enterElseBody(CplusImpleParser::ElseBodyContext *ctx) = 0;
  virtual void exitElseBody(CplusImpleParser::ElseBodyContext *ctx) = 0;

  virtual void enterWhileStat(CplusImpleParser::WhileStatContext *ctx) = 0;
  virtual void exitWhileStat(CplusImpleParser::WhileStatContext *ctx) = 0;

  virtual void enterWhileBody(CplusImpleParser::WhileBodyContext *ctx) = 0;
  virtual void exitWhileBody(CplusImpleParser::WhileBodyContext *ctx) = 0;

  virtual void enterForStat(CplusImpleParser::ForStatContext *ctx) = 0;
  virtual void exitForStat(CplusImpleParser::ForStatContext *ctx) = 0;

  virtual void enterForInit(CplusImpleParser::ForInitContext *ctx) = 0;
  virtual void exitForInit(CplusImpleParser::ForInitContext *ctx) = 0;

  virtual void enterForCondition(CplusImpleParser::ForConditionContext *ctx) = 0;
  virtual void exitForCondition(CplusImpleParser::ForConditionContext *ctx) = 0;

  virtual void enterForIncrement(CplusImpleParser::ForIncrementContext *ctx) = 0;
  virtual void exitForIncrement(CplusImpleParser::ForIncrementContext *ctx) = 0;

  virtual void enterForBody(CplusImpleParser::ForBodyContext *ctx) = 0;
  virtual void exitForBody(CplusImpleParser::ForBodyContext *ctx) = 0;

  virtual void enterCondition(CplusImpleParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(CplusImpleParser::ConditionContext *ctx) = 0;

  virtual void enterRelOp(CplusImpleParser::RelOpContext *ctx) = 0;
  virtual void exitRelOp(CplusImpleParser::RelOpContext *ctx) = 0;

  virtual void enterPrintExpr(CplusImpleParser::PrintExprContext *ctx) = 0;
  virtual void exitPrintExpr(CplusImpleParser::PrintExprContext *ctx) = 0;

  virtual void enterInputExpr(CplusImpleParser::InputExprContext *ctx) = 0;
  virtual void exitInputExpr(CplusImpleParser::InputExprContext *ctx) = 0;

  virtual void enterFuncCall(CplusImpleParser::FuncCallContext *ctx) = 0;
  virtual void exitFuncCall(CplusImpleParser::FuncCallContext *ctx) = 0;

  virtual void enterArgList(CplusImpleParser::ArgListContext *ctx) = 0;
  virtual void exitArgList(CplusImpleParser::ArgListContext *ctx) = 0;

  virtual void enterPrintList(CplusImpleParser::PrintListContext *ctx) = 0;
  virtual void exitPrintList(CplusImpleParser::PrintListContext *ctx) = 0;

  virtual void enterEndin(CplusImpleParser::EndinContext *ctx) = 0;
  virtual void exitEndin(CplusImpleParser::EndinContext *ctx) = 0;


};

