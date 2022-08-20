#include "AbstractVMVisitor.h"

AbstractVMVisitor::AbstractVMVisitor(){
    this->_vm = abstractVM();
}

std::any AbstractVMVisitor::visitProg(grammarVMParser::ProgContext *ctx) {
    return visitChildren(ctx);
}

std::any AbstractVMVisitor::visitInstr(grammarVMParser::InstrContext *ctx) {
    auto cmd = ctx->CMD_VALUE();
    if (cmd != nullptr) {
        auto val_ctx = ctx->value();
        if (val_ctx != nullptr) {
            auto type = val_ctx->INT_TYPE();
            auto num = val_ctx->N();
            if (type == nullptr) {
                type = val_ctx->FLOAT_TYPE();
                num = val_ctx->Z();
            }
            this->_vm.processInstruction(cmd->getText(), type->getText(), num->getText());
        }
    }
    else {
        cmd = ctx->CMD();
        if (cmd != nullptr) {
            this->_vm.processInstruction(cmd->getText());
        }
    }
    return visitChildren(ctx);
}

std::any AbstractVMVisitor::visitValue(grammarVMParser::ValueContext *ctx) {
    return visitChildren(ctx);
}