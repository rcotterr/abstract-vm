
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
      "CMD_VALUE", "CMD", "VALUE", "INT_TYPE", "FLOAT_TYPE", "INT8", "INT16", 
      "INT32", "DOUBLE", "FLOAT", "PUSH", "ASSERT", "POP", "DUMP", "ADD", 
      "SUB", "MUL", "DIV", "MOD", "PRINT", "EXIT", "N", "Z", "SEP", "OPEN_BRACKET", 
      "CLOSE_BRACKET", "SINGLE_LINE_COMMENT", "SPACES"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,28,221,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,1,0,
  	1,0,3,0,60,8,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,71,8,1,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,83,8,2,1,3,1,3,1,3,3,3,88,8,3,1,4,
  	1,4,3,4,92,8,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,10,
  	1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,
  	1,12,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,
  	1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,19,1,19,
  	1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,21,3,21,177,8,21,1,21,
  	4,21,180,8,21,11,21,12,21,181,1,22,3,22,185,8,22,1,22,4,22,188,8,22,11,
  	22,12,22,189,1,22,1,22,4,22,194,8,22,11,22,12,22,195,1,23,4,23,199,8,
  	23,11,23,12,23,200,1,24,1,24,1,25,1,25,1,26,1,26,5,26,209,8,26,10,26,
  	12,26,212,9,26,1,26,1,26,1,26,1,26,1,27,1,27,1,27,1,27,0,0,28,1,1,3,2,
  	5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,
  	16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,
  	55,28,1,0,4,1,0,45,45,1,0,48,57,1,0,10,10,3,0,9,9,11,11,32,32,240,0,1,
  	1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,
  	0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,
  	1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,
  	0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,
  	0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,
  	1,0,0,0,1,59,1,0,0,0,3,70,1,0,0,0,5,82,1,0,0,0,7,87,1,0,0,0,9,91,1,0,
  	0,0,11,93,1,0,0,0,13,98,1,0,0,0,15,104,1,0,0,0,17,110,1,0,0,0,19,117,
  	1,0,0,0,21,123,1,0,0,0,23,128,1,0,0,0,25,135,1,0,0,0,27,139,1,0,0,0,29,
  	144,1,0,0,0,31,148,1,0,0,0,33,152,1,0,0,0,35,156,1,0,0,0,37,160,1,0,0,
  	0,39,164,1,0,0,0,41,170,1,0,0,0,43,176,1,0,0,0,45,184,1,0,0,0,47,198,
  	1,0,0,0,49,202,1,0,0,0,51,204,1,0,0,0,53,206,1,0,0,0,55,217,1,0,0,0,57,
  	60,3,21,10,0,58,60,3,23,11,0,59,57,1,0,0,0,59,58,1,0,0,0,60,2,1,0,0,0,
  	61,71,3,25,12,0,62,71,3,27,13,0,63,71,3,29,14,0,64,71,3,31,15,0,65,71,
  	3,33,16,0,66,71,3,35,17,0,67,71,3,37,18,0,68,71,3,39,19,0,69,71,3,41,
  	20,0,70,61,1,0,0,0,70,62,1,0,0,0,70,63,1,0,0,0,70,64,1,0,0,0,70,65,1,
  	0,0,0,70,66,1,0,0,0,70,67,1,0,0,0,70,68,1,0,0,0,70,69,1,0,0,0,71,4,1,
  	0,0,0,72,73,3,7,3,0,73,74,3,49,24,0,74,75,3,43,21,0,75,76,3,51,25,0,76,
  	83,1,0,0,0,77,78,3,9,4,0,78,79,3,49,24,0,79,80,3,45,22,0,80,81,3,51,25,
  	0,81,83,1,0,0,0,82,72,1,0,0,0,82,77,1,0,0,0,83,6,1,0,0,0,84,88,3,11,5,
  	0,85,88,3,13,6,0,86,88,3,15,7,0,87,84,1,0,0,0,87,85,1,0,0,0,87,86,1,0,
  	0,0,88,8,1,0,0,0,89,92,3,19,9,0,90,92,3,17,8,0,91,89,1,0,0,0,91,90,1,
  	0,0,0,92,10,1,0,0,0,93,94,5,105,0,0,94,95,5,110,0,0,95,96,5,116,0,0,96,
  	97,5,56,0,0,97,12,1,0,0,0,98,99,5,105,0,0,99,100,5,110,0,0,100,101,5,
  	116,0,0,101,102,5,49,0,0,102,103,5,54,0,0,103,14,1,0,0,0,104,105,5,105,
  	0,0,105,106,5,110,0,0,106,107,5,116,0,0,107,108,5,51,0,0,108,109,5,50,
  	0,0,109,16,1,0,0,0,110,111,5,100,0,0,111,112,5,111,0,0,112,113,5,117,
  	0,0,113,114,5,98,0,0,114,115,5,108,0,0,115,116,5,101,0,0,116,18,1,0,0,
  	0,117,118,5,102,0,0,118,119,5,108,0,0,119,120,5,111,0,0,120,121,5,97,
  	0,0,121,122,5,116,0,0,122,20,1,0,0,0,123,124,5,112,0,0,124,125,5,117,
  	0,0,125,126,5,115,0,0,126,127,5,104,0,0,127,22,1,0,0,0,128,129,5,97,0,
  	0,129,130,5,115,0,0,130,131,5,115,0,0,131,132,5,101,0,0,132,133,5,114,
  	0,0,133,134,5,116,0,0,134,24,1,0,0,0,135,136,5,112,0,0,136,137,5,111,
  	0,0,137,138,5,112,0,0,138,26,1,0,0,0,139,140,5,100,0,0,140,141,5,117,
  	0,0,141,142,5,109,0,0,142,143,5,112,0,0,143,28,1,0,0,0,144,145,5,97,0,
  	0,145,146,5,100,0,0,146,147,5,100,0,0,147,30,1,0,0,0,148,149,5,115,0,
  	0,149,150,5,117,0,0,150,151,5,98,0,0,151,32,1,0,0,0,152,153,5,109,0,0,
  	153,154,5,117,0,0,154,155,5,108,0,0,155,34,1,0,0,0,156,157,5,100,0,0,
  	157,158,5,105,0,0,158,159,5,118,0,0,159,36,1,0,0,0,160,161,5,109,0,0,
  	161,162,5,111,0,0,162,163,5,100,0,0,163,38,1,0,0,0,164,165,5,112,0,0,
  	165,166,5,114,0,0,166,167,5,105,0,0,167,168,5,110,0,0,168,169,5,116,0,
  	0,169,40,1,0,0,0,170,171,5,101,0,0,171,172,5,120,0,0,172,173,5,105,0,
  	0,173,174,5,116,0,0,174,42,1,0,0,0,175,177,7,0,0,0,176,175,1,0,0,0,176,
  	177,1,0,0,0,177,179,1,0,0,0,178,180,7,1,0,0,179,178,1,0,0,0,180,181,1,
  	0,0,0,181,179,1,0,0,0,181,182,1,0,0,0,182,44,1,0,0,0,183,185,7,0,0,0,
  	184,183,1,0,0,0,184,185,1,0,0,0,185,187,1,0,0,0,186,188,7,1,0,0,187,186,
  	1,0,0,0,188,189,1,0,0,0,189,187,1,0,0,0,189,190,1,0,0,0,190,191,1,0,0,
  	0,191,193,9,0,0,0,192,194,7,1,0,0,193,192,1,0,0,0,194,195,1,0,0,0,195,
  	193,1,0,0,0,195,196,1,0,0,0,196,46,1,0,0,0,197,199,5,10,0,0,198,197,1,
  	0,0,0,199,200,1,0,0,0,200,198,1,0,0,0,200,201,1,0,0,0,201,48,1,0,0,0,
  	202,203,5,40,0,0,203,50,1,0,0,0,204,205,5,41,0,0,205,52,1,0,0,0,206,210,
  	5,59,0,0,207,209,8,2,0,0,208,207,1,0,0,0,209,212,1,0,0,0,210,208,1,0,
  	0,0,210,211,1,0,0,0,211,213,1,0,0,0,212,210,1,0,0,0,213,214,5,10,0,0,
  	214,215,1,0,0,0,215,216,6,26,0,0,216,54,1,0,0,0,217,218,7,3,0,0,218,219,
  	1,0,0,0,219,220,6,27,0,0,220,56,1,0,0,0,13,0,59,70,82,87,91,176,181,184,
  	189,195,200,210,1,0,1,0
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
