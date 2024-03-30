%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern FILE *yyin;
extern int yylex();

void yyerror(const char *s);

%}

%union {
    char *str;
}

%token <str> STRING_LITERAL
%token USING SYSTEM CLASS VOID_TYPE STATIC MAIN LPAREN RPAREN LBRACE RBRACE SEMICOLON CONSOLE DOT WRITELINE QUOTE ID COMMA

%%

program : using_stmt class_decl
        {
            printf("Parsed program\n");
        }
        ;

using_stmt : USING SYSTEM SEMICOLON
           {
               printf("Parsed using statement\n");
           }
           ;

class_decl : CLASS ID LBRACE method_decl RBRACE
           {
               printf("Parsed class declaration\n");
           }
           ;

method_decl : STATIC VOID_TYPE MAIN LPAREN RPAREN LBRACE statement RBRACE
            {
                printf("Parsed method declaration: static void Main()\n");
            }
            ;

statement : CONSOLE DOT WRITELINE LPAREN QUOTE STRING_LITERAL COMMA STRING_LITERAL QUOTE RPAREN SEMICOLON
          {
              printf("Parsed statement: Console.WriteLine(\"%s, %s\")\n", $6, $8);
          }
          ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Parser error: %s\n", s);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");
    if (!input_file) {
        printf("Error opening input file.\n");
        return 1;
    }

    yyin = input_file;

    if (yyparse() == 0) {
        printf("Parsed successfully.\n");
    }

    fclose(input_file);

    return 0;
}
