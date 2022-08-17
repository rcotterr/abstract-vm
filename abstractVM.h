//
// Created by Marina Romashkova on 17.08.2022.
//
#include <iostream>
#include <vector>
#include "Operand.hpp"
#include "Factory.hpp"
//#include "Factory.cpp"
//#include "Operand.cpp"

#ifndef ABSTRACT_VM_ABSTRACTVM_H
#define ABSTRACT_VM_ABSTRACTVM_H


class abstractVM {
private:
    std::vector< IOperand *> _stack;

public:
    void push(eOperandType type, std::string num) {
        return;
    };
    void assert_(eOperandType type, std::string num) {
        return;
    };
    void processInstruction(std::string cmd, std::string type, std::string num) {
        eOperandType new_type;
        if (type == "int8") {
            new_type = INT8;
        }
        else if (type == "int16") {
            new_type = INT16;
        }
        else if (type == "int32") {
            new_type = INT32;
        }
        else if (type == "float") {
            new_type = FLOAT;
        }
        else if (type == "double") {
            new_type = DOUBLE;
        }

        if (cmd == "push") {
            this->push(new_type, num);
        } else if (cmd == "assert") {
            this->assert_(new_type, num);
        }
    };
};


#endif //ABSTRACT_VM_ABSTRACTVM_H
