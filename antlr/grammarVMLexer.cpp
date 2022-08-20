
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
      "CMD_VALUE", "CMD", "INT_TYPE", "FLOAT_TYPE", "INT8", "INT16", "INT32", 
      "DOUBLE", "FLOAT", "PUSH", "ASSERT", "POP", "DUMP", "RDUMP", "ADD", 
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
  	4,0,28,214,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,1,0,
  	1,0,3,0,60,8,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,72,8,1,1,2,
  	1,2,1,2,3,2,77,8,2,1,3,1,3,3,3,81,8,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,
  	1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,
  	8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,
  	10,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,
  	13,1,13,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,
  	17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,
  	20,1,20,1,20,1,20,1,20,1,21,3,21,172,8,21,1,21,4,21,175,8,21,11,21,12,
  	21,176,1,22,3,22,180,8,22,1,22,4,22,183,8,22,11,22,12,22,184,1,22,1,22,
  	4,22,189,8,22,11,22,12,22,190,1,23,4,23,194,8,23,11,23,12,23,195,1,24,
  	1,24,1,25,1,25,1,26,1,26,5,26,204,8,26,10,26,12,26,207,9,26,1,26,1,26,
  	1,27,1,27,1,27,1,27,0,0,28,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,
  	10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,
  	43,22,45,23,47,24,49,25,51,26,53,27,55,28,1,0,4,1,0,45,45,1,0,48,57,1,
  	0,10,10,3,0,9,9,11,11,32,32,233,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,
  	7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,
  	0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,
  	0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,
  	1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,
  	0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,1,59,1,0,0,0,3,71,1,0,0,0,
  	5,76,1,0,0,0,7,80,1,0,0,0,9,82,1,0,0,0,11,87,1,0,0,0,13,93,1,0,0,0,15,
  	99,1,0,0,0,17,106,1,0,0,0,19,112,1,0,0,0,21,117,1,0,0,0,23,124,1,0,0,
  	0,25,128,1,0,0,0,27,133,1,0,0,0,29,139,1,0,0,0,31,143,1,0,0,0,33,147,
  	1,0,0,0,35,151,1,0,0,0,37,155,1,0,0,0,39,159,1,0,0,0,41,165,1,0,0,0,43,
  	171,1,0,0,0,45,179,1,0,0,0,47,193,1,0,0,0,49,197,1,0,0,0,51,199,1,0,0,
  	0,53,201,1,0,0,0,55,210,1,0,0,0,57,60,3,19,9,0,58,60,3,21,10,0,59,57,
  	1,0,0,0,59,58,1,0,0,0,60,2,1,0,0,0,61,72,3,23,11,0,62,72,3,25,12,0,63,
  	72,3,27,13,0,64,72,3,29,14,0,65,72,3,31,15,0,66,72,3,33,16,0,67,72,3,
  	35,17,0,68,72,3,37,18,0,69,72,3,39,19,0,70,72,3,41,20,0,71,61,1,0,0,0,
  	71,62,1,0,0,0,71,63,1,0,0,0,71,64,1,0,0,0,71,65,1,0,0,0,71,66,1,0,0,0,
  	71,67,1,0,0,0,71,68,1,0,0,0,71,69,1,0,0,0,71,70,1,0,0,0,72,4,1,0,0,0,
  	73,77,3,9,4,0,74,77,3,11,5,0,75,77,3,13,6,0,76,73,1,0,0,0,76,74,1,0,0,
  	0,76,75,1,0,0,0,77,6,1,0,0,0,78,81,3,17,8,0,79,81,3,15,7,0,80,78,1,0,
  	0,0,80,79,1,0,0,0,81,8,1,0,0,0,82,83,5,105,0,0,83,84,5,110,0,0,84,85,
  	5,116,0,0,85,86,5,56,0,0,86,10,1,0,0,0,87,88,5,105,0,0,88,89,5,110,0,
  	0,89,90,5,116,0,0,90,91,5,49,0,0,91,92,5,54,0,0,92,12,1,0,0,0,93,94,5,
  	105,0,0,94,95,5,110,0,0,95,96,5,116,0,0,96,97,5,51,0,0,97,98,5,50,0,0,
  	98,14,1,0,0,0,99,100,5,100,0,0,100,101,5,111,0,0,101,102,5,117,0,0,102,
  	103,5,98,0,0,103,104,5,108,0,0,104,105,5,101,0,0,105,16,1,0,0,0,106,107,
  	5,102,0,0,107,108,5,108,0,0,108,109,5,111,0,0,109,110,5,97,0,0,110,111,
  	5,116,0,0,111,18,1,0,0,0,112,113,5,112,0,0,113,114,5,117,0,0,114,115,
  	5,115,0,0,115,116,5,104,0,0,116,20,1,0,0,0,117,118,5,97,0,0,118,119,5,
  	115,0,0,119,120,5,115,0,0,120,121,5,101,0,0,121,122,5,114,0,0,122,123,
  	5,116,0,0,123,22,1,0,0,0,124,125,5,112,0,0,125,126,5,111,0,0,126,127,
  	5,112,0,0,127,24,1,0,0,0,128,129,5,100,0,0,129,130,5,117,0,0,130,131,
  	5,109,0,0,131,132,5,112,0,0,132,26,1,0,0,0,133,134,5,114,0,0,134,135,
  	5,100,0,0,135,136,5,117,0,0,136,137,5,109,0,0,137,138,5,112,0,0,138,28,
  	1,0,0,0,139,140,5,97,0,0,140,141,5,100,0,0,141,142,5,100,0,0,142,30,1,
  	0,0,0,143,144,5,115,0,0,144,145,5,117,0,0,145,146,5,98,0,0,146,32,1,0,
  	0,0,147,148,5,109,0,0,148,149,5,117,0,0,149,150,5,108,0,0,150,34,1,0,
  	0,0,151,152,5,100,0,0,152,153,5,105,0,0,153,154,5,118,0,0,154,36,1,0,
  	0,0,155,156,5,109,0,0,156,157,5,111,0,0,157,158,5,100,0,0,158,38,1,0,
  	0,0,159,160,5,112,0,0,160,161,5,114,0,0,161,162,5,105,0,0,162,163,5,110,
  	0,0,163,164,5,116,0,0,164,40,1,0,0,0,165,166,5,101,0,0,166,167,5,120,
  	0,0,167,168,5,105,0,0,168,169,5,116,0,0,169,42,1,0,0,0,170,172,7,0,0,
  	0,171,170,1,0,0,0,171,172,1,0,0,0,172,174,1,0,0,0,173,175,7,1,0,0,174,
  	173,1,0,0,0,175,176,1,0,0,0,176,174,1,0,0,0,176,177,1,0,0,0,177,44,1,
  	0,0,0,178,180,7,0,0,0,179,178,1,0,0,0,179,180,1,0,0,0,180,182,1,0,0,0,
  	181,183,7,1,0,0,182,181,1,0,0,0,183,184,1,0,0,0,184,182,1,0,0,0,184,185,
  	1,0,0,0,185,186,1,0,0,0,186,188,9,0,0,0,187,189,7,1,0,0,188,187,1,0,0,
  	0,189,190,1,0,0,0,190,188,1,0,0,0,190,191,1,0,0,0,191,46,1,0,0,0,192,
  	194,5,10,0,0,193,192,1,0,0,0,194,195,1,0,0,0,195,193,1,0,0,0,195,196,
  	1,0,0,0,196,48,1,0,0,0,197,198,5,40,0,0,198,50,1,0,0,0,199,200,5,41,0,
  	0,200,52,1,0,0,0,201,205,5,59,0,0,202,204,8,2,0,0,203,202,1,0,0,0,204,
  	207,1,0,0,0,205,203,1,0,0,0,205,206,1,0,0,0,206,208,1,0,0,0,207,205,1,
  	0,0,0,208,209,6,26,0,0,209,54,1,0,0,0,210,211,7,3,0,0,211,212,1,0,0,0,
  	212,213,6,27,0,0,213,56,1,0,0,0,12,0,59,71,76,80,171,176,179,184,190,
  	195,205,1,0,1,0
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
