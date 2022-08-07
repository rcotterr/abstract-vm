#include <iostream>
#include "Operand.hpp"

template<typename T>
Operand<T>::Operand() {
    return;
}

template<typename T>
Operand<T>::Operand(eOperandType type) {
    this->_type = type;
    return;
}

template<typename T>
eOperandType Operand<T>::getType() const {
    return this->_type;
}




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