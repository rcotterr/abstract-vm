
// Generated from grammarVM.g4 by ANTLR 4.10.1


#include "grammarVMListener.h"
#include "grammarVMVisitor.h"

#include "grammarVMParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct GrammarVMParserStaticData final {
  GrammarVMParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GrammarVMParserStaticData(const GrammarVMParserStaticData&) = delete;
  GrammarVMParserStaticData(GrammarVMParserStaticData&&) = delete;
  GrammarVMParserStaticData& operator=(const GrammarVMParserStaticData&) = delete;
  GrammarVMParserStaticData& operator=(GrammarVMParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag grammarvmParserOnceFlag;
GrammarVMParserStaticData *grammarvmParserStaticData = nullptr;

void grammarvmParserInitialize() {
  assert(grammarvmParserStaticData == nullptr);
  auto staticData = std::make_unique<GrammarVMParserStaticData>(
    std::vector<std::string>{
      "prog", "instr"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "'int8'", "'int16'", "'int32'", "'double'", 
      "'float'", "'push'", "'assert'", "'pop'", "'dump'", "'add'", "'sub'", 
      "'mul'", "'div'", "'mod'", "'print'", "'exit'", "", "", "", "'('", 
      "')'"
    },
    std::vector<std::string>{
      "", "CMD_VALUE", "CMD", "VALUE", "INT_TYPE", "FLOAT_TYPE", "INT8", 
      "INT16", "INT32", "DOUBLE", "FLOAT", "PUSH", "ASSERT", "POP", "DUMP", 
      "ADD", "SUB", "MUL", "DIV", "MOD", "PRINT", "EXIT", "N", "Z", "SEP", 
      "OPEN_BRACKET", "CLOSE_BRACKET", "SINGLE_LINE_COMMENT", "SPACES"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,28,26,2,0,7,0,2,1,7,1,1,0,5,0,6,8,0,10,0,12,0,9,9,0,1,0,1,0,1,0,5,
  	0,14,8,0,10,0,12,0,17,9,0,1,0,1,0,1,1,1,1,1,1,3,1,24,8,1,1,1,0,0,2,0,
  	2,0,0,26,0,7,1,0,0,0,2,23,1,0,0,0,4,6,5,24,0,0,5,4,1,0,0,0,6,9,1,0,0,
  	0,7,5,1,0,0,0,7,8,1,0,0,0,8,10,1,0,0,0,9,7,1,0,0,0,10,15,3,2,1,0,11,12,
  	5,24,0,0,12,14,3,2,1,0,13,11,1,0,0,0,14,17,1,0,0,0,15,13,1,0,0,0,15,16,
  	1,0,0,0,16,18,1,0,0,0,17,15,1,0,0,0,18,19,5,0,0,1,19,1,1,0,0,0,20,21,
  	5,1,0,0,21,24,5,3,0,0,22,24,5,2,0,0,23,20,1,0,0,0,23,22,1,0,0,0,24,3,
  	1,0,0,0,3,7,15,23
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  grammarvmParserStaticData = staticData.release();
}

}

grammarVMParser::grammarVMParser(TokenStream *input) : grammarVMParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

grammarVMParser::grammarVMParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  grammarVMParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *grammarvmParserStaticData->atn, grammarvmParserStaticData->decisionToDFA, grammarvmParserStaticData->sharedContextCache, options);
}

grammarVMParser::~grammarVMParser() {
  delete _interpreter;
}

const atn::ATN& grammarVMParser::getATN() const {
  return *grammarvmParserStaticData->atn;
}

std::string grammarVMParser::getGrammarFileName() const {
  return "grammarVM.g4";
}

const std::vector<std::string>& grammarVMParser::getRuleNames() const {
  return grammarvmParserStaticData->ruleNames;
}

const dfa::Vocabulary& grammarVMParser::getVocabulary() const {
  return grammarvmParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView grammarVMParser::getSerializedATN() const {
  return grammarvmParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

grammarVMParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<grammarVMParser::InstrContext *> grammarVMParser::ProgContext::instr() {
  return getRuleContexts<grammarVMParser::InstrContext>();
}

grammarVMParser::InstrContext* grammarVMParser::ProgContext::instr(size_t i) {
  return getRuleContext<grammarVMParser::InstrContext>(i);
}

tree::TerminalNode* grammarVMParser::ProgContext::EOF() {
  return getToken(grammarVMParser::EOF, 0);
}

std::vector<tree::TerminalNode *> grammarVMParser::ProgContext::SEP() {
  return getTokens(grammarVMParser::SEP);
}

tree::TerminalNode* grammarVMParser::ProgContext::SEP(size_t i) {
  return getToken(grammarVMParser::SEP, i);
}


size_t grammarVMParser::ProgContext::getRuleIndex() const {
  return grammarVMParser::RuleProg;
}

void grammarVMParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grammarVMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void grammarVMParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grammarVMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


std::any grammarVMParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammarVMVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

grammarVMParser::ProgContext* grammarVMParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, grammarVMParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(7);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == grammarVMParser::SEP) {
      setState(4);
      match(grammarVMParser::SEP);
      setState(9);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(10);
    instr();
    setState(15);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == grammarVMParser::SEP) {
      setState(11);
      match(grammarVMParser::SEP);
      setState(12);
      instr();
      setState(17);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(18);
    match(grammarVMParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstrContext ------------------------------------------------------------------

grammarVMParser::InstrContext::InstrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grammarVMParser::InstrContext::CMD_VALUE() {
  return getToken(grammarVMParser::CMD_VALUE, 0);
}

tree::TerminalNode* grammarVMParser::InstrContext::VALUE() {
  return getToken(grammarVMParser::VALUE, 0);
}

tree::TerminalNode* grammarVMParser::InstrContext::CMD() {
  return getToken(grammarVMParser::CMD, 0);
}


size_t grammarVMParser::InstrContext::getRuleIndex() const {
  return grammarVMParser::RuleInstr;
}

void grammarVMParser::InstrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grammarVMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstr(this);
}

void grammarVMParser::InstrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grammarVMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstr(this);
}


std::any grammarVMParser::InstrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammarVMVisitor*>(visitor))
    return parserVisitor->visitInstr(this);
  else
    return visitor->visitChildren(this);
}

grammarVMParser::InstrContext* grammarVMParser::instr() {
  InstrContext *_localctx = _tracker.createInstance<InstrContext>(_ctx, getState());
  enterRule(_localctx, 2, grammarVMParser::RuleInstr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(23);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grammarVMParser::CMD_VALUE: {
        enterOuterAlt(_localctx, 1);
        setState(20);
        match(grammarVMParser::CMD_VALUE);
        setState(21);
        match(grammarVMParser::VALUE);
        break;
      }

      case grammarVMParser::CMD: {
        enterOuterAlt(_localctx, 2);
        setState(22);
        match(grammarVMParser::CMD);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void grammarVMParser::initialize() {
  std::call_once(grammarvmParserOnceFlag, grammarvmParserInitialize);
}
