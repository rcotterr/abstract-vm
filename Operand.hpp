#include <iostream>
#include <stack>
#include "IOperand.hpp"

#ifndef OPERAND_HPP
# define OPERAND_HPP


template <class T>
class Operand : public IOperand
{
    private:
        eOperandType _type;
        std::string _value;

    public:
        Operand();
        Operand(eOperandType type, std::string const &value);
        eOperandType getType() const;
        int getPrecision() const;
        IOperand const * operator+( IOperand const &rhs ) const;
        IOperand const * operator-( IOperand const &rhs ) const;
        IOperand const * operator*( IOperand const &rhs ) const;
        IOperand const * operator/( IOperand const &rhs ) const;
        IOperand const * operator%( IOperand const &rhs ) const;
        std::string const & toString() const;

};

#endif