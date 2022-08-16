
// Generated from grammarVM.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "grammarVMListener.h"


/**
 * This class provides an empty implementation of grammarVMListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  grammarVMBaseListener : public grammarVMListener {
public:

  virtual void enterProg(grammarVMParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(grammarVMParser::ProgContext * /*ctx*/) override { }

  virtual void enterInstr(grammarVMParser::InstrContext * /*ctx*/) override { }
  virtual void exitInstr(grammarVMParser::InstrContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

