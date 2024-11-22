grammar CplusImple;

prog: include* (funcDef)* mainDef EOF;

include: '#include' '<' ID '>';

mainDef: 'main' '(' ')' ':' stat* endin;

funcDef: ID '(' paramList ')' ':' stat* endin (ID)?;

paramList: (ID (',' ID)*)?;

stat: assignment
    | printExpr
    | inputExpr
    | funcCall
    | ifStat
    | whileStat
    | forStat;

assignment: ID '=' expr;

expr: arithmetic
    | funcCall
    | STRING;

arithmetic: term (('+' | '-') term)*;

term: factor (('*' | '/') factor)*;

factor: NUM
      | ID
      | '(' expr ')';

ifStat: 'if' '(' condition ')' ':' ifBody endin (elseStat)?;

ifBody: stat*;

elseStat: 'else' ':' elseBody endin;

elseBody: stat*;

whileStat: 'while' '(' condition ')' ':' whileBody endin;

whileBody: stat*;

forStat: 'for' '(' forInit '|' forCondition '|' forIncrement ')' ':' forBody endin;

forInit: assignment; // Inicialización
forCondition: condition; // Condición
forIncrement: NUM; // Ahora solo se acepta un número

forBody: stat*;

condition: expr relOp expr;

relOp: '==' | '!=' | '<' | '>' | '<=' | '>=';

printExpr: 'std::cout' '<<' printList;

inputExpr: ID '=' 'std::cin' '>>' ID;

funcCall: ID '(' argList ')';

argList: (expr (',' expr)*)?;

printList: (STRING | expr) ( '<<' (STRING | expr))*;

endin: 'endin' (expr)?;

ID: [a-zA-Z_][a-zA-Z0-9_]*;
NUM: ('-'? [0-9]+); // Permitir números negativos
STRING: '"' (~["\\])* '"';
WS: [ \t\n\r]+ -> skip;