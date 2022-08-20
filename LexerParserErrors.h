#pragma once

#include "antlr/grammarVMParser.h"


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
            return ("Lexical/syntactic errors occurred");
        }
    };

};

