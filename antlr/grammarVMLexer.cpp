
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
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "CMD_VALUE", "VALUE", "INT8", "INT16", "INT32", "DOUBLE", "FLOAT", 
      "PUSH", "ASSERT", "N", "Z", "SEP", "OPEN_BRACKET", "CLOSE_BRACKET", 
      "SINGLE_LINE_COMMENT", "SPACES"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'pop'", "'dump'", "'add'", "'sub'", "'mul'", "'div'", "'mod'", 
      "'print'", "'exit'", "", "", "'int8'", "'int16'", "'int32'", "'double'", 
      "'float'", "'push'", "'assert'", "", "", "", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "CMD_VALUE", "VALUE", "INT8", 
      "INT16", "INT32", "DOUBLE", "FLOAT", "PUSH", "ASSERT", "N", "Z", "SEP", 
      "OPEN_BRACKET", "CLOSE_BRACKET", "SINGLE_LINE_COMMENT", "SPACES"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,25,210,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,
  	1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,6,
  	1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,3,9,94,
  	8,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,3,10,121,
  	8,10,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,18,3,18,166,8,18,1,18,4,18,169,8,18,11,18,12,18,170,1,19,3,19,
  	174,8,19,1,19,4,19,177,8,19,11,19,12,19,178,1,19,1,19,4,19,183,8,19,11,
  	19,12,19,184,1,20,4,20,188,8,20,11,20,12,20,189,1,21,1,21,1,22,1,22,1,
  	23,1,23,5,23,198,8,23,10,23,12,23,201,9,23,1,23,1,23,1,23,1,23,1,24,1,
  	24,1,24,1,24,0,0,25,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,
  	11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,
  	45,23,47,24,49,25,1,0,4,1,0,45,45,1,0,48,57,1,0,10,10,3,0,9,9,11,11,32,
  	32,221,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,
  	11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,
  	0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,
  	0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,
  	43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,1,51,1,0,0,0,3,55,1,
  	0,0,0,5,60,1,0,0,0,7,64,1,0,0,0,9,68,1,0,0,0,11,72,1,0,0,0,13,76,1,0,
  	0,0,15,80,1,0,0,0,17,86,1,0,0,0,19,93,1,0,0,0,21,120,1,0,0,0,23,122,1,
  	0,0,0,25,127,1,0,0,0,27,133,1,0,0,0,29,139,1,0,0,0,31,146,1,0,0,0,33,
  	152,1,0,0,0,35,157,1,0,0,0,37,165,1,0,0,0,39,173,1,0,0,0,41,187,1,0,0,
  	0,43,191,1,0,0,0,45,193,1,0,0,0,47,195,1,0,0,0,49,206,1,0,0,0,51,52,5,
  	112,0,0,52,53,5,111,0,0,53,54,5,112,0,0,54,2,1,0,0,0,55,56,5,100,0,0,
  	56,57,5,117,0,0,57,58,5,109,0,0,58,59,5,112,0,0,59,4,1,0,0,0,60,61,5,
  	97,0,0,61,62,5,100,0,0,62,63,5,100,0,0,63,6,1,0,0,0,64,65,5,115,0,0,65,
  	66,5,117,0,0,66,67,5,98,0,0,67,8,1,0,0,0,68,69,5,109,0,0,69,70,5,117,
  	0,0,70,71,5,108,0,0,71,10,1,0,0,0,72,73,5,100,0,0,73,74,5,105,0,0,74,
  	75,5,118,0,0,75,12,1,0,0,0,76,77,5,109,0,0,77,78,5,111,0,0,78,79,5,100,
  	0,0,79,14,1,0,0,0,80,81,5,112,0,0,81,82,5,114,0,0,82,83,5,105,0,0,83,
  	84,5,110,0,0,84,85,5,116,0,0,85,16,1,0,0,0,86,87,5,101,0,0,87,88,5,120,
  	0,0,88,89,5,105,0,0,89,90,5,116,0,0,90,18,1,0,0,0,91,94,3,33,16,0,92,
  	94,3,35,17,0,93,91,1,0,0,0,93,92,1,0,0,0,94,20,1,0,0,0,95,96,3,23,11,
  	0,96,97,3,43,21,0,97,98,3,37,18,0,98,99,3,45,22,0,99,121,1,0,0,0,100,
  	101,3,25,12,0,101,102,3,43,21,0,102,103,3,37,18,0,103,104,3,45,22,0,104,
  	121,1,0,0,0,105,106,3,27,13,0,106,107,3,43,21,0,107,108,3,37,18,0,108,
  	109,3,45,22,0,109,121,1,0,0,0,110,111,3,29,14,0,111,112,3,43,21,0,112,
  	113,3,39,19,0,113,114,3,45,22,0,114,121,1,0,0,0,115,116,3,31,15,0,116,
  	117,3,43,21,0,117,118,3,39,19,0,118,119,3,45,22,0,119,121,1,0,0,0,120,
  	95,1,0,0,0,120,100,1,0,0,0,120,105,1,0,0,0,120,110,1,0,0,0,120,115,1,
  	0,0,0,121,22,1,0,0,0,122,123,5,105,0,0,123,124,5,110,0,0,124,125,5,116,
  	0,0,125,126,5,56,0,0,126,24,1,0,0,0,127,128,5,105,0,0,128,129,5,110,0,
  	0,129,130,5,116,0,0,130,131,5,49,0,0,131,132,5,54,0,0,132,26,1,0,0,0,
  	133,134,5,105,0,0,134,135,5,110,0,0,135,136,5,116,0,0,136,137,5,51,0,
  	0,137,138,5,50,0,0,138,28,1,0,0,0,139,140,5,100,0,0,140,141,5,111,0,0,
  	141,142,5,117,0,0,142,143,5,98,0,0,143,144,5,108,0,0,144,145,5,101,0,
  	0,145,30,1,0,0,0,146,147,5,102,0,0,147,148,5,108,0,0,148,149,5,111,0,
  	0,149,150,5,97,0,0,150,151,5,116,0,0,151,32,1,0,0,0,152,153,5,112,0,0,
  	153,154,5,117,0,0,154,155,5,115,0,0,155,156,5,104,0,0,156,34,1,0,0,0,
  	157,158,5,97,0,0,158,159,5,115,0,0,159,160,5,115,0,0,160,161,5,101,0,
  	0,161,162,5,114,0,0,162,163,5,116,0,0,163,36,1,0,0,0,164,166,7,0,0,0,
  	165,164,1,0,0,0,165,166,1,0,0,0,166,168,1,0,0,0,167,169,7,1,0,0,168,167,
  	1,0,0,0,169,170,1,0,0,0,170,168,1,0,0,0,170,171,1,0,0,0,171,38,1,0,0,
  	0,172,174,7,0,0,0,173,172,1,0,0,0,173,174,1,0,0,0,174,176,1,0,0,0,175,
  	177,7,1,0,0,176,175,1,0,0,0,177,178,1,0,0,0,178,176,1,0,0,0,178,179,1,
  	0,0,0,179,180,1,0,0,0,180,182,9,0,0,0,181,183,7,1,0,0,182,181,1,0,0,0,
  	183,184,1,0,0,0,184,182,1,0,0,0,184,185,1,0,0,0,185,40,1,0,0,0,186,188,
  	5,10,0,0,187,186,1,0,0,0,188,189,1,0,0,0,189,187,1,0,0,0,189,190,1,0,
  	0,0,190,42,1,0,0,0,191,192,5,40,0,0,192,44,1,0,0,0,193,194,5,41,0,0,194,
  	46,1,0,0,0,195,199,5,59,0,0,196,198,8,2,0,0,197,196,1,0,0,0,198,201,1,
  	0,0,0,199,197,1,0,0,0,199,200,1,0,0,0,200,202,1,0,0,0,201,199,1,0,0,0,
  	202,203,5,10,0,0,203,204,1,0,0,0,204,205,6,23,0,0,205,48,1,0,0,0,206,
  	207,7,3,0,0,207,208,1,0,0,0,208,209,6,24,0,0,209,50,1,0,0,0,10,0,93,120,
  	165,170,173,178,184,189,199,1,0,1,0
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
