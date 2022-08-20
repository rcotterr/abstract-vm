#include <iostream>
#include <vector>
#include <stdexcept>
#include <exception>
#include "Operand.hpp"
#include "Factory.hpp"

#ifndef ABSTRACT_VM_ABSTRACTVM_H
#define ABSTRACT_VM_ABSTRACTVM_H


class abstractVM {
private:
    std::vector< const IOperand *> _stack;
    Factory _factory;

public:
    abstractVM() ;
    ~abstractVM();

    void push(IOperand const * operand) ;
    void assert_(IOperand const * operand);
    void pop();
    void dump();
    void add();
    void sub();
    void mul();
    void div();
    void mod();
    void print();
    void exit();


    void processInstruction(std::string cmd, std::string type, std::string num);
    void processInstruction(std::string cmd) ;

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
    class LessThanRequiredValueException : public std::exception
    {
    public:
        virtual const char * what() const throw()
        {
            return ("Less than required num values in stack");
        }
    };
    class UnderflowException : public std::underflow_error
    {
    public:
        UnderflowException(const std::string &s) : underflow_error("Underflow exception with value " + s) {}
    };
    class OverflowException : public std::overflow_error
    {
    public:
        OverflowException(const std::string &s) : overflow_error("Overflow exception with value " + s) {}
    };
    class OutOfRangeException : public std::runtime_error
    {
    public:
        OutOfRangeException(const std::string &s) : runtime_error("Overflow exception with value " + s) {}
    };
    class NoValidExit : public std::exception
    {
    public:
        virtual const char * what() const throw()
        {
            return ("No exit instruction");
        }
    };
};


#endif
