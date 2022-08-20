#pragma once


#include "antlr4-runtime.h"
#include "antlr/grammarVMLexer.h"
#include "grammarVMVisitor.h"


class  InitLexerParser {

public:
    InitLexerParser();

    grammarVMParser::ProgContext* init(std::string input_);

};

