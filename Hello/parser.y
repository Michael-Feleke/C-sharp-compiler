%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
extern int search_symbol_table(char *name, int scope, int scope_id,int func_id);
extern void add_to_symbol_table(char *name, int type,int line_number,int scope,int scope_id);
extern void addValue(int numValue);
extern char* get_data_type(char *token_name);
extern bool check_constant_type_For_String(char *name);
extern bool check_constant_type_For_Number(char *name);
// extern bool check_constant_type_For_Bool_values(char *name);
extern void displaySymbolTable();
extern int yylineno;
extern int scope_count;
extern int scope_id_count;

extern FILE *yyin;
extern int yylex();

void yyerror(const char *s);

void check_type_mismatch(char* type1, char * type2 ){
    if(strcmp(get_data_type(type1),get_data_type(type2))!=0){
        


            yyerror("Operands has not same data type");
           }
}
void check_type_mismatches(char* type1, char * type2, char * type3 ){
    
    if(strcmp(get_data_type(type1),get_data_type(type2))!=0){
 
            yyerror("Operands has not same data type");
           }
    if(strcmp(get_data_type(type2),get_data_type(type3))!=0){
 
            yyerror("Operands has not same data type");
           }
    if(strcmp(get_data_type(type1),get_data_type(type3))!=0){
 
            yyerror("Operands has not same data type");
           }
    
}

typedef struct {
    char* strval;
    int intval;
    bool boolval;
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

%token USING CLASS VOID STATIC LPAREN RPAREN LBRACE RBRACE SEMICOLON DOT IF ELSE SWITCH CASE DEFAULT BREAK RETURN
%token ASSIGN STRING BOOL INT MINUS PLUS MULTIPLY DIVIDE MODULO LESS_THAN LESS_EQUAL GREATER_THAN GREATER_EQUAL EQUALS NOT_EQUALS AND OR NOT COMMA QUESTION_MARK COLON WHILE FOR CONTINUE LSBRACE RSBRACE DOUBLE PRIVATE PUBLIC PROTECTED TRUE_VALUE FALSE_VALUE

%left OR
%left AND
%left EQUALS NOT_EQUALS
%left LESS_THAN LESS_EQUAL GREATER_THAN GREATER_EQUAL
%left PLUS MINUS
%left MULTIPLY DIVIDE MODULO
%right NOT
%left DOT

%start program
%%

program : statement_list 
        ;

statement_list : statement 
               | statement_list statement 
               ;

statement : expression_statement
          | declaration_statement 
          | directive_statement 
          | conditional_statement 
          | exit_statement 
          | loop_statement 
          | continue_statement 
          | function_call 
          |function_call SEMICOLON;

function_call : ID LPAREN RPAREN { printf("function_call.\n"); }
| ID LPAREN expression RPAREN { printf("function_call.\n"); }

continue_statement : CONTINUE SEMICOLON { printf("continue_statement.\n"); }

loop_statement : while_statement 
               | for_statement 


while_statement : WHILE LPAREN expression RPAREN LBRACE statement_list RBRACE { printf("While statement block.\n"); }
                | WHILE LPAREN statement RPAREN statement_list { printf("While statement.\n"); }
                ;

for_statement : FOR LPAREN statement SEMICOLON expression SEMICOLON expression RPAREN LBRACE statement RBRACE { printf("For statement block.\n"); }
              | FOR LPAREN statement SEMICOLON expression SEMICOLON expression RPAREN statement { printf("For statement.\n"); }


exit_statement : RETURN statement_list { printf("exit_statement.\n"); }
               | BREAK SEMICOLON { printf("exit_statement.\n"); }
               ;

conditional_statement : if_statement 
                      | switch_statement 
                      | ternary_expression
                      ;


if_statement : IF LPAREN statement RPAREN LBRACE statement_list RBRACE { printf("If statement.\n"); }
             | IF LPAREN statement RPAREN LBRACE statement_list RBRACE ELSE LBRACE statement_list RBRACE { printf("If-else statement.\n"); }
             | IF LPAREN statement RPAREN LBRACE statement_list RBRACE ELSE statement_list { printf("If-else statement.\n"); }
             | IF LPAREN statement RPAREN statement_list { printf("If statement.\n"); }
             | IF LPAREN statement RPAREN statement_list ELSE statement_list { printf("If-else statement.\n"); }
             | IF LPAREN statement RPAREN statement_list ELSE LBRACE statement_list RBRACE { printf("If-else statement.\n"); }
             ;


switch_statement : SWITCH LPAREN expression RPAREN LBRACE case_list DEFAULT COLON statement_list RBRACE { printf("Switch statement.\n"); }


case_list : case_item 
          | case_list case_item
          ;

case_item : CASE expression COLON statement_list 
          | CASE expression COLON LBRACE statement RBRACE
          ;
         
ternary_expression : expression QUESTION_MARK expression COLON expression SEMICOLON { printf("Ternary expression.\n"); }
                   | expression QUESTION_MARK LBRACE expression RBRACE COLON LBRACE expression RBRACE { printf("Ternary expression.\n"); }
expression_statement : expression SEMICOLON { printf("Expression statement.\n"); }
|expression;
                     

declaration_statement : var_declarations SEMICOLON 
                      | function_declarations
                      | class_declarations 
                      
var_declarations : var_declaration { printf("Declaration statement.\n"); }
                    | type ID ASSIGN STRING_LITERAL{ printf("Declaration statement with assignment.\n");
                      char *identifier = $2;
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                      } 
                      
                      if(!check_constant_type_For_String($2)){
                                                
                                                
                                               yyerror("Semantic error: operands are in differnt type can not be assined\n");
                                                 }

                      };
                    | type ID ASSIGN NUMBER{ printf("Declaration statement with assignment.\n");
                      char *identifier = $2;
                      int value = atoi($4); 
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          addValue(value);
                      }
                      if(!check_constant_type_For_Number($2)){
                        yyerror("Semantic error: operands are in different type can not be assigned\n");
                      }
                      };
                                          | type ID ASSIGN primary_expression{ printf("Declaration statement with assignment.\n");
                    char *identifier = $4;
                    int value = atoi($4);

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = $2;
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         printf("Identifier '%s' added to symbol table with token type %d.\n", identifier2, ID);
                          add_to_symbol_table(identifier2, ID,yylineno,scope_count,scope_id_count); 
                          addValue(value);
                    }
                      else{
                             printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                      }

                         
                      }
                      };
                    | type ID ASSIGN expression{ printf("Declaration statement with assignment.\n");
                    
                      };
                    | type ID ASSIGN bool_values{ printf("Declaration statement with assignment.\n");
                      char *identifier = $2;
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                      }
                      }
                    | type LSBRACE RSBRACE ID ASSIGN expression{ printf("Declaration statement with assignment.\n");
                                     char *identifier = $4;
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                          
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                      } }

                 ;
                 
var_declaration : type ID 
                  {
                      printf("Variable declaration: %s\n", $2);
                      char *identifier = $2;
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                          
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                      }
                  };
                  | type LSBRACE RSBRACE ID 
                  {
                      printf("Variable declaration: %s\n", $4);
                      char *identifier = $4;
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                          
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                      }
                  }
                  ;


type : INT
     | STRING
     | DOUBLE
     | BOOL
     | VOID
     

directive_statement:USING ID SEMICOLON { printf("Using directive.\n"); 
                      char *identifier = $2;
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
}
class_declarations : CLASS ID LBRACE { } class_body RBRACE
           {
               printf("Parsed class declaration: %s\n", $2);
                                     char *identifier = $2;
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
           }
           | modifier CLASS ID LBRACE class_body RBRACE{
            printf("Parsed class declaration with modifier: %s\n", $3);
           }
           ;
  
class_body:statement_list { printf("class body");}
          |
          ;

function_declarations : modifier type ID LPAREN RPAREN LBRACE func_body RBRACE
            {
                printf("Parsed function declaration with modifier: %s\n", $3);
                           char *identifier = $3;
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      } 
                                  else{
                                                 printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                      }
            }
            | modifier type ID LPAREN parameter_list RPAREN LBRACE func_body RBRACE {
                           char *identifier = $3;
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,1);
                      if (token == -1) {
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      } 
                      else{
                                                 printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                      }
            }
            | type ID LPAREN RPAREN LBRACE func_body RBRACE
            {
                printf("Parsed function declaration: %s\n", $2);
                           char *identifier = $2;
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,1);
                      if (token == -1) {
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      } 
                                  else{
                                                 printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                      }
            }
            |type ID LPAREN parameter_list RPAREN LBRACE func_body RBRACE
            {
                printf("Parsed function declaration: %s\n", $2);
                           char *identifier = $2;
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,1);
                      if (token != -1) {
             
                                                        printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                      } 
                                  else{
                                add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      }
            }

            ;



modifier : STATIC { printf("Static modifier.\n"); }
| PUBLIC { printf("Public modifier.\n"); }
| PRIVATE { printf("Private modifier.\n"); }
| PROTECTED { printf("Protected modifier.\n"); }
parameter_list : parameter
              | parameter_list COMMA parameter { printf("Parameter list.\n"); }
parameter : type ID { printf("Parameter.\n");
                           char *identifier = $2;
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      }  }
| STRING LSBRACE RSBRACE ID { printf("Parameter.\n"); 
                           char *identifier = $4;
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      } };

func_body : statement_list
          |
          ;
          
array_list: expression 
| array_list COMMA expression 

console_list:expression
| console_list COMMA expression { printf("Console list.\n"); }
|expression PLUS statement_list { printf("console list.\n"); }
|;

bool_values:TRUE_VALUE | FALSE_VALUE;

expression : primary_expression
           | primary_expression PLUS primary_expression {
            char *identifier = $3;
            

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = $1;
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch($1,$3);
              
                      }

                         
                      }
           };
           | primary_expression MINUS primary_expression{ char *identifier = $3;

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = $1;
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch($1,$3);
              
                      }

                         
                      }}
           | primary_expression MULTIPLY primary_expression{
            char *identifier = $3;

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = $1;
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch($1,$3);
              
                      }

                         
                      }

            }
           | primary_expression DIVIDE primary_expression{
            char *identifier = $3;

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = $1;
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch($1,$3);
              
                      }

                         
                      }

            }
           | primary_expression PLUS ASSIGN primary_expression{
            char *identifier = $4;

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = $1;
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch($1,$4);
              
                      }

                         
                      }

            }
           | primary_expression MINUS ASSIGN primary_expression{
             char *identifier = $4;

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = $1;
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch($1,$4);
              
                      }

                         
                      }

            }
           | primary_expression MULTIPLY ASSIGN primary_expression{
             char *identifier = $4;

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = $1;
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch($1,$4);
              
                      }

                         
                      }

            }
           | primary_expression DIVIDE ASSIGN primary_expression{
             char *identifier = $4;

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = $1;
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch($1,$4);
              
                      }

                         
                      }

            }
           | primary_expression MODULO primary_expression{
            char *identifier = $3;

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = $1;
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch($1,$3);
              
                      }

                         
                      }

            }
           | primary_expression LESS_THAN primary_expression{
            char *identifier = $3;

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = $1;
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch($1,$3);
              
                      }

                         
                      }

            }
           | primary_expression LESS_EQUAL primary_expression{
            char *identifier = $3;

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = $1;
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch($1,$3);
              
                      }

                         
                      }

            }
           | primary_expression GREATER_THAN primary_expression{
            char *identifier = $3;

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = $1;
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch($1,$3);
              
                      }

                         
                      }

            }
           | primary_expression GREATER_EQUAL primary_expression{
            char *identifier = $3;

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = $1;
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch($1,$3);
              
                      }

                         
                      }

            }
           | primary_expression EQUALS primary_expression{
            char *identifier = $3;

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = $1;
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch($1,$3);
              
                      }

                         
                      }

            }
           | expression COMMA expression
           | primary_expression ASSIGN primary_expression {
            char *identifier = $3;
        

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = $1;
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{

                           check_type_mismatch($1,$3);
              
                      }

                         
                      }

            }
           | primary_expression ASSIGN primary_expression OPERATORS primary_expression {

            check_type_mismatches($1,$3,$5);

            }
           | primary_expression NOT_EQUALS primary_expression{
            char *identifier = $3;

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = $1;
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch($1,$3);
              
                      }

                         
                      }

            }
           | expression AND expression
           | expression OR expression
           | expression LSBRACE expression RSBRACE
           | NOT expression
           | LPAREN expression RPAREN
           | expression PLUS PLUS
           | expression MINUS MINUS
           | MINUS expression
           | PLUS PLUS expression
           | expression DOT expression LPAREN console_list RPAREN
           | LBRACE array_list RBRACE { printf("Array list.\n"); }
           ;

OPERATORS:PLUS | MINUS | MULTIPLY |DIVIDE;

primary_expression : ID { printf("Primary expression (identifier): %s\n", $1);
$$=$1;
        //    char *identifier = $1;
        //               int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
        //               if (token == -1) {
        //                   add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
        //                   printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
        //               } 
 }
                   | STRING_LITERAL { printf("Primary expression (string literal): %s\n", $1); 
                           char *identifier = $1;
          
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
$$=$1;
                   }
                   | NUMBER { printf("Primary expression (number): %s\n", $1); 
                   char *identifier = $1;
          
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      
$$=$1;
                   }
                   | bool_values { printf("Primary expression (boolean)\n"); }

%%

void yyerror(const char *s) {
    fprintf(stderr, "Syntax error at line %d: %s\n", yylineno, s);


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