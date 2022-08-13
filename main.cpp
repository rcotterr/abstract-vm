#include <iostream>
#include <vector>

#include "Operand.hpp"
#include "Factory.hpp"
#include "Factory.cpp"
#include "Operand.cpp"

int main() {

    Factory factory = Factory();
    IOperand const * factory_test = factory.createOperand(INT32, "123");
    std::cout << "factory_method " << factory_test->getType() << std::endl;
    delete factory_test;

    IOperand * test = new Operand<eOperandType>(INT8, "1"); //TO DO INTEGER instead of int
    IOperand * test1 = new Operand<eOperandType>(INT16, "2"); //TO DO INTEGER instead of int
    IOperand * test2 = new Operand<eOperandType>(INT32, "3"); //TO DO INTEGER instead of int
    IOperand * test3 = new Operand<eOperandType>(FLOAT, "4"); //TO DO INTEGER instead of int
    IOperand * test4 = new Operand<eOperandType>(DOUBLE, "5"); //TO DO INTEGER instead of int

    std::vector< IOperand *> stack; //TO DO INTEGER instead of int
//    std::vector<Operand<int> > stack; //TO DO INTEGER instead of int

    stack.push_back(test);
    stack.push_back(test1);
    stack.push_back(test2);
    stack.push_back(test3);
    stack.push_back(test4);
    IOperand * testNew = stack.back();
    std::cout << testNew->getType();
    stack.pop_back();
    IOperand * testNew1 = stack.back();
    std::cout << testNew1->getType();
    stack.pop_back();
    IOperand * testNew2 = stack.back();
    std::cout << testNew2->getType();
    stack.pop_back();
    IOperand * testNew3 = stack.back();
    std::cout << testNew3->getType();
    stack.pop_back();
    IOperand * testNew4 = stack.back();
    std::cout << testNew4->getType();
    stack.pop_back();
    delete test;
    delete test1;
    delete test2;
    delete test3;
    delete test4;
//

//    enum Type { INTEGER, DOUBLE, /* ... */ };
//
//    union Data {
//        uint64_t as_integer;
//        double as_double;
//        // ...
//    };
//
//    struct Value {
//        Type type;
//        Data data;
//         public:     //by default also it is public
//            hello();
//            ~hello();
//    };
//
//    std::vector<Value> stack;
//
//    Value v = Value();
//    // v.type = INTEGER;
//    // v.data = 1;
//
//    stack.push_back(v);
//    // for (Value i: stack)
//    //     std::cout << i.data << ' ';


    return 0;
}


// https://stackoverflow.com/questions/21805574/how-to-have-a-c-stack-with-more-than-one-data-type