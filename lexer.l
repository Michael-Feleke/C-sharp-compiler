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


