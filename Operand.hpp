#include <iostream>
#include <stack>
#include "IOperand.hpp"

#ifndef OPERAND_HPP
#define OPERAND_HPP


template <class T>
class Operand : public IOperand
{
    private:
        eOperandType _type;

    public:
        Operand();
        Operand(eOperandType type);
        eOperandType getType() const;
//        ~Operand();
//        Array<T>(unsigned int n) {
//            this->_len = n;
//            this->_arr = new T[this->_len];
//            return;
//        };
//        MutantStack & operator=(MutantStack const & src);
//        MutantStack( const MutantStack<T, Container> & src);
//
//        typedef typename std::stack<T>::container_type::iterator iterator;
//        iterator begin();
//        iterator end();


};

#endif