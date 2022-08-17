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
    std::vector< const IOperand *> _stack;
    Factory _factory;

public:
    abstractVM() {
        this->_factory = Factory();// TO DO check memory lick
        this->_factory = Factory();// TO DO check memory lick
    };
    ~abstractVM() {
        this->_stack.clear();// TO DO check memory lick
    };
    void push(IOperand const * operand) {
        std::cout << "push method " << std::endl;
        this->_stack.push_back(operand);
//        (this->_stack).push_back(operand);
        return;
    };
    void assert_(IOperand const * operand) {
        IOperand const * elem = this->_stack.back();
        eOperandType elem_type = elem->getType();
        eOperandType operand_type = operand->getType();

        const std::string elem_val = elem->toString();
        const std::string operand_val = operand->toString();
        if (elem_type == operand_type && elem_val == operand_val) {
            return;
        }
        throw std::exception(); // TO DO more understandable exception
    };
    void processInstruction(std::string cmd, std::string type, std::string num) {
        eOperandType new_type; //TO DO check valid type
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
        else {
            std::cout << "error!" << std::endl;
        }

        IOperand const * factory_operand = this->_factory.createOperand(new_type, num);
        if (cmd == "push") {
            this->push(factory_operand);
        } else if (cmd == "assert") {
            this->assert_(factory_operand);
        }
    };
};


#endif //ABSTRACT_VM_ABSTRACTVM_H
