
// Generated from grammarVM.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "grammarVMVisitor.h"


/**
 * This class provides an empty implementation of grammarVMVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  grammarVMMyVisitor : public grammarVMVisitor {
private:

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
          auto val_ctx = ctx->value();
          if (val_ctx != nullptr) {
//              std::cout << "val: " <<  val->getText() << std::endl;
//              //call func
//              auto test = val->getSymbol();
//              std::cout << "test: " <<  test->toString() << std::endl;
//              auto test2 = ctx->getToken(grammarVMParser::INT_TYPE, 0);
//              std::cout << "test2: " << test2->getText() << std::endl;

//              ctx->
//              test->
//              auto test1 = val->;
            auto type = val_ctx->INT_TYPE();
            auto num = val_ctx->N();
            if (type == nullptr) {
                type = val_ctx->FLOAT_TYPE();
                num = val_ctx->Z();
            }
            std::cout << "val type: " << type->getText() << std::endl;
            std::cout << "val num: " << num->getText() << std::endl;
          }
      }
      else {
          cmd = ctx->CMD();
          if (cmd != nullptr) {
              std::cout << "cmd: " << cmd->getText() << std::endl;
              //call func
          }
      }
//      ctx->getTokens();
//        auto cmd = ctx->getToken(grammarVMParser::T__0, 0);
//      if (cmd != NULL) {
//          std::cout << cmd->getText() << std::endl;
//      }
//      std::cout << ctx->VALUE()->getText() << std::endl;
//      std::cout << ctx->getToken(grammarVMParser::T__0, 0)->getText() << std::endl;
    return visitChildren(ctx);
  }

    virtual std::any visitValue(grammarVMParser::ValueContext *ctx) override {
        return visitChildren(ctx);
    }


};
