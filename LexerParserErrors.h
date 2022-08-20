#pragma once


//#include "antlr4-runtime.h"
//#include "antlr/grammarVMLexer.h"
#include "antlr/grammarVMParser.h"
//#include "grammarVMVisitor.h"


class  LexerParserErrors {


public:
    LexerParserErrors();
    ~LexerParserErrors();
    void processErrors(grammarVMParser * parser);

    class LexerParserException : public std::exception
    {
    public:
        virtual const char * what() const throw()
        {
            return ("Errors with lexer/parser occurred");
        }
    };

};

