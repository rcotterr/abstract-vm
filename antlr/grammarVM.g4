grammar grammarVM;

prog : instr (SEP instr)* EOF
    ;

instr : CMD_VALUE VALUE
    | 'pop'
    | 'dump'
    | CMD_VALUE VALUE
    | 'add'
    | 'sub'
    | 'mul'
    | 'div'
    | 'mod'
    | 'print'
    | 'exit'
    ;

CMD_VALUE :
    PUSH | ASSERT
    ;

//CMD : POP
//    | DUMP
//    | ADD
//    |
//;

VALUE :
    INT8 OPEN_BRACKET N CLOSE_BRACKET
    | INT16 OPEN_BRACKET N CLOSE_BRACKET
    | INT32 OPEN_BRACKET N CLOSE_BRACKET
    | DOUBLE OPEN_BRACKET Z CLOSE_BRACKET
    | FLOAT OPEN_BRACKET Z CLOSE_BRACKET
;

INT8 : 'int8';
INT16 : 'int16';
INT32 : 'int32';
DOUBLE : 'double';
FLOAT : 'float';

PUSH : 'push';
ASSERT : 'assert';

N : [-]?[0-9]+;

Z : [-]?[0-9]+.[0-9]+;

SEP : '\n'+;

OPEN_BRACKET : '(';
CLOSE_BRACKET : ')';

//Hidden channels
SINGLE_LINE_COMMENT
    : ';' ~[\n]* '\n' -> channel(HIDDEN)
 ;

SPACES
 : [ \u000B\t] -> channel(HIDDEN)
 ;