#include <iostream>
#include <vector>
#include <tclap/CmdLine.h>

#include "Operand.hpp"
#include "Factory.hpp"
#include "Factory.cpp"
#include "Operand.cpp"

#include "antlr4-runtime.h"
#include "antlr/grammarVMLexer.h"
#include "antlr/grammarVMParser.h"
#include "grammarVMMyVisitor.h"
#include "abstractVM.h"



int main(int argc, char **argv) {

    const std::string no_file = "no file";

    TCLAP::CmdLine cmd("Abstract VM", ' ', "1");
    TCLAP::ValueArg<std::string> fileArg("f","file","File to parse", false,no_file,"string");
    TCLAP::SwitchArg stdInput("i","input","Use standard input", cmd, false);

    cmd.add( fileArg);
    cmd.parse(argc, argv);

    std::string file = fileArg.getValue();
    bool useStdInput = stdInput.getValue();

    std::string input_;
    if (file != no_file) {
        std::ifstream t(file); //TO DO check no such file
        std::stringstream buffer;
        buffer << t.rdbuf();
        input_ = buffer.str();
    } else if (useStdInput) {
        //input std here
        input_ = "pop\nsub";
    } else {
        std::cout << "Add -h to know usage" << std::endl;
        return 0;
    }

//    try {
//
//    }
// Provide the input text in a stream
    antlr4::ANTLRInputStream input(input_);
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
