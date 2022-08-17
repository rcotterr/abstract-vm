
// Generated from grammarVM.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "grammarVMParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by grammarVMParser.
 */
class  grammarVMVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by grammarVMParser.
   */
    virtual std::any visitProg(grammarVMParser::ProgContext *context) = 0;

    virtual std::any visitInstr(grammarVMParser::InstrContext *context) = 0;

    virtual std::any visitValue(grammarVMParser::ValueContext *context) = 0;


};

