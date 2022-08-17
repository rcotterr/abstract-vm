
// Generated from grammarVM.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  grammarVMLexer : public antlr4::Lexer {
public:
  enum {
    CMD_VALUE = 1, CMD = 2, VALUE = 3, INT8 = 4, INT16 = 5, INT32 = 6, DOUBLE = 7, 
    FLOAT = 8, PUSH = 9, ASSERT = 10, POP = 11, DUMP = 12, ADD = 13, SUB = 14, 
    MUL = 15, DIV = 16, MOD = 17, PRINT = 18, EXIT = 19, N = 20, Z = 21, 
    SEP = 22, OPEN_BRACKET = 23, CLOSE_BRACKET = 24, SINGLE_LINE_COMMENT = 25, 
    SPACES = 26
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

