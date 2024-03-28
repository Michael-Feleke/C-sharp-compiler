%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.tab.h"
extern FILE *yyin; 
extern YYSTYPE yylval;
void yyerror(const char *s);
%}

%union {
    char *str;
}

%token <str> KEYWORD IDENTIFIER STRING NUMBER
%token <str> PUNCTUATION OPERATOR UNKNOWN

%start program

%%

program : statement_list { printf("Parsing completed successfully.\n"); }
        ;

statement_list : statement
               | statement_list statement
               ;

statement : expression_statement { printf("Expression statement.\n"); }
          | declaration_statement { printf("Declaration statement.\n"); }
          ;

expression_statement : expression ';' { printf("Expression statement.\n"); }

declaration_statement : type IDENTIFIER ';' { printf("Declaration statement for %s.\n", $2); if ($2) free($2); }
type : KEYWORD { printf("Type: %s\n", $1); if ($1) free($1); }
expression : primary_expression
           | expression '+' primary_expression { printf("Addition operation.\n"); }
           | expression '-' primary_expression { printf("Subtraction operation.\n"); }
           | expression '*' primary_expression { printf("Multiplication operation.\n"); }
           | expression '/' primary_expression { printf("Division operation.\n"); }
           | '(' expression ')' { printf("Parenthesized expression.\n"); }
           ;
primary_expression : IDENTIFIER { printf("Identifier: %s\n", $1); if ($1) free($1); }
                   | STRING { printf("String literal: %s\n", $1); if ($1) free($1); }
                   | NUMBER { printf("Numeric literal: %s\n", $1); if ($1) free($1); }
                      ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Parser error: %s\n", s);
    exit(EXIT_FAILURE);
}

int main(int argc, char *argv[]) {
    FILE *file;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return EXIT_FAILURE;
    }

    file = fopen(argv[1], "r");
    if (!file) {
        fprintf(stderr, "Failed to open input file.\n");
        return EXIT_FAILURE;
    }

    yyin = file;

    yyparse();

    fclose(file);
    return EXIT_SUCCESS;
}
