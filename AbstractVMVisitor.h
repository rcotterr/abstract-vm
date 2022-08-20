#pragma once


#include "antlr4-runtime.h"
#include "grammarVMVisitor.h"
#include "abstractVM.cpp"
#include "abstractVM.h"

#ifndef ABSTRACT_VM_VISITOR_ABSTRACTVMVISITOR_H
# define ABSTRACT_VM_VISITOR_ABSTRACTVMVISITOR_H

class  AbstractVMVisitor : public grammarVMVisitor {
private:
    abstractVM _vm;

public:
    AbstractVMVisitor();

    std::any visitProg(grammarVMParser::ProgContext *ctx) override;
    std::any visitInstr(grammarVMParser::InstrContext *ctx) override;
    std::any visitValue(grammarVMParser::ValueContext *ctx) override;

};

#endif
