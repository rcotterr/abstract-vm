#include "antlr4-runtime.h"

#include "antlr/grammarVMLexer.h"
#include "antlr/grammarVMParser.h"

class  VMVisitor {
public:
    antlrcpp::Any visit(grammarVMParser::ProgContext* ctx);
};