
// Generated from grammarVM.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  grammarVMParser : public antlr4::Parser {
public:
  enum {
    CMD_VALUE = 1, CMD = 2, VALUE = 3, INT8 = 4, INT16 = 5, INT32 = 6, DOUBLE = 7, 
    FLOAT = 8, PUSH = 9, ASSERT = 10, POP = 11, DUMP = 12, ADD = 13, SUB = 14, 
    MUL = 15, DIV = 16, MOD = 17, PRINT = 18, EXIT = 19, N = 20, Z = 21, 
    SEP = 22, OPEN_BRACKET = 23, CLOSE_BRACKET = 24, SINGLE_LINE_COMMENT = 25, 
    SPACES = 26
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

