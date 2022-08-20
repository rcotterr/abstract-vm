grammar grammarVM;

prog : SEP* instr SEP* (SEP+ instr)* SEP* EOF
    ;

instr :
    CMD_VALUE value
    | CMD
    ;

CMD_VALUE :
    PUSH | ASSERT
    ;

CMD :
    POP | DUMP | RDUMP| ADD | SUB | MUL | DIV | MOD | PRINT | EXIT
    ;

value :
    INT_TYPE OPEN_BRACKET N CLOSE_BRACKET
    | FLOAT_TYPE OPEN_BRACKET Z CLOSE_BRACKET
    ;

INT_TYPE: INT8 | INT16 | INT32;
FLOAT_TYPE: FLOAT | DOUBLE;

INT8   : 'int8';
INT16  : 'int16';
INT32  : 'int32';
DOUBLE : 'double';
FLOAT  : 'float';

PUSH   : 'push';
ASSERT : 'assert';
POP    : 'pop';
DUMP   : 'dump';
RDUMP   : 'rdump';
ADD    : 'add';
SUB    : 'sub';
MUL    : 'mul';
DIV    : 'div';
MOD    : 'mod';
PRINT  : 'print';
EXIT   : 'exit';

N : [-]?[0-9]+;

Z : [-]?[0-9]+.[0-9]+;

SEP : '\n'+;

OPEN_BRACKET : '(';
CLOSE_BRACKET : ')';

//Hidden channels
SINGLE_LINE_COMMENT
    : ';' ~[\n]* -> channel(HIDDEN)
    ;

SPACES
    : [ \u000B\t] -> channel(HIDDEN)
    ;