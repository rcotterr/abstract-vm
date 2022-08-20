#include "LexerParserErrors.h"

LexerParserErrors::LexerParserErrors(){}
LexerParserErrors::~LexerParserErrors(){}

void LexerParserErrors::processErrors(grammarVMParser *parser) {
    auto errHandler = parser->getErrorHandler();
    errHandler->reportMatch(parser);

    auto errNum = parser->getNumberOfSyntaxErrors();
    std::cout << "err " << errNum << std::endl;
    if (errNum != 0) {
        std::cout << "Some errors occurred " << std::endl;
        throw LexerParserException();
    }
}
