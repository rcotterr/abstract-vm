
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
      printf("visitInstr\n");
        std::cout << ctx->getText() << std::endl;
        auto val = ctx->VALUE();
        if (val != NULL) {
            std::cout << val->getText() << std::endl;
        }
        auto cmd = ctx->getToken(grammarVMParser::T__0, 0);
      if (cmd != NULL) {
          std::cout << cmd->getText() << std::endl;
      }
//      std::cout << ctx->VALUE()->getText() << std::endl;
//      std::cout << ctx->getToken(grammarVMParser::T__0, 0)->getText() << std::endl;
    return visitChildren(ctx);
  }

};

