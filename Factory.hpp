#include <iostream>
#include <stack>
#include "IOperand.hpp"

#ifndef FACTORY_HPP
# define FACTORY_HPP


class Factory {
    public:
        IOperand const * createOperand(eOperandType type, std::string const &value) const;
};

#endif