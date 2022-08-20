#include "AbstractVMVisitor.h"

AbstractVMVisitor::AbstractVMVisitor(){
    this->_vm = abstractVM();
}

std::any AbstractVMVisitor::visitProg(grammarVMParser::ProgContext *ctx) {
    return visitChildren(ctx);
}

std::any AbstractVMVisitor::visitInstr(grammarVMParser::InstrContext *ctx) {
    printf("visitInstr\n");
    std::cout << "all text: " << ctx->getText() << std::endl;
    auto cmd = ctx->CMD_VALUE();
    if (cmd != nullptr) {
        std::cout << "cmd value: " << cmd->getText() << std::endl;
        auto val_ctx = ctx->value();
        if (val_ctx != nullptr) {
            auto type = val_ctx->INT_TYPE();
            auto num = val_ctx->N();
            if (type == nullptr) {
                type = val_ctx->FLOAT_TYPE();
                num = val_ctx->Z();
            }
            std::cout << "val type: " << type->getText() << std::endl;
            std::cout << "val num: " << num->getText() << std::endl;
            this->_vm.processInstruction(cmd->getText(), type->getText(), num->getText());
        }
    }
    else {
        cmd = ctx->CMD();
        if (cmd != nullptr) {
            std::cout << "cmd: " << cmd->getText() << std::endl;
            this->_vm.processInstruction(cmd->getText());
        }
    }
    return visitChildren(ctx);
}

std::any AbstractVMVisitor::visitValue(grammarVMParser::ValueContext *ctx) {
    return visitChildren(ctx);
}