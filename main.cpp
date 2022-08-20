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
#include "AbstractVMVisitor.h"
#include "AbstractVMVisitor.cpp"
#include "abstractVM.h"
#include "LexerParserErrors.h"
#include "LexerParserErrors.cpp"



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
        if (!t) {
            std::cout << "Failed to open file\n";
            return 1;
        }
        std::stringstream buffer;
        buffer << t.rdbuf();
        input_ = buffer.str();
    } else if (useStdInput) {
        for (std::string line; std::getline(std::cin, line);) {
            if (line == ";;") {
                break;
            }
            input_ += line + "\n";
        }
    } else {
        std::cout << "Add -h to know usage" << std::endl;
        return 0;
    }


    try {
        // Provide the input text in a stream
        antlr4::ANTLRInputStream input(input_);

        // Create a lexer from the input
        grammarVMLexer  lexer(&input);

        // Create a token stream from the lexer
        antlr4::CommonTokenStream tokens(&lexer);

        // Create a parser from the token stream
        grammarVMParser parser(&tokens);

        grammarVMParser::ProgContext* prog = parser.prog();

        LexerParserErrors lexerParserErrors = LexerParserErrors();
        lexerParserErrors.processErrors(&parser);

        AbstractVMVisitor visitor;
        prog->accept(&visitor);
        throw abstractVM::NoValidExit();
    }
    catch (abstractVM::ExitProgram& e) {
        return 0;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
        return 1;
    }
}
