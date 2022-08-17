
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
      "CMD_VALUE", "CMD", "VALUE", "INT8", "INT16", "INT32", "DOUBLE", "FLOAT", 
      "PUSH", "ASSERT", "POP", "DUMP", "ADD", "SUB", "MUL", "DIV", "MOD", 
      "PRINT", "EXIT", "N", "Z", "SEP", "OPEN_BRACKET", "CLOSE_BRACKET", 
      "SINGLE_LINE_COMMENT", "SPACES"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "", "", "'int8'", "'int16'", "'int32'", "'double'", "'float'", 
      "'push'", "'assert'", "'pop'", "'dump'", "'add'", "'sub'", "'mul'", 
      "'div'", "'mod'", "'print'", "'exit'", "", "", "", "'('", "')'"
    },
    std::vector<std::string>{
      "", "CMD_VALUE", "CMD", "VALUE", "INT8", "INT16", "INT32", "DOUBLE", 
      "FLOAT", "PUSH", "ASSERT", "POP", "DUMP", "ADD", "SUB", "MUL", "DIV", 
      "MOD", "PRINT", "EXIT", "N", "Z", "SEP", "OPEN_BRACKET", "CLOSE_BRACKET", 
      "SINGLE_LINE_COMMENT", "SPACES"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,26,223,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,1,0,1,0,3,0,56,8,0,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,67,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,3,2,94,8,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,
  	1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,
  	8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,11,1,
  	11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,14,1,14,1,
  	14,1,14,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,
  	17,1,17,1,18,1,18,1,18,1,18,1,18,1,19,3,19,179,8,19,1,19,4,19,182,8,19,
  	11,19,12,19,183,1,20,3,20,187,8,20,1,20,4,20,190,8,20,11,20,12,20,191,
  	1,20,1,20,4,20,196,8,20,11,20,12,20,197,1,21,4,21,201,8,21,11,21,12,21,
  	202,1,22,1,22,1,23,1,23,1,24,1,24,5,24,211,8,24,10,24,12,24,214,9,24,
  	1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,0,0,26,1,1,3,2,5,3,7,4,9,5,11,
  	6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,
  	37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,1,0,4,1,0,45,45,1,0,48,
  	57,1,0,10,10,3,0,9,9,11,11,32,32,242,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,
  	0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,
  	17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,
  	0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,
  	0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,
  	49,1,0,0,0,0,51,1,0,0,0,1,55,1,0,0,0,3,66,1,0,0,0,5,93,1,0,0,0,7,95,1,
  	0,0,0,9,100,1,0,0,0,11,106,1,0,0,0,13,112,1,0,0,0,15,119,1,0,0,0,17,125,
  	1,0,0,0,19,130,1,0,0,0,21,137,1,0,0,0,23,141,1,0,0,0,25,146,1,0,0,0,27,
  	150,1,0,0,0,29,154,1,0,0,0,31,158,1,0,0,0,33,162,1,0,0,0,35,166,1,0,0,
  	0,37,172,1,0,0,0,39,178,1,0,0,0,41,186,1,0,0,0,43,200,1,0,0,0,45,204,
  	1,0,0,0,47,206,1,0,0,0,49,208,1,0,0,0,51,219,1,0,0,0,53,56,3,17,8,0,54,
  	56,3,19,9,0,55,53,1,0,0,0,55,54,1,0,0,0,56,2,1,0,0,0,57,67,3,21,10,0,
  	58,67,3,23,11,0,59,67,3,25,12,0,60,67,3,27,13,0,61,67,3,29,14,0,62,67,
  	3,31,15,0,63,67,3,33,16,0,64,67,3,35,17,0,65,67,3,37,18,0,66,57,1,0,0,
  	0,66,58,1,0,0,0,66,59,1,0,0,0,66,60,1,0,0,0,66,61,1,0,0,0,66,62,1,0,0,
  	0,66,63,1,0,0,0,66,64,1,0,0,0,66,65,1,0,0,0,67,4,1,0,0,0,68,69,3,7,3,
  	0,69,70,3,45,22,0,70,71,3,39,19,0,71,72,3,47,23,0,72,94,1,0,0,0,73,74,
  	3,9,4,0,74,75,3,45,22,0,75,76,3,39,19,0,76,77,3,47,23,0,77,94,1,0,0,0,
  	78,79,3,11,5,0,79,80,3,45,22,0,80,81,3,39,19,0,81,82,3,47,23,0,82,94,
  	1,0,0,0,83,84,3,13,6,0,84,85,3,45,22,0,85,86,3,41,20,0,86,87,3,47,23,
  	0,87,94,1,0,0,0,88,89,3,15,7,0,89,90,3,45,22,0,90,91,3,41,20,0,91,92,
  	3,47,23,0,92,94,1,0,0,0,93,68,1,0,0,0,93,73,1,0,0,0,93,78,1,0,0,0,93,
  	83,1,0,0,0,93,88,1,0,0,0,94,6,1,0,0,0,95,96,5,105,0,0,96,97,5,110,0,0,
  	97,98,5,116,0,0,98,99,5,56,0,0,99,8,1,0,0,0,100,101,5,105,0,0,101,102,
  	5,110,0,0,102,103,5,116,0,0,103,104,5,49,0,0,104,105,5,54,0,0,105,10,
  	1,0,0,0,106,107,5,105,0,0,107,108,5,110,0,0,108,109,5,116,0,0,109,110,
  	5,51,0,0,110,111,5,50,0,0,111,12,1,0,0,0,112,113,5,100,0,0,113,114,5,
  	111,0,0,114,115,5,117,0,0,115,116,5,98,0,0,116,117,5,108,0,0,117,118,
  	5,101,0,0,118,14,1,0,0,0,119,120,5,102,0,0,120,121,5,108,0,0,121,122,
  	5,111,0,0,122,123,5,97,0,0,123,124,5,116,0,0,124,16,1,0,0,0,125,126,5,
  	112,0,0,126,127,5,117,0,0,127,128,5,115,0,0,128,129,5,104,0,0,129,18,
  	1,0,0,0,130,131,5,97,0,0,131,132,5,115,0,0,132,133,5,115,0,0,133,134,
  	5,101,0,0,134,135,5,114,0,0,135,136,5,116,0,0,136,20,1,0,0,0,137,138,
  	5,112,0,0,138,139,5,111,0,0,139,140,5,112,0,0,140,22,1,0,0,0,141,142,
  	5,100,0,0,142,143,5,117,0,0,143,144,5,109,0,0,144,145,5,112,0,0,145,24,
  	1,0,0,0,146,147,5,97,0,0,147,148,5,100,0,0,148,149,5,100,0,0,149,26,1,
  	0,0,0,150,151,5,115,0,0,151,152,5,117,0,0,152,153,5,98,0,0,153,28,1,0,
  	0,0,154,155,5,109,0,0,155,156,5,117,0,0,156,157,5,108,0,0,157,30,1,0,
  	0,0,158,159,5,100,0,0,159,160,5,105,0,0,160,161,5,118,0,0,161,32,1,0,
  	0,0,162,163,5,109,0,0,163,164,5,111,0,0,164,165,5,100,0,0,165,34,1,0,
  	0,0,166,167,5,112,0,0,167,168,5,114,0,0,168,169,5,105,0,0,169,170,5,110,
  	0,0,170,171,5,116,0,0,171,36,1,0,0,0,172,173,5,101,0,0,173,174,5,120,
  	0,0,174,175,5,105,0,0,175,176,5,116,0,0,176,38,1,0,0,0,177,179,7,0,0,
  	0,178,177,1,0,0,0,178,179,1,0,0,0,179,181,1,0,0,0,180,182,7,1,0,0,181,
  	180,1,0,0,0,182,183,1,0,0,0,183,181,1,0,0,0,183,184,1,0,0,0,184,40,1,
  	0,0,0,185,187,7,0,0,0,186,185,1,0,0,0,186,187,1,0,0,0,187,189,1,0,0,0,
  	188,190,7,1,0,0,189,188,1,0,0,0,190,191,1,0,0,0,191,189,1,0,0,0,191,192,
  	1,0,0,0,192,193,1,0,0,0,193,195,9,0,0,0,194,196,7,1,0,0,195,194,1,0,0,
  	0,196,197,1,0,0,0,197,195,1,0,0,0,197,198,1,0,0,0,198,42,1,0,0,0,199,
  	201,5,10,0,0,200,199,1,0,0,0,201,202,1,0,0,0,202,200,1,0,0,0,202,203,
  	1,0,0,0,203,44,1,0,0,0,204,205,5,40,0,0,205,46,1,0,0,0,206,207,5,41,0,
  	0,207,48,1,0,0,0,208,212,5,59,0,0,209,211,8,2,0,0,210,209,1,0,0,0,211,
  	214,1,0,0,0,212,210,1,0,0,0,212,213,1,0,0,0,213,215,1,0,0,0,214,212,1,
  	0,0,0,215,216,5,10,0,0,216,217,1,0,0,0,217,218,6,24,0,0,218,50,1,0,0,
  	0,219,220,7,3,0,0,220,221,1,0,0,0,221,222,6,25,0,0,222,52,1,0,0,0,11,
  	0,55,66,93,178,183,186,191,197,202,212,1,0,1,0
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
