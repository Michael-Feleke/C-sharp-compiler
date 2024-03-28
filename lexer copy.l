%{
#include <stdio.h>
#include <string.h>
%}

%option noyywrap

%{
// Function to print tokens
void printToken(const char* tokenType, const char* lexeme) {
    printf("%s(\"%s\");\n", tokenType, lexeme);
}

// Array for keywords
const char* keywords[] = {
    "abstract", "as", "base", "bool", "break", "byte", "case", "catch", "char", "checked",
    "class", "const", "continue", "decimal", "default", "delegate", "do", "double", "else",
    "enum", "event", "explicit", "extern", "false", "finally", "fixed", "float", "for", "foreach",
    "goto", "if", "implicit", "in", "int", "interface", "internal", "is", "lock", "long", "namespace",
    "new", "null", "object", "operator", "out", "override", "params", "private", "protected", "public",
    "readonly", "ref", "return", "sbyte", "sealed", "short", "sizeof", "stackalloc", "static", "string",
    "struct", "switch", "this", "throw", "true", "try", "typeof", "uint", "ulong", "unchecked", "unsafe",
    "ushort", "using", "using static", "virtual", "void", "volatile", "while"
};

// Function to check if a given string is a keyword
int isKeyword(const char* word) {
    int numKeywords = sizeof(keywords) / sizeof(keywords[0]);
    for (int i = 0; i < numKeywords; ++i) {
        if (strcmp(word, keywords[i]) == 0) {
            return 1; // Keyword found
        }
    }
    return 0; // Not a keyword
}
%}

identifier  [a-zA-Z_][a-zA-Z0-9_]*
string      \"([^\"\\]|\\.)*\"
number      [0-9]+
punctuation [()\[\]{};:,.?\/!%@#"']
operator [+\-*/%=<>!&|^?:,]
comment_line    \/\/[^\n]*\n
comment_block   "\/\*"(.*?)\*\/

%%

[ \t\n]+   /* Ignore whitespace */
{comment_line}    /* Ignore single-line comments */
{comment_block}   /* Ignore multi-line comments */

{identifier} {
    // Check if the identifier is a keyword
    if (isKeyword(yytext)) {
        printToken("KEYWORD", yytext);
    } else {
        printToken("IDENTIFIER", yytext);
    }
}

{string}   { printToken("STRING", yytext); }
{number}   { printToken("NUMBER", yytext); }
{punctuation} { printToken("PUNCTUATION", yytext); }
{operator} { printToken("OPERATOR", yytext); }
"==" { printToken("OPERATOR", yytext); }
"=>" { printToken("PUNCTUATION", yytext); }
"->" { printToken("PUNCTUATION", yytext); }
.          { printToken("UNKNOWN", yytext); }

%%

int main(int argc, char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE* file = fopen(argv[1], "r");
    if (!file) {
        fprintf(stderr, "Failed to open input file.\n");
        return 1;
    }

    yyin = file;

    yylex();

    fclose(file);
    return 0;
}


