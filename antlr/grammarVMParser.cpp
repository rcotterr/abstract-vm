
// Generated from grammarVM.g4 by ANTLR 4.10.1


#include "grammarVMListener.h"

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
      "prog", "decl", "expr"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "' '"
    },
    std::vector<std::string>{
      "", "INSTR", "VALUE", "N", "Z", "SEP", "WHITESPACE", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,7,20,2,0,7,0,2,1,7,1,2,2,7,2,1,0,1,0,4,0,9,8,0,11,0,12,0,10,1,0,1,
  	0,1,1,1,1,1,2,1,2,1,2,1,2,0,0,3,0,2,4,0,0,18,0,8,1,0,0,0,2,14,1,0,0,0,
  	4,16,1,0,0,0,6,9,3,2,1,0,7,9,3,4,2,0,8,6,1,0,0,0,8,7,1,0,0,0,9,10,1,0,
  	0,0,10,8,1,0,0,0,10,11,1,0,0,0,11,12,1,0,0,0,12,13,5,0,0,1,13,1,1,0,0,
  	0,14,15,5,1,0,0,15,3,1,0,0,0,16,17,3,2,1,0,17,18,5,5,0,0,18,5,1,0,0,0,
  	2,8,10
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

tree::TerminalNode* grammarVMParser::ProgContext::EOF() {
  return getToken(grammarVMParser::EOF, 0);
}

std::vector<grammarVMParser::DeclContext *> grammarVMParser::ProgContext::decl() {
  return getRuleContexts<grammarVMParser::DeclContext>();
}

grammarVMParser::DeclContext* grammarVMParser::ProgContext::decl(size_t i) {
  return getRuleContext<grammarVMParser::DeclContext>(i);
}

std::vector<grammarVMParser::ExprContext *> grammarVMParser::ProgContext::expr() {
  return getRuleContexts<grammarVMParser::ExprContext>();
}

grammarVMParser::ExprContext* grammarVMParser::ProgContext::expr(size_t i) {
  return getRuleContext<grammarVMParser::ExprContext>(i);
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
    setState(8); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(8);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(6);
        decl();
        break;
      }

      case 2: {
        setState(7);
        expr();
        break;
      }

      default:
        break;
      }
      setState(10); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == grammarVMParser::INSTR);
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

//----------------- DeclContext ------------------------------------------------------------------

grammarVMParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grammarVMParser::DeclContext::INSTR() {
  return getToken(grammarVMParser::INSTR, 0);
}


size_t grammarVMParser::DeclContext::getRuleIndex() const {
  return grammarVMParser::RuleDecl;
}

void grammarVMParser::DeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grammarVMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecl(this);
}

void grammarVMParser::DeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grammarVMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecl(this);
}

grammarVMParser::DeclContext* grammarVMParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 2, grammarVMParser::RuleDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(14);
    match(grammarVMParser::INSTR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

grammarVMParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grammarVMParser::DeclContext* grammarVMParser::ExprContext::decl() {
  return getRuleContext<grammarVMParser::DeclContext>(0);
}

tree::TerminalNode* grammarVMParser::ExprContext::SEP() {
  return getToken(grammarVMParser::SEP, 0);
}


size_t grammarVMParser::ExprContext::getRuleIndex() const {
  return grammarVMParser::RuleExpr;
}

void grammarVMParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grammarVMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void grammarVMParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grammarVMListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}

grammarVMParser::ExprContext* grammarVMParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 4, grammarVMParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    decl();
    setState(17);
    match(grammarVMParser::SEP);
   
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
