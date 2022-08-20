#include <iostream>
#include "Operand.hpp"
#include "IOperand.hpp"

template<typename T>
Operand<T>::Operand() {}

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
    Operand<eOperandType> const * operand;
    const std::string& rhsStr = rhs.toString();
    double rhsNum;
    double num;

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

template<class T>
int Operand<T>::getPrecision() const {
    switch (this->_type) {
        case FLOAT:
            return 7;
        case DOUBLE:
            return 15;
        default:
            return 0;
    }
}
