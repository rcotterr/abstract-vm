#include <iostream>
#include "Operand.hpp"
#include "IOperand.hpp"

template<typename T>
Operand<T>::Operand() {
    return;
}

template<typename T>
Operand<T>::Operand(eOperandType type, std::string const &value) {
    this->_type = type;
    this->_value = &value;
}

template<typename T>
eOperandType Operand<T>::getType() const {
    return this->_type;
}

template<class T>
IOperand const *Operand<T>::operator+(const IOperand &rhs) const {
    std::cout << "+ operator called" << std::endl;

    const std::string& rhsStr = rhs.toString();
    double rhsNum;
    double num;
    Operand<eOperandType> const * operand;

    try {
        rhsNum = std::stod(rhsStr);
        num = std::stod(this->toString());
    } catch (const std::invalid_argument &e) {
        std::cout << e.what() << std::endl;
        return nullptr;
    } catch (const std::out_of_range &e) {
        std::cout << e.what() << std::endl;
        return nullptr;
    }

    operand = new Operand<eOperandType>(DOUBLE, std::to_string(num + rhsNum));

    return operand;
}

//template<class T>
//double Operand<T>::getNum() const {
//    return this->_num;
//}

template<class T>
std::string const &Operand<T>::toString() const {
    return *(this->_value);
}

//Fixed Fixed::operator+( Fixed const &rhs ) const {
//    print("+ operator called");
//
//    Fixed c;
//
//    int rawBits = this->getRawBits() + rhs.getRawBits();
//    c.setRawBits(rawBits);
//    return c;
//}


//template<typename T, typename Container>
//MutantStack<T, Container>::MutantStack(MutantStack<T,Container> const & src) {
//    *this = src;
//    return;
//}
//
//template<typename T, typename Container>
//MutantStack<T, Container>::MutantStack() {
//    return;
//}
//
//template<typename T, typename Container>
//MutantStack<T, Container>::~MutantStack() {
//    return;
//}
//
//template<typename T, typename Container>
//MutantStack<T, Container> & MutantStack<T, Container>::operator=(MutantStack const & src) {
//    this->c = src.c;
//    return *this;
//}
//
//template<typename T, typename Container>
//typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin() {
//    return this->c.begin();
//}
//
//template<typename T, typename Container>
//typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end() {
//    return this->c.end();
//}