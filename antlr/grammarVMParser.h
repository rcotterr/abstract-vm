
// Generated from grammarVM.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  grammarVMParser : public antlr4::Parser {
public:
  enum {
    CMD_VALUE = 1, CMD = 2, VALUE = 3, INT_TYPE = 4, FLOAT_TYPE = 5, INT8 = 6, 
    INT16 = 7, INT32 = 8, DOUBLE = 9, FLOAT = 10, PUSH = 11, ASSERT = 12, 
    POP = 13, DUMP = 14, ADD = 15, SUB = 16, MUL = 17, DIV = 18, MOD = 19, 
    PRINT = 20, EXIT = 21, N = 22, Z = 23, SEP = 24, OPEN_BRACKET = 25, 
    CLOSE_BRACKET = 26, SINGLE_LINE_COMMENT = 27, SPACES = 28
  };

  enum {
    RuleProg = 0, RuleInstr = 1
  };

  explicit grammarVMParser(antlr4::TokenStream *input);

  grammarVMParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~grammarVMParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class InstrContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InstrContext *> instr();
    InstrContext* instr(size_t i);
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> SEP();
    antlr4::tree::TerminalNode* SEP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  InstrContext : public antlr4::ParserRuleContext {
  public:
    InstrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CMD_VALUE();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *CMD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstrContext* instr();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

