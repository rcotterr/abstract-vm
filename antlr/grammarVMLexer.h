
// Generated from grammarVM.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  grammarVMLexer : public antlr4::Lexer {
public:
  enum {
    CMD_VALUE = 1, CMD = 2, INT_TYPE = 3, FLOAT_TYPE = 4, INT8 = 5, INT16 = 6, 
    INT32 = 7, DOUBLE = 8, FLOAT = 9, PUSH = 10, ASSERT = 11, POP = 12, 
    DUMP = 13, ADD = 14, SUB = 15, MUL = 16, DIV = 17, MOD = 18, PRINT = 19, 
    EXIT = 20, N = 21, Z = 22, SEP = 23, OPEN_BRACKET = 24, CLOSE_BRACKET = 25, 
    SINGLE_LINE_COMMENT = 26, SPACES = 27
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

