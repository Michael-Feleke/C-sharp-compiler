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

