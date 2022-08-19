#include <iostream>
#include <vector>

#include "Operand.hpp"
#include "Factory.hpp"
#include "Factory.cpp"
#include "Operand.cpp"

#include "antlr4-runtime.h"
#include "antlr/grammarVMLexer.h"
#include "antlr/grammarVMParser.h"
#include "grammarVMMyVisitor.h"
#include "abstractVM.h"


int main() {

    Factory factory = Factory();
    IOperand const * factory_test = factory.createOperand(INT32, "123");
    std::cout << "factory_method " << factory_test->getType() << std::endl;
    delete factory_test;

    IOperand * test = new Operand<eOperandType>(INT8, "1");
    IOperand * test1 = new Operand<eOperandType>(INT16, "2");
    IOperand * test2 = new Operand<eOperandType>(INT32, "3");
    IOperand * test3 = new Operand<eOperandType>(FLOAT, "4");
    IOperand * test4 = new Operand<eOperandType>(DOUBLE, "5");

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


    std::vector< IOperand *> stack;

    stack.push_back(test);
    stack.push_back(test1);
    stack.push_back(test2);
    stack.push_back(test3);
    stack.push_back(test4);

    for (auto it = stack.rbegin(); it != stack.rend(); ++it)
    {
        std::cout << (*it)->getType() << std::endl;
    }

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


// Provide the input text in a stream
//    antlr4::ANTLRInputStream input("pop\nsub");
    std::ifstream t("/Users/marina.romashkova/abstract-vm/examples/check_test8");
    std::stringstream buffer;
    buffer << t.rdbuf();
    antlr4::ANTLRInputStream input(buffer.str());
//    antlr4::ANTLRInputStream input("push int32(42)\n"
//                                   "push int32(33)\n"
//                                   "add\n"
//                                   ";poney\n"
//                                   "push float(44.55)\n"
//                                   "mul\n"
//                                   "push double(42.42)\n ;commentaire de ouf\n" //TO DO "push double(42.42);commentaire de ouf\n" not working
//                                   "push int32(42)\n"
//                                   "dump\n"
//                                   "pop\n"
//                                   "assert double(42.42)\n"
//                                   "exit");

//            "push int32(2)\n"
//                                   "push int32(3)\n"
//                                   "add\n"
//                                   "assert int32(5)\n"
//                                   "dump\n"
//                                   "pop\n"
//                                   "dump\n"
//                                   "push int32(3)\n"
//                                   "push int32(5)\n"
//                                   "sub\n"
//                                   "dump\n"
//                                   "push int32(3)\n"
//                                   "mul\n"
//                                   "dump\n"
//                                   "push int8(12)\n"
//                                   "div\n"
//                                   "dump\n"
//                                   "push int8(3)\n"
//                                   "mod\n"
//                                   "dump\n"
//                                   "push int8(65)\n"
//                                   "print\n"
//                                   "dump\n"
//                                   "pop\n"
////                                   "pop\n"
////                                   "pop\n"
////                                   "push int8(0)\n"
////                                   "push int8(1)\n"
////                                   "div\n"
//
////                                   "push int8(128)\n"
////                                   "push int8(-129)\n"
////                                   "push int16(32768)\n"
////                                   "push int16(-32769)\n"
////                                   "push int32(2147483648)\n"
////                                   "push int32(-2147483649)\n"
////                                   "push float(340283000000000000000000000000000000000.0000000000000000)\n" //340282
////                                   "push float(-340283000000000000000000000000000000000.0)\n" //-340282
////                                   "push double(17977031348623157081452742373170435679807056752584499659891747680315726"
////                                   "07800285387605895586327668781715404589535143824642343213268894641827684675467035375"
////                                   "16986049910576551282076245490090389328944075868508455133942304583236903222948165808"
////                                   "559332123348274797826204144723168738177180919299881250404026184124858368.0000000000"
////                                   "000000)\n" //179769
////                                   "push double(-1797703134862315708145274237317043567980705675258449965989174768031572"
////                                   "60780028538760589558632766878171540458953514382464234321326889464182768467546703537"
////                                   "51698604991057655128207624549009038932894407586850845513394230458323690322294816580"
////                                   "8559332123348274797826204144723168738177180919299881250404026184124858368.000000000"
////                                   "0000000)\n" //-179769
//
//                                   "exit");
////            "push int32(2)\n"
////                                   "push int32(3)\n"
////                                   "add\n"
////                                   "assert int32(5)\n"
////                                   "dump\n"
////                                   "exit");

    // Create a lexer from the input
    grammarVMLexer  lexer(&input);

    auto err = lexer.getNumberOfSyntaxErrors();
    std::cout << "err " << err << std::endl;

    auto err2 = lexer.getErrorListenerDispatch();


    // Create a token stream from the lexer
    antlr4::CommonTokenStream tokens(&lexer);

    // Create a parser from the token stream
    grammarVMParser parser(&tokens);

    auto err_ = parser.getNumberOfSyntaxErrors();
    std::cout << "err " << err_ << std::endl;

    grammarVMParser::ProgContext* prog = parser.prog();
    // Display the parse tree
    std::cout << prog->toStringTree() << std::endl;

    auto err__ = parser.getNumberOfSyntaxErrors();
    std::cout << "err " << err__ << std::endl;

    auto err___ = parser.getRuleInvocationStack();
//    std::cout << "err " << err___ << std::endl;

    auto err5 = parser.getErrorHandler();
//    std::cout << "synt errors: " << std::endl;
    err5->reportMatch(&parser);
//    std::cout << "err " << err___ << std::endl;

    if (err__ != 0) {
        std::cout << "Some errors occurred " << std::endl;
        return 1;
    }

    grammarVMMyVisitor visitor;
    try {
        prog->accept(&visitor);
        throw std::exception(); //TO DO move exception to some class with normal name
    }
    catch (abstractVM::ZeroDivision& e) {
        std::cout << e.what() << std::endl;
    }
    catch (abstractVM::ExitProgram& e) {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
//        std::cout << "No exit instruction" << e.what() <<std::endl;
    }

    return 0;
}
