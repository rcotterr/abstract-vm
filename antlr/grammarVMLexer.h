
// Generated from grammarVM.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  grammarVMLexer : public antlr4::Lexer {
public:
  enum {
    CMD_VALUE = 1, CMD = 2, VALUE = 3, INT_TYPE = 4, FLOAT_TYPE = 5, INT8 = 6, 
    INT16 = 7, INT32 = 8, DOUBLE = 9, FLOAT = 10, PUSH = 11, ASSERT = 12, 
    POP = 13, DUMP = 14, ADD = 15, SUB = 16, MUL = 17, DIV = 18, MOD = 19, 
    PRINT = 20, EXIT = 21, N = 22, Z = 23, SEP = 24, OPEN_BRACKET = 25, 
    CLOSE_BRACKET = 26, SINGLE_LINE_COMMENT = 27, SPACES = 28
  };

  explicit grammarVMLexer(antlr4::CharStream *input);

  ~grammarVMLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

