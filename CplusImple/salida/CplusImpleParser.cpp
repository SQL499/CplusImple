
// Generated from CplusImple.g4 by ANTLR 4.13.2


#include "CplusImpleListener.h"

#include "CplusImpleParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CplusImpleParserStaticData final {
  CplusImpleParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CplusImpleParserStaticData(const CplusImpleParserStaticData&) = delete;
  CplusImpleParserStaticData(CplusImpleParserStaticData&&) = delete;
  CplusImpleParserStaticData& operator=(const CplusImpleParserStaticData&) = delete;
  CplusImpleParserStaticData& operator=(CplusImpleParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag cplusimpleParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CplusImpleParserStaticData> cplusimpleParserStaticData = nullptr;

void cplusimpleParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (cplusimpleParserStaticData != nullptr) {
    return;
  }
#else
  assert(cplusimpleParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CplusImpleParserStaticData>(
    std::vector<std::string>{
      "prog", "include", "mainDef", "funcDef", "paramList", "stat", "assignment", 
      "expr", "arithmetic", "term", "factor", "ifStat", "ifBody", "elseStat", 
      "elseBody", "whileStat", "whileBody", "forStat", "forInit", "forCondition", 
      "forIncrement", "forBody", "condition", "relOp", "printExpr", "inputExpr", 
      "funcCall", "argList", "printList", "endin"
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
  	4,1,31,274,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,1,0,5,0,62,8,0,10,0,12,0,65,9,0,1,0,5,0,68,8,0,10,0,12,0,
  	71,9,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,5,2,86,8,2,
  	10,2,12,2,89,9,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,5,3,99,8,3,10,3,12,3,
  	102,9,3,1,3,1,3,3,3,106,8,3,1,4,1,4,1,4,5,4,111,8,4,10,4,12,4,114,9,4,
  	3,4,116,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,125,8,5,1,6,1,6,1,6,1,6,1,
  	7,1,7,1,7,3,7,134,8,7,1,8,1,8,1,8,5,8,139,8,8,10,8,12,8,142,9,8,1,9,1,
  	9,1,9,5,9,147,8,9,10,9,12,9,150,9,9,1,10,1,10,1,10,1,10,1,10,1,10,3,10,
  	158,8,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,168,8,11,1,12,5,
  	12,171,8,12,10,12,12,12,174,9,12,1,13,1,13,1,13,1,13,1,13,1,14,5,14,182,
  	8,14,10,14,12,14,185,9,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,16,
  	5,16,196,8,16,10,16,12,16,199,9,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,21,5,21,220,
  	8,21,10,21,12,21,223,9,21,1,22,1,22,1,22,1,22,1,23,1,23,1,24,1,24,1,24,
  	1,24,1,25,1,25,1,25,1,25,1,25,1,25,1,26,1,26,1,26,1,26,1,26,1,27,1,27,
  	1,27,5,27,249,8,27,10,27,12,27,252,9,27,3,27,254,8,27,1,28,1,28,3,28,
  	258,8,28,1,28,1,28,1,28,3,28,263,8,28,5,28,265,8,28,10,28,12,28,268,9,
  	28,1,29,1,29,3,29,272,8,29,1,29,0,0,30,0,2,4,6,8,10,12,14,16,18,20,22,
  	24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,0,3,1,0,10,11,1,
  	0,12,13,2,0,2,3,19,22,273,0,63,1,0,0,0,2,75,1,0,0,0,4,80,1,0,0,0,6,92,
  	1,0,0,0,8,115,1,0,0,0,10,124,1,0,0,0,12,126,1,0,0,0,14,133,1,0,0,0,16,
  	135,1,0,0,0,18,143,1,0,0,0,20,157,1,0,0,0,22,159,1,0,0,0,24,172,1,0,0,
  	0,26,175,1,0,0,0,28,183,1,0,0,0,30,186,1,0,0,0,32,197,1,0,0,0,34,200,
  	1,0,0,0,36,212,1,0,0,0,38,214,1,0,0,0,40,216,1,0,0,0,42,221,1,0,0,0,44,
  	224,1,0,0,0,46,228,1,0,0,0,48,230,1,0,0,0,50,234,1,0,0,0,52,240,1,0,0,
  	0,54,253,1,0,0,0,56,257,1,0,0,0,58,269,1,0,0,0,60,62,3,2,1,0,61,60,1,
  	0,0,0,62,65,1,0,0,0,63,61,1,0,0,0,63,64,1,0,0,0,64,69,1,0,0,0,65,63,1,
  	0,0,0,66,68,3,6,3,0,67,66,1,0,0,0,68,71,1,0,0,0,69,67,1,0,0,0,69,70,1,
  	0,0,0,70,72,1,0,0,0,71,69,1,0,0,0,72,73,3,4,2,0,73,74,5,0,0,1,74,1,1,
  	0,0,0,75,76,5,1,0,0,76,77,5,2,0,0,77,78,5,28,0,0,78,79,5,3,0,0,79,3,1,
  	0,0,0,80,81,5,4,0,0,81,82,5,5,0,0,82,83,5,6,0,0,83,87,5,7,0,0,84,86,3,
  	10,5,0,85,84,1,0,0,0,86,89,1,0,0,0,87,85,1,0,0,0,87,88,1,0,0,0,88,90,
  	1,0,0,0,89,87,1,0,0,0,90,91,3,58,29,0,91,5,1,0,0,0,92,93,5,28,0,0,93,
  	94,5,5,0,0,94,95,3,8,4,0,95,96,5,6,0,0,96,100,5,7,0,0,97,99,3,10,5,0,
  	98,97,1,0,0,0,99,102,1,0,0,0,100,98,1,0,0,0,100,101,1,0,0,0,101,103,1,
  	0,0,0,102,100,1,0,0,0,103,105,3,58,29,0,104,106,5,28,0,0,105,104,1,0,
  	0,0,105,106,1,0,0,0,106,7,1,0,0,0,107,112,5,28,0,0,108,109,5,8,0,0,109,
  	111,5,28,0,0,110,108,1,0,0,0,111,114,1,0,0,0,112,110,1,0,0,0,112,113,
  	1,0,0,0,113,116,1,0,0,0,114,112,1,0,0,0,115,107,1,0,0,0,115,116,1,0,0,
  	0,116,9,1,0,0,0,117,125,3,12,6,0,118,125,3,48,24,0,119,125,3,50,25,0,
  	120,125,3,52,26,0,121,125,3,22,11,0,122,125,3,30,15,0,123,125,3,34,17,
  	0,124,117,1,0,0,0,124,118,1,0,0,0,124,119,1,0,0,0,124,120,1,0,0,0,124,
  	121,1,0,0,0,124,122,1,0,0,0,124,123,1,0,0,0,125,11,1,0,0,0,126,127,5,
  	28,0,0,127,128,5,9,0,0,128,129,3,14,7,0,129,13,1,0,0,0,130,134,3,16,8,
  	0,131,134,3,52,26,0,132,134,5,30,0,0,133,130,1,0,0,0,133,131,1,0,0,0,
  	133,132,1,0,0,0,134,15,1,0,0,0,135,140,3,18,9,0,136,137,7,0,0,0,137,139,
  	3,18,9,0,138,136,1,0,0,0,139,142,1,0,0,0,140,138,1,0,0,0,140,141,1,0,
  	0,0,141,17,1,0,0,0,142,140,1,0,0,0,143,148,3,20,10,0,144,145,7,1,0,0,
  	145,147,3,20,10,0,146,144,1,0,0,0,147,150,1,0,0,0,148,146,1,0,0,0,148,
  	149,1,0,0,0,149,19,1,0,0,0,150,148,1,0,0,0,151,158,5,29,0,0,152,158,5,
  	28,0,0,153,154,5,5,0,0,154,155,3,14,7,0,155,156,5,6,0,0,156,158,1,0,0,
  	0,157,151,1,0,0,0,157,152,1,0,0,0,157,153,1,0,0,0,158,21,1,0,0,0,159,
  	160,5,14,0,0,160,161,5,5,0,0,161,162,3,44,22,0,162,163,5,6,0,0,163,164,
  	5,7,0,0,164,165,3,24,12,0,165,167,3,58,29,0,166,168,3,26,13,0,167,166,
  	1,0,0,0,167,168,1,0,0,0,168,23,1,0,0,0,169,171,3,10,5,0,170,169,1,0,0,
  	0,171,174,1,0,0,0,172,170,1,0,0,0,172,173,1,0,0,0,173,25,1,0,0,0,174,
  	172,1,0,0,0,175,176,5,15,0,0,176,177,5,7,0,0,177,178,3,28,14,0,178,179,
  	3,58,29,0,179,27,1,0,0,0,180,182,3,10,5,0,181,180,1,0,0,0,182,185,1,0,
  	0,0,183,181,1,0,0,0,183,184,1,0,0,0,184,29,1,0,0,0,185,183,1,0,0,0,186,
  	187,5,16,0,0,187,188,5,5,0,0,188,189,3,44,22,0,189,190,5,6,0,0,190,191,
  	5,7,0,0,191,192,3,32,16,0,192,193,3,58,29,0,193,31,1,0,0,0,194,196,3,
  	10,5,0,195,194,1,0,0,0,196,199,1,0,0,0,197,195,1,0,0,0,197,198,1,0,0,
  	0,198,33,1,0,0,0,199,197,1,0,0,0,200,201,5,17,0,0,201,202,5,5,0,0,202,
  	203,3,36,18,0,203,204,5,18,0,0,204,205,3,38,19,0,205,206,5,18,0,0,206,
  	207,3,40,20,0,207,208,5,6,0,0,208,209,5,7,0,0,209,210,3,42,21,0,210,211,
  	3,58,29,0,211,35,1,0,0,0,212,213,3,12,6,0,213,37,1,0,0,0,214,215,3,44,
  	22,0,215,39,1,0,0,0,216,217,5,29,0,0,217,41,1,0,0,0,218,220,3,10,5,0,
  	219,218,1,0,0,0,220,223,1,0,0,0,221,219,1,0,0,0,221,222,1,0,0,0,222,43,
  	1,0,0,0,223,221,1,0,0,0,224,225,3,14,7,0,225,226,3,46,23,0,226,227,3,
  	14,7,0,227,45,1,0,0,0,228,229,7,2,0,0,229,47,1,0,0,0,230,231,5,23,0,0,
  	231,232,5,24,0,0,232,233,3,56,28,0,233,49,1,0,0,0,234,235,5,28,0,0,235,
  	236,5,9,0,0,236,237,5,25,0,0,237,238,5,26,0,0,238,239,5,28,0,0,239,51,
  	1,0,0,0,240,241,5,28,0,0,241,242,5,5,0,0,242,243,3,54,27,0,243,244,5,
  	6,0,0,244,53,1,0,0,0,245,250,3,14,7,0,246,247,5,8,0,0,247,249,3,14,7,
  	0,248,246,1,0,0,0,249,252,1,0,0,0,250,248,1,0,0,0,250,251,1,0,0,0,251,
  	254,1,0,0,0,252,250,1,0,0,0,253,245,1,0,0,0,253,254,1,0,0,0,254,55,1,
  	0,0,0,255,258,5,30,0,0,256,258,3,14,7,0,257,255,1,0,0,0,257,256,1,0,0,
  	0,258,266,1,0,0,0,259,262,5,24,0,0,260,263,5,30,0,0,261,263,3,14,7,0,
  	262,260,1,0,0,0,262,261,1,0,0,0,263,265,1,0,0,0,264,259,1,0,0,0,265,268,
  	1,0,0,0,266,264,1,0,0,0,266,267,1,0,0,0,267,57,1,0,0,0,268,266,1,0,0,
  	0,269,271,5,27,0,0,270,272,3,14,7,0,271,270,1,0,0,0,271,272,1,0,0,0,272,
  	59,1,0,0,0,23,63,69,87,100,105,112,115,124,133,140,148,157,167,172,183,
  	197,221,250,253,257,262,266,271
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  cplusimpleParserStaticData = std::move(staticData);
}

}

CplusImpleParser::CplusImpleParser(TokenStream *input) : CplusImpleParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CplusImpleParser::CplusImpleParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CplusImpleParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *cplusimpleParserStaticData->atn, cplusimpleParserStaticData->decisionToDFA, cplusimpleParserStaticData->sharedContextCache, options);
}

CplusImpleParser::~CplusImpleParser() {
  delete _interpreter;
}

const atn::ATN& CplusImpleParser::getATN() const {
  return *cplusimpleParserStaticData->atn;
}

std::string CplusImpleParser::getGrammarFileName() const {
  return "CplusImple.g4";
}

const std::vector<std::string>& CplusImpleParser::getRuleNames() const {
  return cplusimpleParserStaticData->ruleNames;
}

const dfa::Vocabulary& CplusImpleParser::getVocabulary() const {
  return cplusimpleParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CplusImpleParser::getSerializedATN() const {
  return cplusimpleParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

CplusImpleParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CplusImpleParser::MainDefContext* CplusImpleParser::ProgContext::mainDef() {
  return getRuleContext<CplusImpleParser::MainDefContext>(0);
}

tree::TerminalNode* CplusImpleParser::ProgContext::EOF() {
  return getToken(CplusImpleParser::EOF, 0);
}

std::vector<CplusImpleParser::IncludeContext *> CplusImpleParser::ProgContext::include() {
  return getRuleContexts<CplusImpleParser::IncludeContext>();
}

CplusImpleParser::IncludeContext* CplusImpleParser::ProgContext::include(size_t i) {
  return getRuleContext<CplusImpleParser::IncludeContext>(i);
}

std::vector<CplusImpleParser::FuncDefContext *> CplusImpleParser::ProgContext::funcDef() {
  return getRuleContexts<CplusImpleParser::FuncDefContext>();
}

CplusImpleParser::FuncDefContext* CplusImpleParser::ProgContext::funcDef(size_t i) {
  return getRuleContext<CplusImpleParser::FuncDefContext>(i);
}


size_t CplusImpleParser::ProgContext::getRuleIndex() const {
  return CplusImpleParser::RuleProg;
}

void CplusImpleParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void CplusImpleParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}

CplusImpleParser::ProgContext* CplusImpleParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, CplusImpleParser::RuleProg);
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
    setState(63);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CplusImpleParser::T__0) {
      setState(60);
      include();
      setState(65);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(69);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CplusImpleParser::ID) {
      setState(66);
      funcDef();
      setState(71);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(72);
    mainDef();
    setState(73);
    match(CplusImpleParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncludeContext ------------------------------------------------------------------

CplusImpleParser::IncludeContext::IncludeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CplusImpleParser::IncludeContext::ID() {
  return getToken(CplusImpleParser::ID, 0);
}


size_t CplusImpleParser::IncludeContext::getRuleIndex() const {
  return CplusImpleParser::RuleInclude;
}

void CplusImpleParser::IncludeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclude(this);
}

void CplusImpleParser::IncludeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclude(this);
}

CplusImpleParser::IncludeContext* CplusImpleParser::include() {
  IncludeContext *_localctx = _tracker.createInstance<IncludeContext>(_ctx, getState());
  enterRule(_localctx, 2, CplusImpleParser::RuleInclude);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(CplusImpleParser::T__0);
    setState(76);
    match(CplusImpleParser::T__1);
    setState(77);
    match(CplusImpleParser::ID);
    setState(78);
    match(CplusImpleParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainDefContext ------------------------------------------------------------------

CplusImpleParser::MainDefContext::MainDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CplusImpleParser::EndinContext* CplusImpleParser::MainDefContext::endin() {
  return getRuleContext<CplusImpleParser::EndinContext>(0);
}

std::vector<CplusImpleParser::StatContext *> CplusImpleParser::MainDefContext::stat() {
  return getRuleContexts<CplusImpleParser::StatContext>();
}

CplusImpleParser::StatContext* CplusImpleParser::MainDefContext::stat(size_t i) {
  return getRuleContext<CplusImpleParser::StatContext>(i);
}


size_t CplusImpleParser::MainDefContext::getRuleIndex() const {
  return CplusImpleParser::RuleMainDef;
}

void CplusImpleParser::MainDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMainDef(this);
}

void CplusImpleParser::MainDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMainDef(this);
}

CplusImpleParser::MainDefContext* CplusImpleParser::mainDef() {
  MainDefContext *_localctx = _tracker.createInstance<MainDefContext>(_ctx, getState());
  enterRule(_localctx, 4, CplusImpleParser::RuleMainDef);
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
    setState(80);
    match(CplusImpleParser::T__3);
    setState(81);
    match(CplusImpleParser::T__4);
    setState(82);
    match(CplusImpleParser::T__5);
    setState(83);
    match(CplusImpleParser::T__6);
    setState(87);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 277037056) != 0)) {
      setState(84);
      stat();
      setState(89);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(90);
    endin();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDefContext ------------------------------------------------------------------

CplusImpleParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CplusImpleParser::FuncDefContext::ID() {
  return getTokens(CplusImpleParser::ID);
}

tree::TerminalNode* CplusImpleParser::FuncDefContext::ID(size_t i) {
  return getToken(CplusImpleParser::ID, i);
}

CplusImpleParser::ParamListContext* CplusImpleParser::FuncDefContext::paramList() {
  return getRuleContext<CplusImpleParser::ParamListContext>(0);
}

CplusImpleParser::EndinContext* CplusImpleParser::FuncDefContext::endin() {
  return getRuleContext<CplusImpleParser::EndinContext>(0);
}

std::vector<CplusImpleParser::StatContext *> CplusImpleParser::FuncDefContext::stat() {
  return getRuleContexts<CplusImpleParser::StatContext>();
}

CplusImpleParser::StatContext* CplusImpleParser::FuncDefContext::stat(size_t i) {
  return getRuleContext<CplusImpleParser::StatContext>(i);
}


size_t CplusImpleParser::FuncDefContext::getRuleIndex() const {
  return CplusImpleParser::RuleFuncDef;
}

void CplusImpleParser::FuncDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDef(this);
}

void CplusImpleParser::FuncDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDef(this);
}

CplusImpleParser::FuncDefContext* CplusImpleParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 6, CplusImpleParser::RuleFuncDef);
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
    setState(92);
    match(CplusImpleParser::ID);
    setState(93);
    match(CplusImpleParser::T__4);
    setState(94);
    paramList();
    setState(95);
    match(CplusImpleParser::T__5);
    setState(96);
    match(CplusImpleParser::T__6);
    setState(100);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 277037056) != 0)) {
      setState(97);
      stat();
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(103);
    endin();
    setState(105);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(104);
      match(CplusImpleParser::ID);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamListContext ------------------------------------------------------------------

CplusImpleParser::ParamListContext::ParamListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CplusImpleParser::ParamListContext::ID() {
  return getTokens(CplusImpleParser::ID);
}

tree::TerminalNode* CplusImpleParser::ParamListContext::ID(size_t i) {
  return getToken(CplusImpleParser::ID, i);
}


size_t CplusImpleParser::ParamListContext::getRuleIndex() const {
  return CplusImpleParser::RuleParamList;
}

void CplusImpleParser::ParamListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamList(this);
}

void CplusImpleParser::ParamListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamList(this);
}

CplusImpleParser::ParamListContext* CplusImpleParser::paramList() {
  ParamListContext *_localctx = _tracker.createInstance<ParamListContext>(_ctx, getState());
  enterRule(_localctx, 8, CplusImpleParser::RuleParamList);
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
    setState(115);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CplusImpleParser::ID) {
      setState(107);
      match(CplusImpleParser::ID);
      setState(112);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CplusImpleParser::T__7) {
        setState(108);
        match(CplusImpleParser::T__7);
        setState(109);
        match(CplusImpleParser::ID);
        setState(114);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

CplusImpleParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CplusImpleParser::AssignmentContext* CplusImpleParser::StatContext::assignment() {
  return getRuleContext<CplusImpleParser::AssignmentContext>(0);
}

CplusImpleParser::PrintExprContext* CplusImpleParser::StatContext::printExpr() {
  return getRuleContext<CplusImpleParser::PrintExprContext>(0);
}

CplusImpleParser::InputExprContext* CplusImpleParser::StatContext::inputExpr() {
  return getRuleContext<CplusImpleParser::InputExprContext>(0);
}

CplusImpleParser::FuncCallContext* CplusImpleParser::StatContext::funcCall() {
  return getRuleContext<CplusImpleParser::FuncCallContext>(0);
}

CplusImpleParser::IfStatContext* CplusImpleParser::StatContext::ifStat() {
  return getRuleContext<CplusImpleParser::IfStatContext>(0);
}

CplusImpleParser::WhileStatContext* CplusImpleParser::StatContext::whileStat() {
  return getRuleContext<CplusImpleParser::WhileStatContext>(0);
}

CplusImpleParser::ForStatContext* CplusImpleParser::StatContext::forStat() {
  return getRuleContext<CplusImpleParser::ForStatContext>(0);
}


size_t CplusImpleParser::StatContext::getRuleIndex() const {
  return CplusImpleParser::RuleStat;
}

void CplusImpleParser::StatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStat(this);
}

void CplusImpleParser::StatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStat(this);
}

CplusImpleParser::StatContext* CplusImpleParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 10, CplusImpleParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(124);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(117);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(118);
      printExpr();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(119);
      inputExpr();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(120);
      funcCall();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(121);
      ifStat();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(122);
      whileStat();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(123);
      forStat();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

CplusImpleParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CplusImpleParser::AssignmentContext::ID() {
  return getToken(CplusImpleParser::ID, 0);
}

CplusImpleParser::ExprContext* CplusImpleParser::AssignmentContext::expr() {
  return getRuleContext<CplusImpleParser::ExprContext>(0);
}


size_t CplusImpleParser::AssignmentContext::getRuleIndex() const {
  return CplusImpleParser::RuleAssignment;
}

void CplusImpleParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void CplusImpleParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

CplusImpleParser::AssignmentContext* CplusImpleParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 12, CplusImpleParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(CplusImpleParser::ID);
    setState(127);
    match(CplusImpleParser::T__8);
    setState(128);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

CplusImpleParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CplusImpleParser::ArithmeticContext* CplusImpleParser::ExprContext::arithmetic() {
  return getRuleContext<CplusImpleParser::ArithmeticContext>(0);
}

CplusImpleParser::FuncCallContext* CplusImpleParser::ExprContext::funcCall() {
  return getRuleContext<CplusImpleParser::FuncCallContext>(0);
}

tree::TerminalNode* CplusImpleParser::ExprContext::STRING() {
  return getToken(CplusImpleParser::STRING, 0);
}


size_t CplusImpleParser::ExprContext::getRuleIndex() const {
  return CplusImpleParser::RuleExpr;
}

void CplusImpleParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void CplusImpleParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}

CplusImpleParser::ExprContext* CplusImpleParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 14, CplusImpleParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(133);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(130);
      arithmetic();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(131);
      funcCall();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(132);
      match(CplusImpleParser::STRING);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithmeticContext ------------------------------------------------------------------

CplusImpleParser::ArithmeticContext::ArithmeticContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CplusImpleParser::TermContext *> CplusImpleParser::ArithmeticContext::term() {
  return getRuleContexts<CplusImpleParser::TermContext>();
}

CplusImpleParser::TermContext* CplusImpleParser::ArithmeticContext::term(size_t i) {
  return getRuleContext<CplusImpleParser::TermContext>(i);
}


size_t CplusImpleParser::ArithmeticContext::getRuleIndex() const {
  return CplusImpleParser::RuleArithmetic;
}

void CplusImpleParser::ArithmeticContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmetic(this);
}

void CplusImpleParser::ArithmeticContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmetic(this);
}

CplusImpleParser::ArithmeticContext* CplusImpleParser::arithmetic() {
  ArithmeticContext *_localctx = _tracker.createInstance<ArithmeticContext>(_ctx, getState());
  enterRule(_localctx, 16, CplusImpleParser::RuleArithmetic);
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
    setState(135);
    term();
    setState(140);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CplusImpleParser::T__9

    || _la == CplusImpleParser::T__10) {
      setState(136);
      _la = _input->LA(1);
      if (!(_la == CplusImpleParser::T__9

      || _la == CplusImpleParser::T__10)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(137);
      term();
      setState(142);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

CplusImpleParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CplusImpleParser::FactorContext *> CplusImpleParser::TermContext::factor() {
  return getRuleContexts<CplusImpleParser::FactorContext>();
}

CplusImpleParser::FactorContext* CplusImpleParser::TermContext::factor(size_t i) {
  return getRuleContext<CplusImpleParser::FactorContext>(i);
}


size_t CplusImpleParser::TermContext::getRuleIndex() const {
  return CplusImpleParser::RuleTerm;
}

void CplusImpleParser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void CplusImpleParser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}

CplusImpleParser::TermContext* CplusImpleParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 18, CplusImpleParser::RuleTerm);
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
    setState(143);
    factor();
    setState(148);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CplusImpleParser::T__11

    || _la == CplusImpleParser::T__12) {
      setState(144);
      _la = _input->LA(1);
      if (!(_la == CplusImpleParser::T__11

      || _la == CplusImpleParser::T__12)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(145);
      factor();
      setState(150);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

CplusImpleParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CplusImpleParser::FactorContext::NUM() {
  return getToken(CplusImpleParser::NUM, 0);
}

tree::TerminalNode* CplusImpleParser::FactorContext::ID() {
  return getToken(CplusImpleParser::ID, 0);
}

CplusImpleParser::ExprContext* CplusImpleParser::FactorContext::expr() {
  return getRuleContext<CplusImpleParser::ExprContext>(0);
}


size_t CplusImpleParser::FactorContext::getRuleIndex() const {
  return CplusImpleParser::RuleFactor;
}

void CplusImpleParser::FactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor(this);
}

void CplusImpleParser::FactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor(this);
}

CplusImpleParser::FactorContext* CplusImpleParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 20, CplusImpleParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(157);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CplusImpleParser::NUM: {
        enterOuterAlt(_localctx, 1);
        setState(151);
        match(CplusImpleParser::NUM);
        break;
      }

      case CplusImpleParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(152);
        match(CplusImpleParser::ID);
        break;
      }

      case CplusImpleParser::T__4: {
        enterOuterAlt(_localctx, 3);
        setState(153);
        match(CplusImpleParser::T__4);
        setState(154);
        expr();
        setState(155);
        match(CplusImpleParser::T__5);
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

//----------------- IfStatContext ------------------------------------------------------------------

CplusImpleParser::IfStatContext::IfStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CplusImpleParser::ConditionContext* CplusImpleParser::IfStatContext::condition() {
  return getRuleContext<CplusImpleParser::ConditionContext>(0);
}

CplusImpleParser::IfBodyContext* CplusImpleParser::IfStatContext::ifBody() {
  return getRuleContext<CplusImpleParser::IfBodyContext>(0);
}

CplusImpleParser::EndinContext* CplusImpleParser::IfStatContext::endin() {
  return getRuleContext<CplusImpleParser::EndinContext>(0);
}

CplusImpleParser::ElseStatContext* CplusImpleParser::IfStatContext::elseStat() {
  return getRuleContext<CplusImpleParser::ElseStatContext>(0);
}


size_t CplusImpleParser::IfStatContext::getRuleIndex() const {
  return CplusImpleParser::RuleIfStat;
}

void CplusImpleParser::IfStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStat(this);
}

void CplusImpleParser::IfStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStat(this);
}

CplusImpleParser::IfStatContext* CplusImpleParser::ifStat() {
  IfStatContext *_localctx = _tracker.createInstance<IfStatContext>(_ctx, getState());
  enterRule(_localctx, 22, CplusImpleParser::RuleIfStat);
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
    setState(159);
    match(CplusImpleParser::T__13);
    setState(160);
    match(CplusImpleParser::T__4);
    setState(161);
    condition();
    setState(162);
    match(CplusImpleParser::T__5);
    setState(163);
    match(CplusImpleParser::T__6);
    setState(164);
    ifBody();
    setState(165);
    endin();
    setState(167);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CplusImpleParser::T__14) {
      setState(166);
      elseStat();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfBodyContext ------------------------------------------------------------------

CplusImpleParser::IfBodyContext::IfBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CplusImpleParser::StatContext *> CplusImpleParser::IfBodyContext::stat() {
  return getRuleContexts<CplusImpleParser::StatContext>();
}

CplusImpleParser::StatContext* CplusImpleParser::IfBodyContext::stat(size_t i) {
  return getRuleContext<CplusImpleParser::StatContext>(i);
}


size_t CplusImpleParser::IfBodyContext::getRuleIndex() const {
  return CplusImpleParser::RuleIfBody;
}

void CplusImpleParser::IfBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfBody(this);
}

void CplusImpleParser::IfBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfBody(this);
}

CplusImpleParser::IfBodyContext* CplusImpleParser::ifBody() {
  IfBodyContext *_localctx = _tracker.createInstance<IfBodyContext>(_ctx, getState());
  enterRule(_localctx, 24, CplusImpleParser::RuleIfBody);
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
    setState(172);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 277037056) != 0)) {
      setState(169);
      stat();
      setState(174);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStatContext ------------------------------------------------------------------

CplusImpleParser::ElseStatContext::ElseStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CplusImpleParser::ElseBodyContext* CplusImpleParser::ElseStatContext::elseBody() {
  return getRuleContext<CplusImpleParser::ElseBodyContext>(0);
}

CplusImpleParser::EndinContext* CplusImpleParser::ElseStatContext::endin() {
  return getRuleContext<CplusImpleParser::EndinContext>(0);
}


size_t CplusImpleParser::ElseStatContext::getRuleIndex() const {
  return CplusImpleParser::RuleElseStat;
}

void CplusImpleParser::ElseStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseStat(this);
}

void CplusImpleParser::ElseStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseStat(this);
}

CplusImpleParser::ElseStatContext* CplusImpleParser::elseStat() {
  ElseStatContext *_localctx = _tracker.createInstance<ElseStatContext>(_ctx, getState());
  enterRule(_localctx, 26, CplusImpleParser::RuleElseStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    match(CplusImpleParser::T__14);
    setState(176);
    match(CplusImpleParser::T__6);
    setState(177);
    elseBody();
    setState(178);
    endin();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseBodyContext ------------------------------------------------------------------

CplusImpleParser::ElseBodyContext::ElseBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CplusImpleParser::StatContext *> CplusImpleParser::ElseBodyContext::stat() {
  return getRuleContexts<CplusImpleParser::StatContext>();
}

CplusImpleParser::StatContext* CplusImpleParser::ElseBodyContext::stat(size_t i) {
  return getRuleContext<CplusImpleParser::StatContext>(i);
}


size_t CplusImpleParser::ElseBodyContext::getRuleIndex() const {
  return CplusImpleParser::RuleElseBody;
}

void CplusImpleParser::ElseBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseBody(this);
}

void CplusImpleParser::ElseBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseBody(this);
}

CplusImpleParser::ElseBodyContext* CplusImpleParser::elseBody() {
  ElseBodyContext *_localctx = _tracker.createInstance<ElseBodyContext>(_ctx, getState());
  enterRule(_localctx, 28, CplusImpleParser::RuleElseBody);
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
    setState(183);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 277037056) != 0)) {
      setState(180);
      stat();
      setState(185);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatContext ------------------------------------------------------------------

CplusImpleParser::WhileStatContext::WhileStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CplusImpleParser::ConditionContext* CplusImpleParser::WhileStatContext::condition() {
  return getRuleContext<CplusImpleParser::ConditionContext>(0);
}

CplusImpleParser::WhileBodyContext* CplusImpleParser::WhileStatContext::whileBody() {
  return getRuleContext<CplusImpleParser::WhileBodyContext>(0);
}

CplusImpleParser::EndinContext* CplusImpleParser::WhileStatContext::endin() {
  return getRuleContext<CplusImpleParser::EndinContext>(0);
}


size_t CplusImpleParser::WhileStatContext::getRuleIndex() const {
  return CplusImpleParser::RuleWhileStat;
}

void CplusImpleParser::WhileStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStat(this);
}

void CplusImpleParser::WhileStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStat(this);
}

CplusImpleParser::WhileStatContext* CplusImpleParser::whileStat() {
  WhileStatContext *_localctx = _tracker.createInstance<WhileStatContext>(_ctx, getState());
  enterRule(_localctx, 30, CplusImpleParser::RuleWhileStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    match(CplusImpleParser::T__15);
    setState(187);
    match(CplusImpleParser::T__4);
    setState(188);
    condition();
    setState(189);
    match(CplusImpleParser::T__5);
    setState(190);
    match(CplusImpleParser::T__6);
    setState(191);
    whileBody();
    setState(192);
    endin();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileBodyContext ------------------------------------------------------------------

CplusImpleParser::WhileBodyContext::WhileBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CplusImpleParser::StatContext *> CplusImpleParser::WhileBodyContext::stat() {
  return getRuleContexts<CplusImpleParser::StatContext>();
}

CplusImpleParser::StatContext* CplusImpleParser::WhileBodyContext::stat(size_t i) {
  return getRuleContext<CplusImpleParser::StatContext>(i);
}


size_t CplusImpleParser::WhileBodyContext::getRuleIndex() const {
  return CplusImpleParser::RuleWhileBody;
}

void CplusImpleParser::WhileBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileBody(this);
}

void CplusImpleParser::WhileBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileBody(this);
}

CplusImpleParser::WhileBodyContext* CplusImpleParser::whileBody() {
  WhileBodyContext *_localctx = _tracker.createInstance<WhileBodyContext>(_ctx, getState());
  enterRule(_localctx, 32, CplusImpleParser::RuleWhileBody);
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
    setState(197);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 277037056) != 0)) {
      setState(194);
      stat();
      setState(199);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatContext ------------------------------------------------------------------

CplusImpleParser::ForStatContext::ForStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CplusImpleParser::ForInitContext* CplusImpleParser::ForStatContext::forInit() {
  return getRuleContext<CplusImpleParser::ForInitContext>(0);
}

CplusImpleParser::ForConditionContext* CplusImpleParser::ForStatContext::forCondition() {
  return getRuleContext<CplusImpleParser::ForConditionContext>(0);
}

CplusImpleParser::ForIncrementContext* CplusImpleParser::ForStatContext::forIncrement() {
  return getRuleContext<CplusImpleParser::ForIncrementContext>(0);
}

CplusImpleParser::ForBodyContext* CplusImpleParser::ForStatContext::forBody() {
  return getRuleContext<CplusImpleParser::ForBodyContext>(0);
}

CplusImpleParser::EndinContext* CplusImpleParser::ForStatContext::endin() {
  return getRuleContext<CplusImpleParser::EndinContext>(0);
}


size_t CplusImpleParser::ForStatContext::getRuleIndex() const {
  return CplusImpleParser::RuleForStat;
}

void CplusImpleParser::ForStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStat(this);
}

void CplusImpleParser::ForStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStat(this);
}

CplusImpleParser::ForStatContext* CplusImpleParser::forStat() {
  ForStatContext *_localctx = _tracker.createInstance<ForStatContext>(_ctx, getState());
  enterRule(_localctx, 34, CplusImpleParser::RuleForStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    match(CplusImpleParser::T__16);
    setState(201);
    match(CplusImpleParser::T__4);
    setState(202);
    forInit();
    setState(203);
    match(CplusImpleParser::T__17);
    setState(204);
    forCondition();
    setState(205);
    match(CplusImpleParser::T__17);
    setState(206);
    forIncrement();
    setState(207);
    match(CplusImpleParser::T__5);
    setState(208);
    match(CplusImpleParser::T__6);
    setState(209);
    forBody();
    setState(210);
    endin();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForInitContext ------------------------------------------------------------------

CplusImpleParser::ForInitContext::ForInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CplusImpleParser::AssignmentContext* CplusImpleParser::ForInitContext::assignment() {
  return getRuleContext<CplusImpleParser::AssignmentContext>(0);
}


size_t CplusImpleParser::ForInitContext::getRuleIndex() const {
  return CplusImpleParser::RuleForInit;
}

void CplusImpleParser::ForInitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForInit(this);
}

void CplusImpleParser::ForInitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForInit(this);
}

CplusImpleParser::ForInitContext* CplusImpleParser::forInit() {
  ForInitContext *_localctx = _tracker.createInstance<ForInitContext>(_ctx, getState());
  enterRule(_localctx, 36, CplusImpleParser::RuleForInit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    assignment();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForConditionContext ------------------------------------------------------------------

CplusImpleParser::ForConditionContext::ForConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CplusImpleParser::ConditionContext* CplusImpleParser::ForConditionContext::condition() {
  return getRuleContext<CplusImpleParser::ConditionContext>(0);
}


size_t CplusImpleParser::ForConditionContext::getRuleIndex() const {
  return CplusImpleParser::RuleForCondition;
}

void CplusImpleParser::ForConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForCondition(this);
}

void CplusImpleParser::ForConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForCondition(this);
}

CplusImpleParser::ForConditionContext* CplusImpleParser::forCondition() {
  ForConditionContext *_localctx = _tracker.createInstance<ForConditionContext>(_ctx, getState());
  enterRule(_localctx, 38, CplusImpleParser::RuleForCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    condition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForIncrementContext ------------------------------------------------------------------

CplusImpleParser::ForIncrementContext::ForIncrementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CplusImpleParser::ForIncrementContext::NUM() {
  return getToken(CplusImpleParser::NUM, 0);
}


size_t CplusImpleParser::ForIncrementContext::getRuleIndex() const {
  return CplusImpleParser::RuleForIncrement;
}

void CplusImpleParser::ForIncrementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForIncrement(this);
}

void CplusImpleParser::ForIncrementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForIncrement(this);
}

CplusImpleParser::ForIncrementContext* CplusImpleParser::forIncrement() {
  ForIncrementContext *_localctx = _tracker.createInstance<ForIncrementContext>(_ctx, getState());
  enterRule(_localctx, 40, CplusImpleParser::RuleForIncrement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    match(CplusImpleParser::NUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForBodyContext ------------------------------------------------------------------

CplusImpleParser::ForBodyContext::ForBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CplusImpleParser::StatContext *> CplusImpleParser::ForBodyContext::stat() {
  return getRuleContexts<CplusImpleParser::StatContext>();
}

CplusImpleParser::StatContext* CplusImpleParser::ForBodyContext::stat(size_t i) {
  return getRuleContext<CplusImpleParser::StatContext>(i);
}


size_t CplusImpleParser::ForBodyContext::getRuleIndex() const {
  return CplusImpleParser::RuleForBody;
}

void CplusImpleParser::ForBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForBody(this);
}

void CplusImpleParser::ForBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForBody(this);
}

CplusImpleParser::ForBodyContext* CplusImpleParser::forBody() {
  ForBodyContext *_localctx = _tracker.createInstance<ForBodyContext>(_ctx, getState());
  enterRule(_localctx, 42, CplusImpleParser::RuleForBody);
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
    setState(221);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 277037056) != 0)) {
      setState(218);
      stat();
      setState(223);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

CplusImpleParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CplusImpleParser::ExprContext *> CplusImpleParser::ConditionContext::expr() {
  return getRuleContexts<CplusImpleParser::ExprContext>();
}

CplusImpleParser::ExprContext* CplusImpleParser::ConditionContext::expr(size_t i) {
  return getRuleContext<CplusImpleParser::ExprContext>(i);
}

CplusImpleParser::RelOpContext* CplusImpleParser::ConditionContext::relOp() {
  return getRuleContext<CplusImpleParser::RelOpContext>(0);
}


size_t CplusImpleParser::ConditionContext::getRuleIndex() const {
  return CplusImpleParser::RuleCondition;
}

void CplusImpleParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void CplusImpleParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}

CplusImpleParser::ConditionContext* CplusImpleParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 44, CplusImpleParser::RuleCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(224);
    expr();
    setState(225);
    relOp();
    setState(226);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelOpContext ------------------------------------------------------------------

CplusImpleParser::RelOpContext::RelOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CplusImpleParser::RelOpContext::getRuleIndex() const {
  return CplusImpleParser::RuleRelOp;
}

void CplusImpleParser::RelOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelOp(this);
}

void CplusImpleParser::RelOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelOp(this);
}

CplusImpleParser::RelOpContext* CplusImpleParser::relOp() {
  RelOpContext *_localctx = _tracker.createInstance<RelOpContext>(_ctx, getState());
  enterRule(_localctx, 46, CplusImpleParser::RuleRelOp);
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
    setState(228);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7864332) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintExprContext ------------------------------------------------------------------

CplusImpleParser::PrintExprContext::PrintExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CplusImpleParser::PrintListContext* CplusImpleParser::PrintExprContext::printList() {
  return getRuleContext<CplusImpleParser::PrintListContext>(0);
}


size_t CplusImpleParser::PrintExprContext::getRuleIndex() const {
  return CplusImpleParser::RulePrintExpr;
}

void CplusImpleParser::PrintExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintExpr(this);
}

void CplusImpleParser::PrintExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintExpr(this);
}

CplusImpleParser::PrintExprContext* CplusImpleParser::printExpr() {
  PrintExprContext *_localctx = _tracker.createInstance<PrintExprContext>(_ctx, getState());
  enterRule(_localctx, 48, CplusImpleParser::RulePrintExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    match(CplusImpleParser::T__22);
    setState(231);
    match(CplusImpleParser::T__23);
    setState(232);
    printList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InputExprContext ------------------------------------------------------------------

CplusImpleParser::InputExprContext::InputExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CplusImpleParser::InputExprContext::ID() {
  return getTokens(CplusImpleParser::ID);
}

tree::TerminalNode* CplusImpleParser::InputExprContext::ID(size_t i) {
  return getToken(CplusImpleParser::ID, i);
}


size_t CplusImpleParser::InputExprContext::getRuleIndex() const {
  return CplusImpleParser::RuleInputExpr;
}

void CplusImpleParser::InputExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInputExpr(this);
}

void CplusImpleParser::InputExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInputExpr(this);
}

CplusImpleParser::InputExprContext* CplusImpleParser::inputExpr() {
  InputExprContext *_localctx = _tracker.createInstance<InputExprContext>(_ctx, getState());
  enterRule(_localctx, 50, CplusImpleParser::RuleInputExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
    match(CplusImpleParser::ID);
    setState(235);
    match(CplusImpleParser::T__8);
    setState(236);
    match(CplusImpleParser::T__24);
    setState(237);
    match(CplusImpleParser::T__25);
    setState(238);
    match(CplusImpleParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncCallContext ------------------------------------------------------------------

CplusImpleParser::FuncCallContext::FuncCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CplusImpleParser::FuncCallContext::ID() {
  return getToken(CplusImpleParser::ID, 0);
}

CplusImpleParser::ArgListContext* CplusImpleParser::FuncCallContext::argList() {
  return getRuleContext<CplusImpleParser::ArgListContext>(0);
}


size_t CplusImpleParser::FuncCallContext::getRuleIndex() const {
  return CplusImpleParser::RuleFuncCall;
}

void CplusImpleParser::FuncCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCall(this);
}

void CplusImpleParser::FuncCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCall(this);
}

CplusImpleParser::FuncCallContext* CplusImpleParser::funcCall() {
  FuncCallContext *_localctx = _tracker.createInstance<FuncCallContext>(_ctx, getState());
  enterRule(_localctx, 52, CplusImpleParser::RuleFuncCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    match(CplusImpleParser::ID);
    setState(241);
    match(CplusImpleParser::T__4);
    setState(242);
    argList();
    setState(243);
    match(CplusImpleParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgListContext ------------------------------------------------------------------

CplusImpleParser::ArgListContext::ArgListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CplusImpleParser::ExprContext *> CplusImpleParser::ArgListContext::expr() {
  return getRuleContexts<CplusImpleParser::ExprContext>();
}

CplusImpleParser::ExprContext* CplusImpleParser::ArgListContext::expr(size_t i) {
  return getRuleContext<CplusImpleParser::ExprContext>(i);
}


size_t CplusImpleParser::ArgListContext::getRuleIndex() const {
  return CplusImpleParser::RuleArgList;
}

void CplusImpleParser::ArgListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgList(this);
}

void CplusImpleParser::ArgListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgList(this);
}

CplusImpleParser::ArgListContext* CplusImpleParser::argList() {
  ArgListContext *_localctx = _tracker.createInstance<ArgListContext>(_ctx, getState());
  enterRule(_localctx, 54, CplusImpleParser::RuleArgList);
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
    setState(253);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1879048224) != 0)) {
      setState(245);
      expr();
      setState(250);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CplusImpleParser::T__7) {
        setState(246);
        match(CplusImpleParser::T__7);
        setState(247);
        expr();
        setState(252);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintListContext ------------------------------------------------------------------

CplusImpleParser::PrintListContext::PrintListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CplusImpleParser::PrintListContext::STRING() {
  return getTokens(CplusImpleParser::STRING);
}

tree::TerminalNode* CplusImpleParser::PrintListContext::STRING(size_t i) {
  return getToken(CplusImpleParser::STRING, i);
}

std::vector<CplusImpleParser::ExprContext *> CplusImpleParser::PrintListContext::expr() {
  return getRuleContexts<CplusImpleParser::ExprContext>();
}

CplusImpleParser::ExprContext* CplusImpleParser::PrintListContext::expr(size_t i) {
  return getRuleContext<CplusImpleParser::ExprContext>(i);
}


size_t CplusImpleParser::PrintListContext::getRuleIndex() const {
  return CplusImpleParser::RulePrintList;
}

void CplusImpleParser::PrintListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintList(this);
}

void CplusImpleParser::PrintListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintList(this);
}

CplusImpleParser::PrintListContext* CplusImpleParser::printList() {
  PrintListContext *_localctx = _tracker.createInstance<PrintListContext>(_ctx, getState());
  enterRule(_localctx, 56, CplusImpleParser::RulePrintList);
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
    setState(257);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(255);
      match(CplusImpleParser::STRING);
      break;
    }

    case 2: {
      setState(256);
      expr();
      break;
    }

    default:
      break;
    }
    setState(266);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CplusImpleParser::T__23) {
      setState(259);
      match(CplusImpleParser::T__23);
      setState(262);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
      case 1: {
        setState(260);
        match(CplusImpleParser::STRING);
        break;
      }

      case 2: {
        setState(261);
        expr();
        break;
      }

      default:
        break;
      }
      setState(268);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EndinContext ------------------------------------------------------------------

CplusImpleParser::EndinContext::EndinContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CplusImpleParser::ExprContext* CplusImpleParser::EndinContext::expr() {
  return getRuleContext<CplusImpleParser::ExprContext>(0);
}


size_t CplusImpleParser::EndinContext::getRuleIndex() const {
  return CplusImpleParser::RuleEndin;
}

void CplusImpleParser::EndinContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEndin(this);
}

void CplusImpleParser::EndinContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CplusImpleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEndin(this);
}

CplusImpleParser::EndinContext* CplusImpleParser::endin() {
  EndinContext *_localctx = _tracker.createInstance<EndinContext>(_ctx, getState());
  enterRule(_localctx, 58, CplusImpleParser::RuleEndin);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
    match(CplusImpleParser::T__26);
    setState(271);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(270);
      expr();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void CplusImpleParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  cplusimpleParserInitialize();
#else
  ::antlr4::internal::call_once(cplusimpleParserOnceFlag, cplusimpleParserInitialize);
#endif
}
