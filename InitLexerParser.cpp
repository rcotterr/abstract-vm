#include "InitLexerParser.h"

InitLexerParser::InitLexerParser(){}

grammarVMParser::ProgContext* InitLexerParser::init(std::string input_) {
    // Provide the input text in a stream
    antlr4::ANTLRInputStream input(input_);

    // Create a lexer from the input
    grammarVMLexer  lexer(&input);

    // Create a token stream from the lexer
    antlr4::CommonTokenStream tokens(&lexer);

    // Create a parser from the token stream
    grammarVMParser parser(&tokens);

    grammarVMParser::ProgContext* prog = parser.prog();

    auto errHandler = parser.getErrorHandler();
    errHandler->reportMatch(&parser);

    auto errNum = parser.getNumberOfSyntaxErrors();
    std::cout << "err " << errNum << std::endl;
    if (errNum != 0) {
        std::cout << "Some errors occurred " << std::endl;
        throw std::exception();
    }
}