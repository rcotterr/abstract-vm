#include "LexerParserErrors.h"

LexerParserErrors::LexerParserErrors(){}
LexerParserErrors::~LexerParserErrors(){}

void LexerParserErrors::processErrors(grammarVMParser *parser) {
    auto errHandler = parser->getErrorHandler();
    errHandler->reportMatch(parser);

    auto errNum = parser->getNumberOfSyntaxErrors();
    if (errNum != 0) {
        throw LexerParserException();
    }
}
