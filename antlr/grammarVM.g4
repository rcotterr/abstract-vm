grammar grammarVM;

prog : SEP* instr (SEP instr)* EOF
    ;

instr :
    CMD_VALUE VALUE
    | CMD
    ;

CMD_VALUE :
    PUSH | ASSERT
    ;

CMD :
    POP | DUMP | ADD | SUB | MUL | DIV | MOD | PRINT | EXIT
    ;

VALUE :
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
    : ';' ~[\n]* '\n' -> channel(HIDDEN)
    ;

SPACES
    : [ \u000B\t] -> channel(HIDDEN)
    ;