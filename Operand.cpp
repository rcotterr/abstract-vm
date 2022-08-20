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
    this->_value = value;
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

    eOperandType type = rhs.getType();
    if (type < this->_type) {
        type = this->_type;
    }

    operand = new Operand<eOperandType>(type, std::to_string(num + rhsNum));

    return operand;
}

//template<class T>
//double Operand<T>::getNum() const {
//    return this->_num;
//}

template<class T>
std::string const &Operand<T>::toString() const {
    return this->_value;
}

template<class T>
IOperand const *Operand<T>::operator-(const IOperand &rhs) const {
    std::cout << "- operator called" << std::endl;

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

    operand = new Operand<eOperandType>(DOUBLE, std::to_string(num - rhsNum));

    return operand;
}

template<class T>
IOperand const *Operand<T>::operator*(const IOperand &rhs) const {
    std::cout << "* operator called" << std::endl;

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

    operand = new Operand<eOperandType>(DOUBLE, std::to_string(num * rhsNum));

    return operand;
}

template<class T>
IOperand const *Operand<T>::operator/(const IOperand &rhs) const {
    std::cout << "/ operator called" << std::endl;

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

    operand = new Operand<eOperandType>(DOUBLE, std::to_string(num / rhsNum));

    return operand;
}

template<class T>
IOperand const *Operand<T>::operator%(const IOperand &rhs) const {
    std::cout << "% operator called" << std::endl;

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

    double res = fmod(num,rhsNum);
    operand = new Operand<eOperandType>(DOUBLE, std::to_string(res));

    return operand;
}
