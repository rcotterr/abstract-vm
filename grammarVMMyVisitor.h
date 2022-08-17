
// Generated from grammarVM.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "grammarVMVisitor.h"


/**
 * This class provides an empty implementation of grammarVMVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  grammarVMMyVisitor : public grammarVMVisitor {
public:

  virtual std::any visitProg(grammarVMParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInstr(grammarVMParser::InstrContext *ctx) override {
      printf("visitInstr\n");
      std::cout << "all text: " << ctx->getText() << std::endl;
//      auto cmd = ctx->getToken(grammarVMParser::T__0, 0); //get cmd: push, add, etc
//      if (cmd == nullptr) {
//          cmd = ctx->getToken(grammarVMParser::T__3, 0); //get cmd: push, add, etc
//      }
      auto cmd = ctx->CMD_VALUE();
      if (cmd != nullptr) {
          std::cout << "cmd value: " << cmd->getText() << std::endl;
          auto val = ctx->VALUE();
          if (val != nullptr) {
              std::cout << "val: " <<  val->getText() << std::endl;
              //call func
          }
      }
      else {
          cmd = ctx->CMD();
          if (cmd != nullptr) {
              std::cout << "cmd: " << cmd->getText() << std::endl;
              //call func
          }
      }
//        auto cmd = ctx->getToken(grammarVMParser::T__0, 0);
//      if (cmd != NULL) {
//          std::cout << cmd->getText() << std::endl;
//      }
//      std::cout << ctx->VALUE()->getText() << std::endl;
//      std::cout << ctx->getToken(grammarVMParser::T__0, 0)->getText() << std::endl;
    return visitChildren(ctx);
  }

};

