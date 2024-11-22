
// Generated from CplusImple.g4 by ANTLR 4.13.2


#include "CplusImpleLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CplusImpleLexerStaticData final {
  CplusImpleLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CplusImpleLexerStaticData(const CplusImpleLexerStaticData&) = delete;
  CplusImpleLexerStaticData(CplusImpleLexerStaticData&&) = delete;
  CplusImpleLexerStaticData& operator=(const CplusImpleLexerStaticData&) = delete;
  CplusImpleLexerStaticData& operator=(CplusImpleLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag cplusimplelexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CplusImpleLexerStaticData> cplusimplelexerLexerStaticData = nullptr;

void cplusimplelexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (cplusimplelexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(cplusimplelexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CplusImpleLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
      "T__25", "T__26", "ID", "NUM", "STRING", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'#include'", "'<'", "'>'", "'main'", "'('", "')'", "':'", "','", 
      "'='", "'+'", "'-'", "'*'", "'/'", "'if'", "'else'", "'while'", "'for'", 
      "'|'", "'=='", "'!='", "'<='", "'>='", "'std::cout'", "'<<'", "'std::cin'", 
      "'>>'", "'endin'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "ID", "NUM", "STRING", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,31,193,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,
  	1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,
  	9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,14,
  	1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,17,1,17,1,18,
  	1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,20,1,21,1,21,1,21,1,22,1,22,1,22,
  	1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,24,1,24,1,24,1,24,
  	1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,26,1,26,1,26,1,26,1,26,1,26,
  	1,27,1,27,5,27,165,8,27,10,27,12,27,168,9,27,1,28,3,28,171,8,28,1,28,
  	4,28,174,8,28,11,28,12,28,175,1,29,1,29,5,29,180,8,29,10,29,12,29,183,
  	9,29,1,29,1,29,1,30,4,30,188,8,30,11,30,12,30,189,1,30,1,30,0,0,31,1,
  	1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,
  	15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,
  	53,27,55,28,57,29,59,30,61,31,1,0,5,3,0,65,90,95,95,97,122,4,0,48,57,
  	65,90,95,95,97,122,1,0,48,57,2,0,34,34,92,92,3,0,9,10,13,13,32,32,197,
  	0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,
  	0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,
  	0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,
  	1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,
  	0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,
  	0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,1,63,1,0,0,0,3,72,
  	1,0,0,0,5,74,1,0,0,0,7,76,1,0,0,0,9,81,1,0,0,0,11,83,1,0,0,0,13,85,1,
  	0,0,0,15,87,1,0,0,0,17,89,1,0,0,0,19,91,1,0,0,0,21,93,1,0,0,0,23,95,1,
  	0,0,0,25,97,1,0,0,0,27,99,1,0,0,0,29,102,1,0,0,0,31,107,1,0,0,0,33,113,
  	1,0,0,0,35,117,1,0,0,0,37,119,1,0,0,0,39,122,1,0,0,0,41,125,1,0,0,0,43,
  	128,1,0,0,0,45,131,1,0,0,0,47,141,1,0,0,0,49,144,1,0,0,0,51,153,1,0,0,
  	0,53,156,1,0,0,0,55,162,1,0,0,0,57,170,1,0,0,0,59,177,1,0,0,0,61,187,
  	1,0,0,0,63,64,5,35,0,0,64,65,5,105,0,0,65,66,5,110,0,0,66,67,5,99,0,0,
  	67,68,5,108,0,0,68,69,5,117,0,0,69,70,5,100,0,0,70,71,5,101,0,0,71,2,
  	1,0,0,0,72,73,5,60,0,0,73,4,1,0,0,0,74,75,5,62,0,0,75,6,1,0,0,0,76,77,
  	5,109,0,0,77,78,5,97,0,0,78,79,5,105,0,0,79,80,5,110,0,0,80,8,1,0,0,0,
  	81,82,5,40,0,0,82,10,1,0,0,0,83,84,5,41,0,0,84,12,1,0,0,0,85,86,5,58,
  	0,0,86,14,1,0,0,0,87,88,5,44,0,0,88,16,1,0,0,0,89,90,5,61,0,0,90,18,1,
  	0,0,0,91,92,5,43,0,0,92,20,1,0,0,0,93,94,5,45,0,0,94,22,1,0,0,0,95,96,
  	5,42,0,0,96,24,1,0,0,0,97,98,5,47,0,0,98,26,1,0,0,0,99,100,5,105,0,0,
  	100,101,5,102,0,0,101,28,1,0,0,0,102,103,5,101,0,0,103,104,5,108,0,0,
  	104,105,5,115,0,0,105,106,5,101,0,0,106,30,1,0,0,0,107,108,5,119,0,0,
  	108,109,5,104,0,0,109,110,5,105,0,0,110,111,5,108,0,0,111,112,5,101,0,
  	0,112,32,1,0,0,0,113,114,5,102,0,0,114,115,5,111,0,0,115,116,5,114,0,
  	0,116,34,1,0,0,0,117,118,5,124,0,0,118,36,1,0,0,0,119,120,5,61,0,0,120,
  	121,5,61,0,0,121,38,1,0,0,0,122,123,5,33,0,0,123,124,5,61,0,0,124,40,
  	1,0,0,0,125,126,5,60,0,0,126,127,5,61,0,0,127,42,1,0,0,0,128,129,5,62,
  	0,0,129,130,5,61,0,0,130,44,1,0,0,0,131,132,5,115,0,0,132,133,5,116,0,
  	0,133,134,5,100,0,0,134,135,5,58,0,0,135,136,5,58,0,0,136,137,5,99,0,
  	0,137,138,5,111,0,0,138,139,5,117,0,0,139,140,5,116,0,0,140,46,1,0,0,
  	0,141,142,5,60,0,0,142,143,5,60,0,0,143,48,1,0,0,0,144,145,5,115,0,0,
  	145,146,5,116,0,0,146,147,5,100,0,0,147,148,5,58,0,0,148,149,5,58,0,0,
  	149,150,5,99,0,0,150,151,5,105,0,0,151,152,5,110,0,0,152,50,1,0,0,0,153,
  	154,5,62,0,0,154,155,5,62,0,0,155,52,1,0,0,0,156,157,5,101,0,0,157,158,
  	5,110,0,0,158,159,5,100,0,0,159,160,5,105,0,0,160,161,5,110,0,0,161,54,
  	1,0,0,0,162,166,7,0,0,0,163,165,7,1,0,0,164,163,1,0,0,0,165,168,1,0,0,
  	0,166,164,1,0,0,0,166,167,1,0,0,0,167,56,1,0,0,0,168,166,1,0,0,0,169,
  	171,5,45,0,0,170,169,1,0,0,0,170,171,1,0,0,0,171,173,1,0,0,0,172,174,
  	7,2,0,0,173,172,1,0,0,0,174,175,1,0,0,0,175,173,1,0,0,0,175,176,1,0,0,
  	0,176,58,1,0,0,0,177,181,5,34,0,0,178,180,8,3,0,0,179,178,1,0,0,0,180,
  	183,1,0,0,0,181,179,1,0,0,0,181,182,1,0,0,0,182,184,1,0,0,0,183,181,1,
  	0,0,0,184,185,5,34,0,0,185,60,1,0,0,0,186,188,7,4,0,0,187,186,1,0,0,0,
  	188,189,1,0,0,0,189,187,1,0,0,0,189,190,1,0,0,0,190,191,1,0,0,0,191,192,
  	6,30,0,0,192,62,1,0,0,0,6,0,166,170,175,181,189,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  cplusimplelexerLexerStaticData = std::move(staticData);
}

}

CplusImpleLexer::CplusImpleLexer(CharStream *input) : Lexer(input) {
  CplusImpleLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *cplusimplelexerLexerStaticData->atn, cplusimplelexerLexerStaticData->decisionToDFA, cplusimplelexerLexerStaticData->sharedContextCache);
}

CplusImpleLexer::~CplusImpleLexer() {
  delete _interpreter;
}

std::string CplusImpleLexer::getGrammarFileName() const {
  return "CplusImple.g4";
}

const std::vector<std::string>& CplusImpleLexer::getRuleNames() const {
  return cplusimplelexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& CplusImpleLexer::getChannelNames() const {
  return cplusimplelexerLexerStaticData->channelNames;
}

const std::vector<std::string>& CplusImpleLexer::getModeNames() const {
  return cplusimplelexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& CplusImpleLexer::getVocabulary() const {
  return cplusimplelexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CplusImpleLexer::getSerializedATN() const {
  return cplusimplelexerLexerStaticData->serializedATN;
}

const atn::ATN& CplusImpleLexer::getATN() const {
  return *cplusimplelexerLexerStaticData->atn;
}




void CplusImpleLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  cplusimplelexerLexerInitialize();
#else
  ::antlr4::internal::call_once(cplusimplelexerLexerOnceFlag, cplusimplelexerLexerInitialize);
#endif
}
