%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "parser.tab.h"

extern YYSTYPE yylval;

struct symbol_entry {
    char name[50];
    char data_type[20];
    int token_type;
    int line_num;
    int scope; // Added scope field
    int scope_id;
    int numValue;


};

struct symbol_entry symbol_table[100];
int symbol_count = 0;
int scope_count = 0; // Added scope count
int scope_id_count = 0;

void add_to_symbol_table(char *name, int token,int line_number) {
    strcpy(symbol_table[symbol_count].name, name);
    symbol_table[symbol_count].token_type = token;
    symbol_table[symbol_count].line_num = line_number;
    symbol_table[symbol_count].scope = scope_count; // Set scope
    symbol_table[symbol_count].scope_id = scope_id_count;
    symbol_count++;
    
}

void addValue (int numValue){
    symbol_table[symbol_count-1].numValue = numValue;
}

int search_symbol_table(char *name, int scope, int scope_id,int func_id) {
    for (int i = 0; i < symbol_count; i++) {
        if (strcmp(symbol_table[i].name, name) == 0 && symbol_table[i].scope < scope){

            return symbol_table[i].token_type;
        }
        else if (strcmp(symbol_table[i].name, name) == 0 && symbol_table[i].scope == scope && symbol_table[i].scope_id == scope_id) {
            return symbol_table[i].token_type;
        }
        else if (strcmp(symbol_table[i].name, name) == 0 && symbol_table[i].scope == scope && func_id==1) {
            return symbol_table[i].token_type;
        }
    }
    return -1;
}


void displaySymbolTable() {
    printf("Symbol Table:\n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("%-20s | %-15s | %-10s | %-10s | %-10s | %-10s | %-10s | \n", "Name", "Data Type", "Token Type","Line Number", "Scope", "Scope ID", "value"); // Added Scope
    printf("--------------------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < symbol_count; i++) {
        printf("%-20s | %-15s | %-10d | %-10d | %-10d | %-10d |  %-10d |\n", symbol_table[i].name, symbol_table[i].data_type, symbol_table[i].token_type, symbol_table[i].line_num, symbol_table[i].scope, symbol_table[i].scope_id,symbol_table[i].numValue); // Print scope
    }
    printf("---------------------------------------------------------------------------------------------------------\n");
}

char* get_data_type(char* token_name) {
    for (int i = 0; i < symbol_count; i++) {
        if (strcmp(symbol_table[i].name, token_name) == 0) {
            if (strlen(symbol_table[i].data_type) > 0) {
                return symbol_table[i].data_type;
            } else {
                return "UNKNOWN";
            }
        }
    }
    return "UNKNOWN";
}

int get_value(char* token_name) {
    for (int i = 0; i < symbol_count; i++) {
        if (strcmp(symbol_table[i].name, token_name) == 0) {
            return symbol_table[i].numValue;
        }
    }
    // Return a default value or handle error case
    return -1; // Default value (you can adjust this as needed)
}


bool check_constant_type_For_String(char *name){


  if(strcmp(get_data_type(name),"string")==0){

    return true;
 }
return false;
 
}
bool check_constant_type_For_Number(char *name){
  if(strcmp(get_data_type(name),"int")==0 || strcmp(get_data_type(name),"double")==0){

    return true;
 }
return false;
 
}
// bool check_constant_type_For_Bool(char *name){


//   if(strcmp(get_data_type(name),""true"")==0 || strcmp(get_data_type(name),"false")==0){

//     return true;
//  }
// return false;
 
// }

%}

%option yylineno

%%
"using"             {  return USING; }
"class"             {printf("Keyword:class\n"); strcpy(symbol_table[symbol_count].data_type, "class"); return CLASS; }
"void"              {printf("Keyword:void\n"); strcpy(symbol_table[symbol_count].data_type, "void"); return VOID; }
"static"            {printf("Keyword:static\n"); return STATIC; }
"public"            {printf("Keyword:public\n"); return PUBLIC; }
"private"            {printf("Keyword:private\n"); return PRIVATE; }
"protected"            {printf("Keyword:protected\n"); return PROTECTED; }
"int"               {printf("Keyword:int\n"); strcpy(symbol_table[symbol_count].data_type, "int"); return INT; }
"double"               {printf("Keyword:double\n"); strcpy(symbol_table[symbol_count].data_type, "double"); return DOUBLE; }
"bool"              {printf("Keyword:bool\n"); strcpy(symbol_table[symbol_count].data_type, "bool"); return BOOL; }
"string"            {printf("Keyword:string\n"); strcpy(symbol_table[symbol_count].data_type, "string"); return STRING; }
"if"                {printf("Keyword:if\n"); return IF;}
"else"              {printf("Keyword:else\n"); return ELSE;}
"switch"            {printf("Keyword:switch\n"); return SWITCH;}
"case"              {printf("Keyword:case\n"); return CASE;}
"default"           {printf("Keyword:default\n"); return DEFAULT;}
"break"             {printf("Keyword:break\n"); return BREAK;}
"return"            {printf("Keyword:return\n"); return RETURN;}
"while"             {printf("Keyword:while\n"); return WHILE;}
"for"               {printf("Keyword:for\n"); return FOR;}
"continue"          {printf("Keyword:continue\n"); return CONTINUE;}
"("                 { return LPAREN; }
")"                 { return RPAREN; }
"{"                 { scope_count++; scope_id_count++; return LBRACE; } // Increment scope count
"}"                 { scope_count--; return RBRACE; } // Decrement scope count
"["                 { return LSBRACE; }
"]"                 { return RSBRACE; }
";"                 { return SEMICOLON; }
"."                 { return DOT; }
"="                 { return ASSIGN; }
"-"                 { return MINUS; }
"+"                 { return PLUS; }
"*"                 { return MULTIPLY; }
","                 { return COMMA; }
"/"                 { return DIVIDE; }
"%"                 { return MODULO; }
"<"                 { return LESS_THAN; }
"<="                { return LESS_EQUAL; }
">"                 { return GREATER_THAN; }
">="                { return GREATER_EQUAL; }
"=="                { return EQUALS; }
"!="                { return NOT_EQUALS; }
"&&"                { return AND; }
"||"                { return OR; }
"!"                 { return NOT; }
"?"                 { return QUESTION_MARK; }
":"                 { return COLON; }
"true"              { return TRUE_VALUE; }
"false"             { return FALSE_VALUE; }


[0-9]+|[0-9]+\.[0-9]+             { yylval.strval = strdup(yytext);  strcpy(symbol_table[symbol_count].data_type, "int"); return NUMBER; }

[a-zA-Z_][a-zA-Z0-9_]*  { yylval.strval = strdup(yytext);
                          int index = search_symbol_table(yytext,-1,-1,0);
                          if (index == -1) {
                              return ID;
                          }
                          else {
                              return ID;
                          }
                        }
(\"|\')[^\"]*(\"|\') { yylval.strval = strdup(yytext);     return STRING_LITERAL; }


\/\/[^\n]*           { /* Ignore single-line comments */ }
\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*\/  { /* Ignore multi-line comments */ }
[ \t\r]             ; // Ignore whitespace and newlines
\n                  ;
.                   ; // Ignore unrecognized characters
%%

int yywrap() {
    displaySymbolTable(); // Call displaySymbolTable at the end of processing
    return 1;
}