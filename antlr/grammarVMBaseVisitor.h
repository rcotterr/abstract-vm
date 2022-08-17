
// Generated from grammarVM.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "grammarVMVisitor.h"


/**
 * This class provides an empty implementation of grammarVMVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  grammarVMBaseVisitor : public grammarVMVisitor {
public:

  virtual std::any visitProg(grammarVMParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInstr(grammarVMParser::InstrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValue(grammarVMParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }


};

