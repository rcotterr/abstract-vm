
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
      "", "'push'", "'pop'", "'dump'", "'assert'", "'add'", "'sub'", "'mul'", 
      "'div'", "'mod'", "'print'", "'exit'", "", "'int8'", "'int16'", "'int32'", 
      "'double'", "'float'", "", "", "", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "VALUE", "INT8", "INT16", 
      "INT32", "DOUBLE", "FLOAT", "N", "Z", "SEP", "OPEN_BRACKET", "CLOSE_BRACKET", 
      "SINGLE_LINE_COMMENT", "SPACES"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,24,30,2,0,7,0,2,1,7,1,1,0,1,0,1,0,5,0,8,8,0,10,0,12,0,11,9,0,1,0,
  	1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,28,8,1,1,
  	1,0,0,2,0,2,0,0,38,0,4,1,0,0,0,2,27,1,0,0,0,4,9,3,2,1,0,5,6,5,20,0,0,
  	6,8,3,2,1,0,7,5,1,0,0,0,8,11,1,0,0,0,9,7,1,0,0,0,9,10,1,0,0,0,10,12,1,
  	0,0,0,11,9,1,0,0,0,12,13,5,0,0,1,13,1,1,0,0,0,14,15,5,1,0,0,15,28,5,12,
  	0,0,16,28,5,2,0,0,17,28,5,3,0,0,18,19,5,4,0,0,19,28,5,12,0,0,20,28,5,
  	5,0,0,21,28,5,6,0,0,22,28,5,7,0,0,23,28,5,8,0,0,24,28,5,9,0,0,25,28,5,
  	10,0,0,26,28,5,11,0,0,27,14,1,0,0,0,27,16,1,0,0,0,27,17,1,0,0,0,27,18,
  	1,0,0,0,27,20,1,0,0,0,27,21,1,0,0,0,27,22,1,0,0,0,27,23,1,0,0,0,27,24,
  	1,0,0,0,27,25,1,0,0,0,27,26,1,0,0,0,28,3,1,0,0,0,2,9,27
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
    setState(4);
    instr();
    setState(9);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == grammarVMParser::SEP) {
      setState(5);
      match(grammarVMParser::SEP);
      setState(6);
      instr();
      setState(11);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(12);
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

tree::TerminalNode* grammarVMParser::InstrContext::VALUE() {
  return getToken(grammarVMParser::VALUE, 0);
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
    setState(27);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grammarVMParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(14);
        match(grammarVMParser::T__0);
        setState(15);
        match(grammarVMParser::VALUE);
        break;
      }

      case grammarVMParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(16);
        match(grammarVMParser::T__1);
        break;
      }

      case grammarVMParser::T__2: {
        enterOuterAlt(_localctx, 3);
        setState(17);
        match(grammarVMParser::T__2);
        break;
      }

      case grammarVMParser::T__3: {
        enterOuterAlt(_localctx, 4);
        setState(18);
        match(grammarVMParser::T__3);
        setState(19);
        match(grammarVMParser::VALUE);
        break;
      }

      case grammarVMParser::T__4: {
        enterOuterAlt(_localctx, 5);
        setState(20);
        match(grammarVMParser::T__4);
        break;
      }

      case grammarVMParser::T__5: {
        enterOuterAlt(_localctx, 6);
        setState(21);
        match(grammarVMParser::T__5);
        break;
      }

      case grammarVMParser::T__6: {
        enterOuterAlt(_localctx, 7);
        setState(22);
        match(grammarVMParser::T__6);
        break;
      }

      case grammarVMParser::T__7: {
        enterOuterAlt(_localctx, 8);
        setState(23);
        match(grammarVMParser::T__7);
        break;
      }

      case grammarVMParser::T__8: {
        enterOuterAlt(_localctx, 9);
        setState(24);
        match(grammarVMParser::T__8);
        break;
      }

      case grammarVMParser::T__9: {
        enterOuterAlt(_localctx, 10);
        setState(25);
        match(grammarVMParser::T__9);
        break;
      }

      case grammarVMParser::T__10: {
        enterOuterAlt(_localctx, 11);
        setState(26);
        match(grammarVMParser::T__10);
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
