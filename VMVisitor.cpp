#include "VMVisitor.h"

antlrcpp::Any VMVisitor::visit(grammarVMParser::ProgContext* ctx) {

//    vector<Element> elements;
//
//    for (auto element : ctx->elements) {
//        Element el = visitAction(element).as<Element>();
//        elements.push_back(el);
//    }
//
//    antlrcpp::Any result = Scene(ctx->name()->NAME()->getText(), elements);

//    return result;
//    std::vector<ParseTree *> children = ctx->children;
    for (auto child : ctx->children) {
        std::cout << child;
        child->getTreeType();
//        if(NewType* v = dynamic_cast<NewType*>(old)) {
//            // old was safely casted to NewType
//            v->doSomething();
//        }
    }
//    ctx->Instr
    return nullptr;
}