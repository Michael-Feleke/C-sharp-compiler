%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern FILE *yyin;
extern int yylex();

void yyerror(const char *s);

%}



%token USING SYSTEM CLASS VOID_TYPE STATIC MAIN LPAREN RPAREN LBRACE RBRACE SEMICOLON CONSOLE DOT WRITELINE STRING_LITERAL ID

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

statement : CONSOLE DOT WRITELINE LPAREN STRING_LITERAL RPAREN SEMICOLON
          {
              printf("Parsed statement: Console.WriteLine(\"%s\")\n", $6);
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

    yyin = fopen(argv[1], "r");
    if (yyin == NULL) {
        perror("Error opening file");
        return 1;
    }

    yyparse();

    fclose(yyin);
    return 0;
}
