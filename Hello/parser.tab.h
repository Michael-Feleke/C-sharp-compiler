/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    STRING_LITERAL = 258,          /* STRING_LITERAL  */
    ID = 259,                      /* ID  */
    NUMBER = 260,                  /* NUMBER  */
    USING = 261,                   /* USING  */
    CLASS = 262,                   /* CLASS  */
    VOID = 263,                    /* VOID  */
    STATIC = 264,                  /* STATIC  */
    LPAREN = 265,                  /* LPAREN  */
    RPAREN = 266,                  /* RPAREN  */
    LBRACE = 267,                  /* LBRACE  */
    RBRACE = 268,                  /* RBRACE  */
    SEMICOLON = 269,               /* SEMICOLON  */
    DOT = 270,                     /* DOT  */
    IF = 271,                      /* IF  */
    ELSE = 272,                    /* ELSE  */
    SWITCH = 273,                  /* SWITCH  */
    CASE = 274,                    /* CASE  */
    DEFAULT = 275,                 /* DEFAULT  */
    BREAK = 276,                   /* BREAK  */
    RETURN = 277,                  /* RETURN  */
    ASSIGN = 278,                  /* ASSIGN  */
    STRING = 279,                  /* STRING  */
    BOOL = 280,                    /* BOOL  */
    INT = 281,                     /* INT  */
    MINUS = 282,                   /* MINUS  */
    PLUS = 283,                    /* PLUS  */
    MULTIPLY = 284,                /* MULTIPLY  */
    DIVIDE = 285,                  /* DIVIDE  */
    MODULO = 286,                  /* MODULO  */
    LESS_THAN = 287,               /* LESS_THAN  */
    LESS_EQUAL = 288,              /* LESS_EQUAL  */
    GREATER_THAN = 289,            /* GREATER_THAN  */
    GREATER_EQUAL = 290,           /* GREATER_EQUAL  */
    EQUALS = 291,                  /* EQUALS  */
    NOT_EQUALS = 292,              /* NOT_EQUALS  */
    AND = 293,                     /* AND  */
    OR = 294,                      /* OR  */
    NOT = 295,                     /* NOT  */
    COMMA = 296,                   /* COMMA  */
    QUESTION_MARK = 297,           /* QUESTION_MARK  */
    COLON = 298,                   /* COLON  */
    WHILE = 299,                   /* WHILE  */
    FOR = 300,                     /* FOR  */
    CONTINUE = 301,                /* CONTINUE  */
    LSBRACE = 302,                 /* LSBRACE  */
    RSBRACE = 303,                 /* RSBRACE  */
    DOUBLE = 304,                  /* DOUBLE  */
    PRIVATE = 305,                 /* PRIVATE  */
    PUBLIC = 306,                  /* PUBLIC  */
    PROTECTED = 307,               /* PROTECTED  */
    TRUE_VALUE = 308,              /* TRUE_VALUE  */
    FALSE_VALUE = 309              /* FALSE_VALUE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "parser.y"

    char* strval;
    int intval;

#line 123 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
