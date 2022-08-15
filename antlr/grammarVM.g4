grammar grammarVM;

prog : (decl | expr)+ EOF
    ;

decl :
    INSTR
;

expr :
    decl SEP
;

//expr : INSTR SEP INSTR EOF;

INSTR : 'push' VALUE
    | 'pop'
    | 'dump'
    | 'assert' VALUE
    | 'add'
    | 'sub'
    | 'mul'
    | 'div'
    | 'mod'
    | 'print'
    | 'exit'
    ;

VALUE :
    'int8'(N)
    | 'int16'(N)
    | 'int32'(N)
    | 'float'(Z)
    | 'double'(Z)
;

N : [-]?[0-9]+;

Z : [-]?[0-9]+.[0-9]+;

SEP : '\n'+;

WHITESPACE : ' ' -> skip ;

COMMENT : ';' ~[\r\n]* -> skip ;