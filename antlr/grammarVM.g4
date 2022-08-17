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
    INT8 OPEN_BRACKET N CLOSE_BRACKET
    | INT16 OPEN_BRACKET N CLOSE_BRACKET
    | INT32 OPEN_BRACKET N CLOSE_BRACKET
    | DOUBLE OPEN_BRACKET Z CLOSE_BRACKET
    | FLOAT OPEN_BRACKET Z CLOSE_BRACKET
    ;

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