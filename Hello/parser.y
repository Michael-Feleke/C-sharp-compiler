%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int search_symbol_table(char *name);
extern void add_to_symbol_table(char *name, int type);
extern void displaySymbolTable();
extern int line_number;

extern FILE *yyin;
extern int yylex();

void yyerror(const char *s);

typedef struct {
    char* strval;
    int intval;
} YYSTYPE;
#define YYSTYPE_IS_DECLARED

%}

%union {
    char* strval;
    int intval;
}

%type <strval> var_declaration
%type <strval> primary_expression



%token <strval> STRING_LITERAL ID
%token <strval> NUMBER

%token USING CLASS STATIC LPAREN RPAREN LBRACE RBRACE SEMICOLON DOT
%token ASSIGN STRING BOOL INT MINUS PLUS MULTIPLY DIVIDE MODULO LESS_THAN LESS_EQUAL GREATER_THAN GREATER_EQUAL EQUALS NOT_EQUALS AND OR NOT COMMA QUESTION COLON IF ELSE WHILE RETURN SWITCH VOID CONSOLE WRITE_LINE READ_LINE
CASE DEFAULT BREAK CONTINUE 

%left OR
%left AND
%left EQUALS NOT_EQUALS
%left LESS_THAN LESS_EQUAL GREATER_THAN GREATER_EQUAL
%left PLUS MINUS
%left MULTIPLY DIVIDE MODULO
%right NOT

%start program
%%

program : statement_list { printf("Parsing completed successfully.\n"); }
        ;

statement_list : statement
               | statement_list statement
               | 
               ;

statement : expression_statement 
          | declaration_statement 
          | directive_statement 
          | conditional_statement

conditional_statement : if_statements
                      | switch_statement 
                      | ternary_statement

ternary_statement : expression QUESTION expression COLON expression { printf("Ternary statement.\n"); }

switch_statement : SWITCH LPAREN expression RPAREN LBRACE case_list DEFAULT COLON statement_list BREAK SEMICOLON RBRACE 
|SWITCH LPAREN expression RPAREN LBRACE case_list DEFAULT COLON statement_list RBRACE 
                  | SWITCH LPAREN expression RPAREN LBRACE RBRACE 
                  ;

case_list : case_list case_item
          | case_item
          ;

case_item : CASE expression COLON statement_list BREAK SEMICOLON 
| CASE expression COLON LBRACE statement_list RBRACE BREAK SEMICOLON
| CASE expression COLON  statement_list 
          ;

if_statements : IF LPAREN expression RPAREN statement_list { printf("If statement.\n"); }
              | IF LPAREN expression RPAREN LBRACE statement_list RBRACE { printf("If-block statement.\n"); }
              | IF LPAREN expression RPAREN LBRACE statement_list RBRACE ELSE statement { printf("If-else-block statement.\n"); }
              | IF LPAREN expression RPAREN LBRACE statement_list RBRACE ELSE   LBRACE statement RBRACE { printf("If-else-block statement.\n"); }
              | IF LPAREN expression RPAREN statement_list ELSE statement { printf("If-else statement.\n"); }
              | IF LPAREN expression RPAREN statement_list ELSE LBRACE statement_list RBRACE { printf("If-else statement.\n"); }


expression_statement : expression SEMICOLON { printf("Expression statement.\n"); }

declaration_statement : var_declarations SEMICOLON 
                      | function_declarations
                      | class_declarations
                      
var_declarations : var_declaration { printf("Declaration statement.\n"); }
          ;
                 | type ID ASSIGN expression{ printf("Declaration statement with assignment.\n");
                                     char *identifier = $2;
                      int token = search_symbol_table(identifier);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                          
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, ID); 
                      } }
          ;
                ;


  
        
                 
var_declaration : type ID 
                  {
                      printf("Variable declaration: %s\n", $2);
                      char *identifier = $2;
                      int token = search_symbol_table(identifier);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                          
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, ID); 
                      }
                  }
                  ;

type : INT
     | STRING
     | BOOL
     | VOID
     

directive_statement:USING ID SEMICOLON { printf("Using directive.\n"); 
                      char *identifier = $2;
                          add_to_symbol_table(identifier, ID); 
}

class_declarations : CLASS ID LBRACE class_body RBRACE
           {
               printf("Parsed class declaration: %s\n", $2);
                                     char *identifier = $2;
                          add_to_symbol_table(identifier, ID); 
           }
           ;

class_body:statement_list 
          ;

function_declarations : STATIC type ID LPAREN RPAREN LBRACE func_body RBRACE
            {
                printf("Parsed static function declaration: %s\n", $3);
                                                     char *identifier = $3;
                          add_to_symbol_table(identifier, ID); 
            }
            | type ID LPAREN RPAREN LBRACE func_body RBRACE
            {
                printf("Parsed function declaration: %s\n", $2);
                                                     char *identifier = $2;
                          add_to_symbol_table(identifier, ID); 
            }
            ;



func_body: statement_list
           ;

expression : primary_expression
           | expression PLUS expression 
           | expression MINUS expression
           | expression MULTIPLY expression
           | expression DIVIDE expression
           | expression MODULO expression
           | expression LESS_THAN expression
           | expression LESS_EQUAL expression
           | expression GREATER_THAN expression
           | expression GREATER_EQUAL expression
           | expression EQUALS expression
           | expression COMMA expression
           | expression ASSIGN expression 
           | expression NOT_EQUALS expression
           | expression AND expression
           | expression OR expression
           | NOT expression
           | LPAREN expression RPAREN
           | expression PLUS PLUS
           | expression MINUS MINUS
           | MINUS expression
           | PLUS PLUS expression
           | expression DOT expression LPAREN expression RPAREN
           | CONSOLE DOT WRITE_LINE LPAREN expression RPAREN
           | CONSOLE DOT READ_LINE LPAREN expression RPAREN
           | 
           ;

primary_expression : ID { printf("Primary expression (identifier): %s\n", $1); 
                        char *identifier = $1;
                        int token = search_symbol_table(identifier);
                        if (token == -1) {
                            printf("Error: Identifier '%s' does not exist in the symbol table.\n", identifier);
                            yyerror("Identifier not declared");
                            }
 }
                   | STRING_LITERAL { printf("Primary expression (string literal): %s\n", $1); }
                   | NUMBER { printf("Primary expression (number): %s\n", $1); }

%%

void yyerror(const char *s) {
    fprintf(stderr, "Syntax error at line %d: %s\n", line_number, s);
    exit(EXIT_FAILURE);
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
