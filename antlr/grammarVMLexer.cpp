
// Generated from grammarVM.g4 by ANTLR 4.10.1


#include "grammarVMLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct GrammarVMLexerStaticData final {
  GrammarVMLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GrammarVMLexerStaticData(const GrammarVMLexerStaticData&) = delete;
  GrammarVMLexerStaticData(GrammarVMLexerStaticData&&) = delete;
  GrammarVMLexerStaticData& operator=(const GrammarVMLexerStaticData&) = delete;
  GrammarVMLexerStaticData& operator=(GrammarVMLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag grammarvmlexerLexerOnceFlag;
GrammarVMLexerStaticData *grammarvmlexerLexerStaticData = nullptr;

void grammarvmlexerLexerInitialize() {
  assert(grammarvmlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<GrammarVMLexerStaticData>(
    std::vector<std::string>{
      "INSTR", "VALUE", "N", "Z", "SEP", "WHITESPACE", "COMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "' '"
    },
    std::vector<std::string>{
      "", "INSTR", "VALUE", "N", "Z", "SEP", "WHITESPACE", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,7,139,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,
  	1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,
  	0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,0,61,8,0,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,98,8,1,1,2,
  	3,2,101,8,2,1,2,4,2,104,8,2,11,2,12,2,105,1,3,3,3,109,8,3,1,3,4,3,112,
  	8,3,11,3,12,3,113,1,3,1,3,4,3,118,8,3,11,3,12,3,119,1,4,4,4,123,8,4,11,
  	4,12,4,124,1,5,1,5,1,5,1,5,1,6,1,6,5,6,133,8,6,10,6,12,6,136,9,6,1,6,
  	1,6,0,0,7,1,1,3,2,5,3,7,4,9,5,11,6,13,7,1,0,3,1,0,45,45,1,0,48,57,2,0,
  	10,10,13,13,159,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,
  	0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,1,60,1,0,0,0,3,97,1,0,0,0,5,100,1,0,0,
  	0,7,108,1,0,0,0,9,122,1,0,0,0,11,126,1,0,0,0,13,130,1,0,0,0,15,16,5,112,
  	0,0,16,17,5,117,0,0,17,18,5,115,0,0,18,19,5,104,0,0,19,20,1,0,0,0,20,
  	61,3,3,1,0,21,22,5,112,0,0,22,23,5,111,0,0,23,61,5,112,0,0,24,25,5,100,
  	0,0,25,26,5,117,0,0,26,27,5,109,0,0,27,61,5,112,0,0,28,29,5,97,0,0,29,
  	30,5,115,0,0,30,31,5,115,0,0,31,32,5,101,0,0,32,33,5,114,0,0,33,34,5,
  	116,0,0,34,35,1,0,0,0,35,61,3,3,1,0,36,37,5,97,0,0,37,38,5,100,0,0,38,
  	61,5,100,0,0,39,40,5,115,0,0,40,41,5,117,0,0,41,61,5,98,0,0,42,43,5,109,
  	0,0,43,44,5,117,0,0,44,61,5,108,0,0,45,46,5,100,0,0,46,47,5,105,0,0,47,
  	61,5,118,0,0,48,49,5,109,0,0,49,50,5,111,0,0,50,61,5,100,0,0,51,52,5,
  	112,0,0,52,53,5,114,0,0,53,54,5,105,0,0,54,55,5,110,0,0,55,61,5,116,0,
  	0,56,57,5,101,0,0,57,58,5,120,0,0,58,59,5,105,0,0,59,61,5,116,0,0,60,
  	15,1,0,0,0,60,21,1,0,0,0,60,24,1,0,0,0,60,28,1,0,0,0,60,36,1,0,0,0,60,
  	39,1,0,0,0,60,42,1,0,0,0,60,45,1,0,0,0,60,48,1,0,0,0,60,51,1,0,0,0,60,
  	56,1,0,0,0,61,2,1,0,0,0,62,63,5,105,0,0,63,64,5,110,0,0,64,65,5,116,0,
  	0,65,66,5,56,0,0,66,67,1,0,0,0,67,98,3,5,2,0,68,69,5,105,0,0,69,70,5,
  	110,0,0,70,71,5,116,0,0,71,72,5,49,0,0,72,73,5,54,0,0,73,74,1,0,0,0,74,
  	98,3,5,2,0,75,76,5,105,0,0,76,77,5,110,0,0,77,78,5,116,0,0,78,79,5,51,
  	0,0,79,80,5,50,0,0,80,81,1,0,0,0,81,98,3,5,2,0,82,83,5,102,0,0,83,84,
  	5,108,0,0,84,85,5,111,0,0,85,86,5,97,0,0,86,87,5,116,0,0,87,88,1,0,0,
  	0,88,98,3,7,3,0,89,90,5,100,0,0,90,91,5,111,0,0,91,92,5,117,0,0,92,93,
  	5,98,0,0,93,94,5,108,0,0,94,95,5,101,0,0,95,96,1,0,0,0,96,98,3,7,3,0,
  	97,62,1,0,0,0,97,68,1,0,0,0,97,75,1,0,0,0,97,82,1,0,0,0,97,89,1,0,0,0,
  	98,4,1,0,0,0,99,101,7,0,0,0,100,99,1,0,0,0,100,101,1,0,0,0,101,103,1,
  	0,0,0,102,104,7,1,0,0,103,102,1,0,0,0,104,105,1,0,0,0,105,103,1,0,0,0,
  	105,106,1,0,0,0,106,6,1,0,0,0,107,109,7,0,0,0,108,107,1,0,0,0,108,109,
  	1,0,0,0,109,111,1,0,0,0,110,112,7,1,0,0,111,110,1,0,0,0,112,113,1,0,0,
  	0,113,111,1,0,0,0,113,114,1,0,0,0,114,115,1,0,0,0,115,117,9,0,0,0,116,
  	118,7,1,0,0,117,116,1,0,0,0,118,119,1,0,0,0,119,117,1,0,0,0,119,120,1,
  	0,0,0,120,8,1,0,0,0,121,123,5,10,0,0,122,121,1,0,0,0,123,124,1,0,0,0,
  	124,122,1,0,0,0,124,125,1,0,0,0,125,10,1,0,0,0,126,127,5,32,0,0,127,128,
  	1,0,0,0,128,129,6,5,0,0,129,12,1,0,0,0,130,134,5,59,0,0,131,133,8,2,0,
  	0,132,131,1,0,0,0,133,136,1,0,0,0,134,132,1,0,0,0,134,135,1,0,0,0,135,
  	137,1,0,0,0,136,134,1,0,0,0,137,138,6,6,0,0,138,14,1,0,0,0,10,0,60,97,
  	100,105,108,113,119,124,134,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  grammarvmlexerLexerStaticData = staticData.release();
}

}

grammarVMLexer::grammarVMLexer(CharStream *input) : Lexer(input) {
  grammarVMLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *grammarvmlexerLexerStaticData->atn, grammarvmlexerLexerStaticData->decisionToDFA, grammarvmlexerLexerStaticData->sharedContextCache);
}

grammarVMLexer::~grammarVMLexer() {
  delete _interpreter;
}

std::string grammarVMLexer::getGrammarFileName() const {
  return "grammarVM.g4";
}

const std::vector<std::string>& grammarVMLexer::getRuleNames() const {
  return grammarvmlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& grammarVMLexer::getChannelNames() const {
  return grammarvmlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& grammarVMLexer::getModeNames() const {
  return grammarvmlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& grammarVMLexer::getVocabulary() const {
  return grammarvmlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView grammarVMLexer::getSerializedATN() const {
  return grammarvmlexerLexerStaticData->serializedATN;
}

const atn::ATN& grammarVMLexer::getATN() const {
  return *grammarvmlexerLexerStaticData->atn;
}




void grammarVMLexer::initialize() {
  std::call_once(grammarvmlexerLexerOnceFlag, grammarvmlexerLexerInitialize);
}
