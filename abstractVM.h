//
// Created by Marina Romashkova on 17.08.2022.
//
#include <iostream>
#include <vector>
#include "Operand.hpp"
#include "Factory.hpp"
#include "Factory.cpp"
#include "Operand.cpp"

#ifndef ABSTRACT_VM_ABSTRACTVM_H
#define ABSTRACT_VM_ABSTRACTVM_H


class abstractVM {
private:
    std::vector< IOperand *> _stack;

public:
    void push() {};
};


#endif //ABSTRACT_VM_ABSTRACTVM_H
