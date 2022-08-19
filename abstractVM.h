#include <iostream>
#include <vector>
#include "Operand.hpp"
#include "Factory.hpp"

#ifndef ABSTRACT_VM_ABSTRACTVM_H
#define ABSTRACT_VM_ABSTRACTVM_H


class abstractVM {
private:
    std::vector< const IOperand *> _stack;
    Factory _factory;

public:
    abstractVM() {
        this->_factory = Factory();// TO DO check memory lick
    };
    ~abstractVM() {
        this->_stack.clear();// TO DO check memory lick
    };
    void push(IOperand const * operand) {
        std::cout << "push method " << std::endl;
        this->_stack.push_back(operand);
    };
    void assert_(IOperand const * operand) {
        IOperand const * elem = this->_stack.back();
        eOperandType elem_type = elem->getType();
        eOperandType operand_type = operand->getType();

        const std::string elem_val = elem->toString();
        const std::string& operand_val = operand->toString();
        double elem_num = std::stod(operand_val);
        double operand_num = std::stod(elem_val);
        if (elem_type == operand_type && elem_num == operand_num) {
            return;
        }
        throw AssertNotTrue();
    };
    void pop() {
        std::cout << "pop method before" << this->_stack.size() << std::endl;
        if (this->_stack.empty()) {
            throw PopEmptyStack();
        }
        this->_stack.pop_back();
        std::cout << "pop method after" << this->_stack.size() << std::endl;
    };
    void dump() {
        std::cout << "dump method " << std::endl; //TO DO set precision in dump
        for (auto it = this->_stack.rbegin(); it != this->_stack.rend(); ++it)
        {
            double elem_num = std::stod((*it)->toString());
            std::cout << elem_num << std::endl;
        }
    };
    void add() {
        std::cout << "add method " << std::endl;
        if (this->_stack.size() < 2) {
            throw std::exception();
        }
        IOperand const * first = this->_stack.back();
        std::cout << first->toString();
        this->_stack.pop_back();
        IOperand const * second = this->_stack.back();
        std::cout << second->toString() << std::endl;
        this->_stack.pop_back();

        IOperand const * result = *first + *second;
        std::cout << result->toString() << std::endl;
        this->_stack.push_back(result);

    };
    void sub() {
        std::cout << "sub method " << std::endl;
        if (this->_stack.size() < 2) {
            throw std::exception();
        }
        IOperand const * first = this->_stack.back();
        std::cout << first->toString();
        this->_stack.pop_back();
        IOperand const * second = this->_stack.back();
        std::cout << second->toString() << std::endl;
        this->_stack.pop_back();

        IOperand const * result = *first - *second;
        std::cout << result->toString() << std::endl;
        this->_stack.push_back(result);
    };
    void mul() {
        std::cout << "mul method " << std::endl;
        if (this->_stack.size() < 2) {
            throw std::exception();
        }
        IOperand const * first = this->_stack.back();
        std::cout << first->toString();
        this->_stack.pop_back();
        IOperand const * second = this->_stack.back();
        std::cout << second->toString() << std::endl;
        this->_stack.pop_back();

        IOperand const * result = *first * *second;
        std::cout << result->toString() << std::endl;
        this->_stack.push_back(result);
    };
    void div() {
        std::cout << "div method " << std::endl;
        if (this->_stack.size() < 2) {
            throw std::exception();
        }
        IOperand const * first = this->_stack.back();
        std::cout << first->toString();
        this->_stack.pop_back();
        IOperand const * second = this->_stack.back();
        std::cout << second->toString() << std::endl;
        this->_stack.pop_back();

        if (std::stod(second->toString()) == 0) {
            throw ZeroDivision();
        }
        IOperand const * result = *first / *second;
        std::cout << result->toString() << std::endl;
        this->_stack.push_back(result);
    };
    void mod() {
        std::cout << "mod method " << std::endl;
        if (this->_stack.size() < 2) {
            throw std::exception();
        }
        IOperand const * first = this->_stack.back();
        std::cout << first->toString();
        this->_stack.pop_back();
        IOperand const * second = this->_stack.back();
        std::cout << second->toString() << std::endl;
        this->_stack.pop_back();

        if (std::stod(second->toString()) == 0) {
            throw std::exception();
        }
        IOperand const * result = *first % *second;
        std::cout << result->toString() << std::endl;
        this->_stack.push_back(result);
    };
    void print() {
        std::cout << "print method " << std::endl;
        if (this->_stack.size() < 1) {
            throw std::exception();
        }
        IOperand const * first = this->_stack.back();
        std::cout << first->toString();
        eOperandType elem_type = first->getType();
        if (elem_type != INT8) {
            throw std::exception();
        }
        int num = std::stoi(first->toString());
//        char c = char(num);
        char c = static_cast<char>(num);
        std::cout << c << std::endl;
    };
    void exit() {
        std::cout << "exit method " << std::endl;
        throw ExitProgram();
    };


    void processInstruction(std::string cmd, std::string type, std::string num) {
        eOperandType new_type;

        double value = std::stod(num);
        if (type.find("int") != -1 ) {
//            int value = std::stoi(num);
            if (type.find('8') != -1 ) {
                new_type = INT8;
                if (!(value <= std::numeric_limits<std::int8_t>::max()
                      && value >= std::numeric_limits<std::int8_t>::min())) {
                    throw std::exception();
                }
            }
            else if (type.find("16") != -1 ) {
                new_type = INT16;
                if (!(value <= std::numeric_limits<std::int16_t>::max()
                      && value >= std::numeric_limits<std::int16_t>::min())) {
                    throw std::exception();
                }
            }
            else if (type.find("32") != -1 ) {
                new_type = INT32;
                if (!(value <= std::numeric_limits<std::int32_t>::max()
                      && value >= std::numeric_limits<std::int32_t>::min())) {
                    throw std::exception();
                }
            }
            else {
                std::cout << "error!" << std::endl;
                throw std::exception();
            }
        }
        else if (type == "float") {
            new_type = FLOAT;
            if (!(value <= std::numeric_limits<std::float_t>::max()
                  && value >= std::numeric_limits<std::float_t>::lowest())) {
                std::cout << std::numeric_limits<std::float_t>::lowest() << std::endl;
                float check = std::numeric_limits<std::float_t>::lowest();
                if (value <= (float)check) {
                    std::cout << check << " " << value << std::endl;
                }
                throw std::exception();
            }
//            float value = std::stof(num);
        }
        else if (type == "double") {
            new_type = DOUBLE;
        }
        else {
            std::cout << "error!" << std::endl;
            throw std::exception();
        }

        IOperand const * factory_operand = this->_factory.createOperand(new_type, num);
        if (cmd == "push") {
            this->push(factory_operand);
        } else if (cmd == "assert") {
            this->assert_(factory_operand);
        }
    };
    void processInstruction(std::string cmd) {
        if (cmd == "pop") {
            this->pop();
        } else if (cmd == "dump") {
            this->dump();
        }else if (cmd == "add") {
            this->add();
        }
        else if (cmd == "sub") {
            this->sub();
        }
        else if (cmd == "mul") {
            this->mul();
        }
        else if (cmd == "div") {
            this->div();
        }
        else if (cmd == "mod") {
            this->mod();
        }
        else if (cmd == "print") {
            this->print();
        }
        else if (cmd == "exit") {
            this->exit();
        }
    };

    class ExitProgram : public std::exception
    {
    public:
        virtual const char * what() const throw()
        {
            return ("Exit the program");
        }
    };
    class ZeroDivision : public std::exception
    {
    public:
        virtual const char * what() const throw()
        {
            return ("Division/modulo by 0");
        }
    };
    class AssertNotTrue : public std::exception
    {
    public:
        virtual const char * what() const throw()
        {
            return ("Assert not true");
        }
    };
    class PopEmptyStack : public std::exception
    {
    public:
        virtual const char * what() const throw()
        {
            return ("Instruction pop on empty stack");
        }
    };
};


#endif //ABSTRACT_VM_ABSTRACTVM_H
