#include <iostream>
#include <vector>

#include "Factory.hpp"
#include "Operand.hpp"

IOperand const * Factory::createOperand(eOperandType type, std::string const &value) const {
    IOperand * newOperand = new Operand<eOperandType>(type, value);
    return newOperand;
}