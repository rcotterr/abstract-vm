
// Generated from grammarVM.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "grammarVMParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by grammarVMParser.
 */
class  grammarVMListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(grammarVMParser::ProgContext *ctx) = 0;
  virtual void exitProg(grammarVMParser::ProgContext *ctx) = 0;

  virtual void enterInstr(grammarVMParser::InstrContext *ctx) = 0;
  virtual void exitInstr(grammarVMParser::InstrContext *ctx) = 0;


};

