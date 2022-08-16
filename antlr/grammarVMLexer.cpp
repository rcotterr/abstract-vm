
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
      "T__9", "T__10", "VALUE", "INT8", "INT16", "INT32", "DOUBLE", "FLOAT", 
      "N", "Z", "SEP", "OPEN_BRACKET", "CLOSE_BRACKET", "SINGLE_LINE_COMMENT", 
      "SPACES"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,24,204,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,2,1,2,
  	1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,
  	5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,3,11,127,8,11,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,17,3,17,160,8,17,1,17,4,17,
  	163,8,17,11,17,12,17,164,1,18,3,18,168,8,18,1,18,4,18,171,8,18,11,18,
  	12,18,172,1,18,1,18,4,18,177,8,18,11,18,12,18,178,1,19,4,19,182,8,19,
  	11,19,12,19,183,1,20,1,20,1,21,1,21,1,22,1,22,5,22,192,8,22,10,22,12,
  	22,195,9,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,0,0,24,1,1,3,2,5,
  	3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,
  	16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,1,0,4,1,0,45,45,1,
  	0,48,57,1,0,10,10,3,0,9,9,11,11,32,32,214,0,1,1,0,0,0,0,3,1,0,0,0,0,5,
  	1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,
  	0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,
  	27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,
  	0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,
  	0,1,49,1,0,0,0,3,54,1,0,0,0,5,58,1,0,0,0,7,63,1,0,0,0,9,70,1,0,0,0,11,
  	74,1,0,0,0,13,78,1,0,0,0,15,82,1,0,0,0,17,86,1,0,0,0,19,90,1,0,0,0,21,
  	96,1,0,0,0,23,126,1,0,0,0,25,128,1,0,0,0,27,133,1,0,0,0,29,139,1,0,0,
  	0,31,145,1,0,0,0,33,152,1,0,0,0,35,159,1,0,0,0,37,167,1,0,0,0,39,181,
  	1,0,0,0,41,185,1,0,0,0,43,187,1,0,0,0,45,189,1,0,0,0,47,200,1,0,0,0,49,
  	50,5,112,0,0,50,51,5,117,0,0,51,52,5,115,0,0,52,53,5,104,0,0,53,2,1,0,
  	0,0,54,55,5,112,0,0,55,56,5,111,0,0,56,57,5,112,0,0,57,4,1,0,0,0,58,59,
  	5,100,0,0,59,60,5,117,0,0,60,61,5,109,0,0,61,62,5,112,0,0,62,6,1,0,0,
  	0,63,64,5,97,0,0,64,65,5,115,0,0,65,66,5,115,0,0,66,67,5,101,0,0,67,68,
  	5,114,0,0,68,69,5,116,0,0,69,8,1,0,0,0,70,71,5,97,0,0,71,72,5,100,0,0,
  	72,73,5,100,0,0,73,10,1,0,0,0,74,75,5,115,0,0,75,76,5,117,0,0,76,77,5,
  	98,0,0,77,12,1,0,0,0,78,79,5,109,0,0,79,80,5,117,0,0,80,81,5,108,0,0,
  	81,14,1,0,0,0,82,83,5,100,0,0,83,84,5,105,0,0,84,85,5,118,0,0,85,16,1,
  	0,0,0,86,87,5,109,0,0,87,88,5,111,0,0,88,89,5,100,0,0,89,18,1,0,0,0,90,
  	91,5,112,0,0,91,92,5,114,0,0,92,93,5,105,0,0,93,94,5,110,0,0,94,95,5,
  	116,0,0,95,20,1,0,0,0,96,97,5,101,0,0,97,98,5,120,0,0,98,99,5,105,0,0,
  	99,100,5,116,0,0,100,22,1,0,0,0,101,102,3,25,12,0,102,103,3,41,20,0,103,
  	104,3,35,17,0,104,105,3,43,21,0,105,127,1,0,0,0,106,107,3,27,13,0,107,
  	108,3,41,20,0,108,109,3,35,17,0,109,110,3,43,21,0,110,127,1,0,0,0,111,
  	112,3,29,14,0,112,113,3,41,20,0,113,114,3,35,17,0,114,115,3,43,21,0,115,
  	127,1,0,0,0,116,117,3,31,15,0,117,118,3,41,20,0,118,119,3,37,18,0,119,
  	120,3,43,21,0,120,127,1,0,0,0,121,122,3,33,16,0,122,123,3,41,20,0,123,
  	124,3,37,18,0,124,125,3,43,21,0,125,127,1,0,0,0,126,101,1,0,0,0,126,106,
  	1,0,0,0,126,111,1,0,0,0,126,116,1,0,0,0,126,121,1,0,0,0,127,24,1,0,0,
  	0,128,129,5,105,0,0,129,130,5,110,0,0,130,131,5,116,0,0,131,132,5,56,
  	0,0,132,26,1,0,0,0,133,134,5,105,0,0,134,135,5,110,0,0,135,136,5,116,
  	0,0,136,137,5,49,0,0,137,138,5,54,0,0,138,28,1,0,0,0,139,140,5,105,0,
  	0,140,141,5,110,0,0,141,142,5,116,0,0,142,143,5,51,0,0,143,144,5,50,0,
  	0,144,30,1,0,0,0,145,146,5,100,0,0,146,147,5,111,0,0,147,148,5,117,0,
  	0,148,149,5,98,0,0,149,150,5,108,0,0,150,151,5,101,0,0,151,32,1,0,0,0,
  	152,153,5,102,0,0,153,154,5,108,0,0,154,155,5,111,0,0,155,156,5,97,0,
  	0,156,157,5,116,0,0,157,34,1,0,0,0,158,160,7,0,0,0,159,158,1,0,0,0,159,
  	160,1,0,0,0,160,162,1,0,0,0,161,163,7,1,0,0,162,161,1,0,0,0,163,164,1,
  	0,0,0,164,162,1,0,0,0,164,165,1,0,0,0,165,36,1,0,0,0,166,168,7,0,0,0,
  	167,166,1,0,0,0,167,168,1,0,0,0,168,170,1,0,0,0,169,171,7,1,0,0,170,169,
  	1,0,0,0,171,172,1,0,0,0,172,170,1,0,0,0,172,173,1,0,0,0,173,174,1,0,0,
  	0,174,176,9,0,0,0,175,177,7,1,0,0,176,175,1,0,0,0,177,178,1,0,0,0,178,
  	176,1,0,0,0,178,179,1,0,0,0,179,38,1,0,0,0,180,182,5,10,0,0,181,180,1,
  	0,0,0,182,183,1,0,0,0,183,181,1,0,0,0,183,184,1,0,0,0,184,40,1,0,0,0,
  	185,186,5,40,0,0,186,42,1,0,0,0,187,188,5,41,0,0,188,44,1,0,0,0,189,193,
  	5,59,0,0,190,192,8,2,0,0,191,190,1,0,0,0,192,195,1,0,0,0,193,191,1,0,
  	0,0,193,194,1,0,0,0,194,196,1,0,0,0,195,193,1,0,0,0,196,197,5,10,0,0,
  	197,198,1,0,0,0,198,199,6,22,0,0,199,46,1,0,0,0,200,201,7,3,0,0,201,202,
  	1,0,0,0,202,203,6,23,0,0,203,48,1,0,0,0,9,0,126,159,164,167,172,178,183,
  	193,1,0,1,0
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
