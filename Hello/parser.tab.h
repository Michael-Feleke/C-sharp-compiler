
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STRING_LITERAL = 258,
     ID = 259,
     NUMBER = 260,
     USING = 261,
     CLASS = 262,
     STATIC = 263,
     LPAREN = 264,
     RPAREN = 265,
     LBRACE = 266,
     RBRACE = 267,
     SEMICOLON = 268,
     DOT = 269,
     ASSIGN = 270,
     STRING = 271,
     BOOL = 272,
     INT = 273,
     MINUS = 274,
     PLUS = 275,
     MULTIPLY = 276,
     DIVIDE = 277,
     MODULO = 278,
     LESS_THAN = 279,
     LESS_EQUAL = 280,
     GREATER_THAN = 281,
     GREATER_EQUAL = 282,
     EQUALS = 283,
     NOT_EQUALS = 284,
     AND = 285,
     OR = 286,
     NOT = 287,
     COMMA = 288,
     QUESTION = 289,
     COLON = 290,
     IF = 291,
     ELSE = 292,
     WHILE = 293,
     RETURN = 294,
     SWITCH = 295,
     VOID = 296,
     CONSOLE = 297,
     WRITE_LINE = 298,
     READ_LINE = 299,
     CASE = 300,
     DEFAULT = 301,
     BREAK = 302,
     CONTINUE = 303
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 23 "parser.y"

    char* strval;
    int intval;



/* Line 1676 of yacc.c  */
#line 107 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


