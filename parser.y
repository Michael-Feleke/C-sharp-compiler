%{
#include <stdio.h>
#include <stdlib.h>
extern int yylex();
void yyerror(const char *s);
%}

%token KEYWORD IDENTIFIER STRING NUMBER PUNCTUATION OPERATOR UNKNOWN

%%

program : statement_list
        ;

statement_list : statement
               | statement_list statement
               ;

statement : variable_declaration
          | expression_statement
          | compound_statement
          | if_statement
          | while_statement
          | return_statement
          | ';'
          ;

variable_declaration : KEYWORD IDENTIFIER ';'
                     ;

expression_statement : expression ';'
                     ;

compound_statement : '{' statement_list '}'
                   ;

if_statement : KEYWORD '(' expression ')' statement
             | KEYWORD '(' expression ')' statement KEYWORD statement
             ;

while_statement : KEYWORD '(' expression ')' statement
                ;

return_statement : KEYWORD expression ';'
                 ;

expression : IDENTIFIER '=' expression
           | simple_expression
           ;

simple_expression : term
                  | simple_expression OPERATOR term
                  ;

term : IDENTIFIER
     | NUMBER
     ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Parser error: %s\n", s);
}

int main() {
    yyparse();
    return 0;
}
