
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.tab.h"

extern YYSTYPE yylval;
extern int line_number; // Declaration of line_number here

int line_number = 1;

struct symbol_entry {
    char name[50];
    char data_type[20];
    int token_type;
};

struct symbol_entry symbol_table[100];
int symbol_count = 0;

char* token_strings[] = {
    "USING", "STRING", "STRING_LITERAL",
    "CLASS", "STATIC", "SEMICOLON", "NUMBER",
    "ASSIGN", "MINUS", "PLUS", "MULTIPLY", "DIVIDE", "MODULO", "DOT", "LBRACKET", "RBRACKET",
    "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LESS_THAN", "LESS_EQUAL", "GREATER_THAN", "GREATER_EQUAL",
    "EQUALS", "NOT_EQUALS", "AND", "OR", "NOT", "INT",  "VOID", "BOOL","COMMA", "IF", "ELSE", "SWITCH", "CASE", "DEFAULT", "BREAK", "RETURN", "COLON", "QUESTION_MARK", "CONTINUE", "WHILE", "FOR","LSBRACE","RSBRACE","DOUBLE","PUBLIC","PRIVATE","PROTECTED" ,"TRUE_VALUE","FALSE_VALUE"
};

int search_symbol_table(char *name) {
    for (int i = 0; i < symbol_count; i++) {
        if (strcmp(symbol_table[i].name, name) == 0)
            return symbol_table[i].token_type;
    }
    return -1;
}

void add_to_symbol_table(char *name, int token) {
    strcpy(symbol_table[symbol_count].name, name);
    // strcpy(symbol_table[symbol_count].data_type, ""); // Initialize data_type to empty string
    symbol_table[symbol_count].token_type = token;
    symbol_count++;
}

void displaySymbolTable() {
    printf("Symbol Table:\n");
    printf("------------------------------------------------\n");
    printf("%-20s | %-15s | %-10s\n", "Name", "Data Type", "Token Type");
    printf("------------------------------------------------\n");
    for (int i = 0; i < symbol_count; i++) {
        printf("%-20s | %-15s | %-10d\n", symbol_table[i].name, symbol_table[i].data_type, symbol_table[i].token_type);
    }
    printf("------------------------------------------------\n");
}

char* search_symbol_tableByname(char *name) {
    for (int i = 0; i < symbol_count; i++) {
        if (strcmp(symbol_table[i].name, name) == 0)
            return token_strings[symbol_table[i].token_type];
    }
    return "UNKNOWN";
}

%}

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
"{"                 { return LBRACE; }
"}"                 { return RBRACE; }
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


[0-9]+              { yylval.strval = strdup(yytext); return NUMBER; }
[a-zA-Z_][a-zA-Z0-9_]*  { yylval.strval = strdup(yytext);
                          int index = search_symbol_table(yytext);
                          if (index == -1) {
                              return ID;
                          }
                          else {
                              return ID;
                          }
                        }
(\"|\')[^\"]*(\"|\') { yylval.strval = strdup(yytext); return STRING_LITERAL; }


\/\/[^\n]*           { /* Ignore single-line comments */ }
\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*\/  { /* Ignore multi-line comments */ }
[ \t\r]             ; // Ignore whitespace and newlines
\n                  { line_number++;  }
.                   ; // Ignore unrecognized characters
%%

int yywrap() {
    displaySymbolTable(); // Call displaySymbolTable at the end of processing
    return 1;
}