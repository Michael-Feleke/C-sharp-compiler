%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser3.tab.h"
%}

%%
"using"                     { return USING; }
"System"                    { return SYSTEM; }
"class"                     { return CLASS; }
"void"                      { return VOID_TYPE; }
"static"                    { return STATIC; }
"Main"                      { return MAIN; }
"("                         { return LPAREN; }
")"                         { return RPAREN; }
"{"                         { return LBRACE; }
"}"                         { return RBRACE; }
";"                         { return SEMICOLON; }
"Console"                   { return CONSOLE; }
"."                         { return DOT; }
"WriteLine"                 { return WRITELINE; }
"\""                        { return QUOTE; }
","                         { return COMMA; }
[a-zA-Z_][a-zA-Z0-9_]*      { yylval.str = strdup(yytext); return ID; }
\"([^\"\\]|\\.)*\"          { yylval.str = strdup(yytext); return STRING_LITERAL; }
[ \t\n]                     ; // Ignore whitespace and newlines
.                           ; // Ignore unrecognized characters
%%

int yywrap() {
    return 1;
}
