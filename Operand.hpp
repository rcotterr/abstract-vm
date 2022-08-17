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
        std::string const * _value; //TO DO make reference not pointer
        double _num;

    public:
        Operand();
        Operand(eOperandType type, std::string const &value);
        eOperandType getType() const;
//        double getNum() const;
        IOperand const * operator+( IOperand const &rhs ) const;
        IOperand const * operator-( IOperand const &rhs ) const;
        IOperand const * operator*( IOperand const &rhs ) const;
        IOperand const * operator/( IOperand const &rhs ) const;
        IOperand const * operator%( IOperand const &rhs ) const;
        std::string const & toString() const;
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