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
    "EQUALS", "NOT_EQUALS", "AND", "OR", "NOT", "INT",  "VOID", "BOOL","COMMA", "IF", "ELSE", "WHILE", "RETURN", "TRUE", "FALSE", "IDENTIFIER", "EOF", "END", "FOR", "DO", "BREAK", "CONTINUE", "NEW", "NULL", "THIS", "SUPER", "TYPEOF", "INSTANCEOF", "TRY", "CATCH", "FINALLY", "THROW", "SWITCH", "CASE", "DEFAULT", "WHITESPACE", "COMMENT", "LINE_COMMENT","QUESTION","COLON", "CONSOLE", "WRITE_LINE", "READ_LINE",
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
"int"               {printf("Keyword:int\n"); strcpy(symbol_table[symbol_count].data_type, "int"); return INT; }
"bool"              {printf("Keyword:bool\n"); strcpy(symbol_table[symbol_count].data_type, "bool"); return BOOL; }
"string"            {printf("Keyword:string\n"); strcpy(symbol_table[symbol_count].data_type, "string"); return STRING; }

"Console"           {printf("Keyword:Console\n"); return CONSOLE; }
"WriteLine"         {printf("Keyword:WriteLine\n"); return WRITE_LINE; }
"ReadLine"          {printf("Keyword:ReadLine\n"); return READ_LINE; }

"else"                { return ELSE; }
"switch"                { return SWITCH; }
"if"                { return IF; }
"return"            {return RETURN;}
"case"                {return CASE;}
"default"                {return DEFAULT;}
"while"                {return WHILE;}
"break"                {return BREAK;}
"continue"                {return CONTINUE;}

"("                 { return LPAREN; }
")"                 { return RPAREN; }
"{"                 { return LBRACE; }
"}"                 { return RBRACE; }
";"                 { return SEMICOLON; }
":"                 { return COLON; }
"?"                 { return QUESTION; }
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
