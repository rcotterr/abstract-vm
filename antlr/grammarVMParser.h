
// Generated from grammarVM.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  grammarVMParser : public antlr4::Parser {
public:
  enum {
    CMD_VALUE = 1, CMD = 2, INT_TYPE = 3, FLOAT_TYPE = 4, INT8 = 5, INT16 = 6, 
    INT32 = 7, DOUBLE = 8, FLOAT = 9, PUSH = 10, ASSERT = 11, POP = 12, 
    DUMP = 13, ADD = 14, SUB = 15, MUL = 16, DIV = 17, MOD = 18, PRINT = 19, 
    EXIT = 20, N = 21, Z = 22, SEP = 23, OPEN_BRACKET = 24, CLOSE_BRACKET = 25, 
    SINGLE_LINE_COMMENT = 26, SPACES = 27
  };

  enum {
    RuleProg = 0, RuleInstr = 1, RuleValue = 2
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
  class ValueContext; 

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
    ValueContext *value();
    antlr4::tree::TerminalNode *CMD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstrContext* instr();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_TYPE();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    antlr4::tree::TerminalNode *N();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *FLOAT_TYPE();
    antlr4::tree::TerminalNode *Z();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

