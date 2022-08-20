
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
      "prog", "instr", "value"
    },
    std::vector<std::string>{
      "", "", "", "", "", "'int8'", "'int16'", "'int32'", "'double'", "'float'", 
      "'push'", "'assert'", "'pop'", "'dump'", "'rdump'", "'add'", "'sub'", 
      "'mul'", "'div'", "'mod'", "'print'", "'exit'", "", "", "", "'('", 
      "')'"
    },
    std::vector<std::string>{
      "", "CMD_VALUE", "CMD", "INT_TYPE", "FLOAT_TYPE", "INT8", "INT16", 
      "INT32", "DOUBLE", "FLOAT", "PUSH", "ASSERT", "POP", "DUMP", "RDUMP", 
      "ADD", "SUB", "MUL", "DIV", "MOD", "PRINT", "EXIT", "N", "Z", "SEP", 
      "OPEN_BRACKET", "CLOSE_BRACKET", "SINGLE_LINE_COMMENT", "SPACES"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,28,54,2,0,7,0,2,1,7,1,2,2,7,2,1,0,5,0,8,8,0,10,0,12,0,11,9,0,1,0,
  	1,0,5,0,15,8,0,10,0,12,0,18,9,0,1,0,4,0,21,8,0,11,0,12,0,22,1,0,5,0,26,
  	8,0,10,0,12,0,29,9,0,1,0,5,0,32,8,0,10,0,12,0,35,9,0,1,0,1,0,1,1,1,1,
  	1,1,3,1,42,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,52,8,2,1,2,0,0,3,0,
  	2,4,0,0,57,0,9,1,0,0,0,2,41,1,0,0,0,4,51,1,0,0,0,6,8,5,24,0,0,7,6,1,0,
  	0,0,8,11,1,0,0,0,9,7,1,0,0,0,9,10,1,0,0,0,10,12,1,0,0,0,11,9,1,0,0,0,
  	12,16,3,2,1,0,13,15,5,24,0,0,14,13,1,0,0,0,15,18,1,0,0,0,16,14,1,0,0,
  	0,16,17,1,0,0,0,17,27,1,0,0,0,18,16,1,0,0,0,19,21,5,24,0,0,20,19,1,0,
  	0,0,21,22,1,0,0,0,22,20,1,0,0,0,22,23,1,0,0,0,23,24,1,0,0,0,24,26,3,2,
  	1,0,25,20,1,0,0,0,26,29,1,0,0,0,27,25,1,0,0,0,27,28,1,0,0,0,28,33,1,0,
  	0,0,29,27,1,0,0,0,30,32,5,24,0,0,31,30,1,0,0,0,32,35,1,0,0,0,33,31,1,
  	0,0,0,33,34,1,0,0,0,34,36,1,0,0,0,35,33,1,0,0,0,36,37,5,0,0,1,37,1,1,
  	0,0,0,38,39,5,1,0,0,39,42,3,4,2,0,40,42,5,2,0,0,41,38,1,0,0,0,41,40,1,
  	0,0,0,42,3,1,0,0,0,43,44,5,3,0,0,44,45,5,25,0,0,45,46,5,22,0,0,46,52,
  	5,26,0,0,47,48,5,4,0,0,48,49,5,25,0,0,49,50,5,23,0,0,50,52,5,26,0,0,51,
  	43,1,0,0,0,51,47,1,0,0,0,52,5,1,0,0,0,7,9,16,22,27,33,41,51
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
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(9);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == grammarVMParser::SEP) {
      setState(6);
      match(grammarVMParser::SEP);
      setState(11);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(12);
    instr();
    setState(16);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(13);
        match(grammarVMParser::SEP); 
      }
      setState(18);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
    setState(27);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(20); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(19);
          match(grammarVMParser::SEP);
          setState(22); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == grammarVMParser::SEP);
        setState(24);
        instr(); 
      }
      setState(29);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
    setState(33);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == grammarVMParser::SEP) {
      setState(30);
      match(grammarVMParser::SEP);
      setState(35);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(36);
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

grammarVMParser::ValueContext* grammarVMParser::InstrContext::value() {
  return getRuleContext<grammarVMParser::ValueContext>(0);
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
    setState(41);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grammarVMParser::CMD_VALUE: {
        enterOuterAlt(_localctx, 1);
        setState(38);
        match(grammarVMParser::CMD_VALUE);
        setState(39);
        value();
        break;
      }

      case grammarVMParser::CMD: {
        enterOuterAlt(_localctx, 2);
        setState(40);
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

//----------------- ValueContext ------------------------------------------------------------------

grammarVMParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grammarVMParser::ValueContext::INT_TYPE() {
  return getToken(grammarVMParser::INT_TYPE, 0);
}

tree::TerminalNode* grammarVMParser::ValueContext::OPEN_BRACKET() {
  return getToken(grammarVMParser::OPEN_BRACKET, 0);
}

tree::TerminalNode* grammarVMParser::ValueContext::N() {
  return getToken(grammarVMParser::N, 0);
}

tree::TerminalNode* grammarVMParser::ValueContext::CLOSE_BRACKET() {
  return getToken(grammarVMParser::CLOSE_BRACKET, 0);
}

tree::TerminalNode* grammarVMParser::ValueContext::FLOAT_TYPE() {
  return getToken(grammarVMParser::FLOAT_TYPE, 0);
}

tree::TerminalNode* grammarVMParser::ValueContext::Z() {
  return getToken(grammarVMParser::Z, 0);
}


size_t grammarVMParser::ValueContext::getRuleIndex() const {
  return grammarVMParser::RuleValue;
}

void grammarVMParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grammarVMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void grammarVMParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grammarVMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


std::any grammarVMParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grammarVMVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

grammarVMParser::ValueContext* grammarVMParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 4, grammarVMParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(51);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grammarVMParser::INT_TYPE: {
        enterOuterAlt(_localctx, 1);
        setState(43);
        match(grammarVMParser::INT_TYPE);
        setState(44);
        match(grammarVMParser::OPEN_BRACKET);
        setState(45);
        match(grammarVMParser::N);
        setState(46);
        match(grammarVMParser::CLOSE_BRACKET);
        break;
      }

      case grammarVMParser::FLOAT_TYPE: {
        enterOuterAlt(_localctx, 2);
        setState(47);
        match(grammarVMParser::FLOAT_TYPE);
        setState(48);
        match(grammarVMParser::OPEN_BRACKET);
        setState(49);
        match(grammarVMParser::Z);
        setState(50);
        match(grammarVMParser::CLOSE_BRACKET);
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
