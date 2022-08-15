#include <iostream>
#include <vector>

#include "Operand.hpp"
#include "Factory.hpp"
#include "Factory.cpp"
#include "Operand.cpp"

#include "antlr4-runtime.h"
#include "antlr/grammarVMLexer.h"
#include "antlr/grammarVMParser.h"

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

    IOperand const * test_sum = *test1 + *test2;
    const std::string test_sum_string = test_sum->toString();
    std::cout << "test sum: " << test_sum_string << std::endl;
    delete test_sum;

    IOperand const * test_dif = *test1 - *test2;
    const std::string test_dif_string = test_dif->toString();
    std::cout << "test dif: " << test_dif_string << std::endl;
    delete test_dif;

    IOperand const * test_product = *test1 * *test2;
    const std::string test_product_string = test_product->toString();
    std::cout << "test product: " << test_product_string << std::endl;
    delete test_product;

    IOperand const * test_quotient = *test1 / *test2;
    const std::string test_quotient_string = test_quotient->toString();
    std::cout << "test quotient: " << test_quotient_string << std::endl;
    delete test_quotient;

    IOperand const * test_modulo = *test1 % *test2;
    const std::string test_modulo_string = test_modulo->toString();
    std::cout << "test modulo: " << test_modulo_string << std::endl;
    delete test_modulo;


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
    std::cout << testNew4->getType() << std::endl;
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


// Provide the input text in a stream
    antlr4::ANTLRInputStream input("pop\nsub\n");

    // Create a lexer from the input
    grammarVMLexer  lexer(&input);

    // Create a token stream from the lexer
    antlr4::CommonTokenStream tokens(&lexer);

    // Create a parser from the token stream
    grammarVMParser parser(&tokens);

    grammarVMParser::ExprContext* expr = parser.expr();
    // Display the parse tree
    std::cout << expr->toStringTree() << std::endl;

    return 0;
}


// https://stackoverflow.com/questions/21805574/how-to-have-a-c-stack-with-more-than-one-data-type