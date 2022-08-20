#include "abstractVM.h"

abstractVM::abstractVM() {
    this->_factory = Factory();
}

abstractVM::~abstractVM() {
    this->_stack.clear();// TO DO check memory lick
}

void abstractVM::push(IOperand const * operand) {
    std::cout << "push method " << std::endl;
    this->_stack.push_back(operand);
}

void abstractVM::assert_(IOperand const * operand) {
    if (this->_stack.empty()) {
        throw LessThanRequiredValueException();
    }
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
}

void abstractVM::pop() {
    std::cout << "pop method before" << this->_stack.size() << std::endl;
    if (this->_stack.empty()) {
        throw PopEmptyStack();
    }
    this->_stack.pop_back();
    std::cout << "pop method after" << this->_stack.size() << std::endl;
}

void abstractVM::dump() {
    std::cout << "dump method " << std::endl; //TO DO set precision in dump
    for (auto it = this->_stack.rbegin(); it != this->_stack.rend(); ++it)
    {
        double elem_num = std::stod((*it)->toString());
        std::cout << elem_num << std::endl;
    }
}

void abstractVM::add() {
    std::cout << "add method " << std::endl;
    if (this->_stack.size() < 2) {
        throw LessThanRequiredValueException();
    }
    IOperand const * first = this->_stack.back();
    std::cout << first->toString();
    this->_stack.pop_back();
    IOperand const * second = this->_stack.back();
    std::cout << second->toString() << std::endl;
    this->_stack.pop_back();

    IOperand const * result = *second + *first;
    std::cout << result->toString() << std::endl;
    this->_stack.push_back(result);

}

void abstractVM::sub() {
    std::cout << "sub method " << std::endl;
    if (this->_stack.size() < 2) {
        throw LessThanRequiredValueException();
    }
    IOperand const * first = this->_stack.back();
    std::cout << first->toString();
    this->_stack.pop_back();
    IOperand const * second = this->_stack.back();
    std::cout << second->toString() << std::endl;
    this->_stack.pop_back();

    IOperand const * result = *second - *first;
    std::cout << result->toString() << std::endl;
    this->_stack.push_back(result);
}

void abstractVM::mul() {
    std::cout << "mul method " << std::endl;
    if (this->_stack.size() < 2) {
        throw LessThanRequiredValueException();
    }
    IOperand const * first = this->_stack.back();
    std::cout << first->toString();
    this->_stack.pop_back();
    IOperand const * second = this->_stack.back();
    std::cout << second->toString() << std::endl;
    this->_stack.pop_back();

    IOperand const * result = *second * *first;
    std::cout << result->toString() << std::endl;
    this->_stack.push_back(result);
}

void abstractVM::div() {
    std::cout << "div method " << std::endl;
    if (this->_stack.size() < 2) {
        throw LessThanRequiredValueException();
    }
    IOperand const * first = this->_stack.back();
    std::cout << first->toString();
    this->_stack.pop_back();
    IOperand const * second = this->_stack.back();
    std::cout << second->toString() << std::endl;
    this->_stack.pop_back();

    if (std::stod(first->toString()) == 0) {
        throw ZeroDivision();
    }
    IOperand const * result = *second / *first;
    std::cout << result->toString() << std::endl;
    this->_stack.push_back(result);
}

void abstractVM::mod() {
    std::cout << "mod method " << std::endl;
    if (this->_stack.size() < 2) {
        throw LessThanRequiredValueException();
    }
    IOperand const * first = this->_stack.back();
    std::cout << first->toString();
    this->_stack.pop_back();
    IOperand const * second = this->_stack.back();
    std::cout << second->toString() << std::endl;
    this->_stack.pop_back();

    if (std::stod(first->toString()) == 0) {
        throw std::exception();
    }
    IOperand const * result = *second % *first;
    std::cout << result->toString() << std::endl;
    this->_stack.push_back(result);
}

void abstractVM::print() {
    std::cout << "print method " << std::endl;
    if (this->_stack.size() < 1) {
        throw LessThanRequiredValueException();
    }
    IOperand const * first = this->_stack.back();
    std::cout << first->toString();
    eOperandType elem_type = first->getType();
    if (elem_type != INT8) {
        throw std::exception();
    }
    int num = std::stoi(first->toString());
    char c = static_cast<char>(num);
    std::cout << c << std::endl;
}

void abstractVM::exit() {
    std::cout << "exit method " << std::endl;
    throw ExitProgram();
}

void abstractVM::processInstruction(std::string cmd, std::string type, std::string num) {
    eOperandType new_type;

    double value = std::stod(num);
    if (type == "int8") {
        new_type = INT8;
        if (value > std::numeric_limits<std::int8_t>::max()) {
            throw OverflowException(num);
        } else if (value < std::numeric_limits<std::int8_t>::min()) {
            throw UnderflowException(num);
        }
    } else if (type == "int16") {
        new_type = INT16;
        if (value > std::numeric_limits<std::int16_t>::max()) {
            throw OverflowException(num);
        } else if (value < std::numeric_limits<std::int16_t>::min()) {
            throw UnderflowException(num);
        }
    } else if (type == "int32") {
        new_type = INT32;
        if (value > std::numeric_limits<std::int32_t>::max()) {
            throw OverflowException(num);
        } else if (value < std::numeric_limits<std::int32_t>::min()) {
            throw UnderflowException(num);
        }
    }
    else if (type == "float") {
        new_type = FLOAT;
        if (value > std::numeric_limits<std::float_t>::max()) {
            throw OverflowException(num);
        } else if (value < std::numeric_limits<std::float_t>::lowest()) {
            throw UnderflowException(num);
        }
    } else if (type == "double") {
        new_type = DOUBLE;
    } else {
        throw std::runtime_error("No valid type");
    }

    IOperand const * factory_operand = this->_factory.createOperand(new_type, num);
    if (cmd == "push") {
        this->push(factory_operand);
    } else if (cmd == "assert") {
        this->assert_(factory_operand);
    }
}

void abstractVM::processInstruction(std::string cmd) {
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