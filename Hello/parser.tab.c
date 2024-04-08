
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int search_symbol_table(char *name, int scope, int scope_id);
extern void add_to_symbol_table(char *name, int type,int line_number,int scope,int scope_id);
extern void displaySymbolTable();
extern int yylineno;
extern int scope_count;
extern int scope_id_count;

extern FILE *yyin;
extern int yylex();

void yyerror(const char *s);

typedef struct {
    char* strval;
    int intval;
} YYSTYPE;
#define YYSTYPE_IS_DECLARED



/* Line 189 of yacc.c  */
#line 98 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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
     VOID = 263,
     STATIC = 264,
     LPAREN = 265,
     RPAREN = 266,
     LBRACE = 267,
     RBRACE = 268,
     SEMICOLON = 269,
     DOT = 270,
     IF = 271,
     ELSE = 272,
     SWITCH = 273,
     CASE = 274,
     DEFAULT = 275,
     BREAK = 276,
     RETURN = 277,
     ASSIGN = 278,
     STRING = 279,
     BOOL = 280,
     INT = 281,
     MINUS = 282,
     PLUS = 283,
     MULTIPLY = 284,
     DIVIDE = 285,
     MODULO = 286,
     LESS_THAN = 287,
     LESS_EQUAL = 288,
     GREATER_THAN = 289,
     GREATER_EQUAL = 290,
     EQUALS = 291,
     NOT_EQUALS = 292,
     AND = 293,
     OR = 294,
     NOT = 295,
     COMMA = 296,
     QUESTION_MARK = 297,
     COLON = 298,
     WHILE = 299,
     FOR = 300,
     CONTINUE = 301,
     LSBRACE = 302,
     RSBRACE = 303,
     DOUBLE = 304,
     PRIVATE = 305,
     PUBLIC = 306,
     PROTECTED = 307,
     TRUE_VALUE = 308,
     FALSE_VALUE = 309
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 25 "parser.y"

    char* strval;
    int intval;



/* Line 214 of yacc.c  */
#line 195 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 207 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  71
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1614

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNRULES -- Number of states.  */
#define YYNSTATES  251

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    29,    33,    38,    41,    43,    45,
      53,    59,    71,    81,    84,    87,    89,    91,    93,   101,
     113,   123,   129,   137,   147,   158,   160,   163,   168,   175,
     182,   192,   195,   197,   200,   202,   204,   206,   211,   218,
     221,   226,   228,   230,   232,   234,   236,   240,   241,   248,
     255,   257,   258,   267,   277,   285,   294,   296,   298,   300,
     302,   304,   308,   311,   316,   318,   319,   321,   325,   327,
     331,   335,   336,   338,   340,   342,   346,   350,   354,   358,
     363,   368,   373,   378,   382,   386,   390,   394,   398,   402,
     406,   410,   414,   418,   422,   427,   430,   434,   438,   442,
     445,   449,   456,   460,   462,   464,   466
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    57,    -1,    58,    -1,    57,    58,    -1,
      71,    -1,    72,    -1,    76,    -1,    65,    -1,    64,    -1,
      61,    -1,    60,    -1,    59,    -1,    59,    14,    -1,     4,
      10,    11,    -1,     4,    10,    88,    11,    -1,    46,    14,
      -1,    62,    -1,    63,    -1,    44,    10,    58,    11,    12,
      57,    13,    -1,    44,    10,    58,    11,    57,    -1,    45,
      10,    58,    14,    88,    14,    88,    11,    12,    58,    13,
      -1,    45,    10,    58,    14,    88,    14,    88,    11,    58,
      -1,    22,    57,    -1,    21,    14,    -1,    66,    -1,    67,
      -1,    70,    -1,    16,    10,    58,    11,    12,    57,    13,
      -1,    16,    10,    58,    11,    12,    57,    13,    17,    12,
      57,    13,    -1,    16,    10,    58,    11,    12,    57,    13,
      17,    57,    -1,    16,    10,    58,    11,    57,    -1,    16,
      10,    58,    11,    57,    17,    57,    -1,    16,    10,    58,
      11,    57,    17,    12,    57,    13,    -1,    18,    10,    88,
      11,    12,    68,    20,    43,    57,    13,    -1,    69,    -1,
      68,    69,    -1,    19,    88,    43,    57,    -1,    19,    88,
      43,    12,    58,    13,    -1,    88,    42,    88,    43,    88,
      14,    -1,    88,    42,    12,    88,    13,    43,    12,    88,
      13,    -1,    88,    14,    -1,    88,    -1,    73,    14,    -1,
      80,    -1,    77,    -1,    74,    -1,    75,     4,    23,    88,
      -1,    75,    47,    48,     4,    23,    88,    -1,    75,     4,
      -1,    75,    47,    48,     4,    -1,    26,    -1,    24,    -1,
      49,    -1,    25,    -1,     8,    -1,     6,     4,    14,    -1,
      -1,     7,     4,    12,    78,    79,    13,    -1,    81,     7,
       4,    12,    79,    13,    -1,    57,    -1,    -1,    81,    75,
       4,    10,    11,    12,    84,    13,    -1,    81,    75,     4,
      10,    82,    11,    12,    84,    13,    -1,    75,     4,    10,
      11,    12,    84,    13,    -1,    75,     4,    10,    82,    11,
      12,    84,    13,    -1,     9,    -1,    51,    -1,    50,    -1,
      52,    -1,    83,    -1,    82,    41,    83,    -1,    75,     4,
      -1,    24,    47,    48,     4,    -1,    57,    -1,    -1,    88,
      -1,    85,    41,    88,    -1,    88,    -1,    86,    41,    88,
      -1,    88,    28,    57,    -1,    -1,    53,    -1,    54,    -1,
      89,    -1,    88,    28,    88,    -1,    88,    27,    88,    -1,
      88,    29,    88,    -1,    88,    30,    88,    -1,    88,    28,
      23,    88,    -1,    88,    27,    23,    88,    -1,    88,    29,
      23,    88,    -1,    88,    30,    23,    88,    -1,    88,    31,
      88,    -1,    88,    32,    88,    -1,    88,    33,    88,    -1,
      88,    34,    88,    -1,    88,    35,    88,    -1,    88,    36,
      88,    -1,    88,    41,    88,    -1,    88,    23,    88,    -1,
      88,    37,    88,    -1,    88,    38,    88,    -1,    88,    39,
      88,    -1,    88,    47,    88,    48,    -1,    40,    88,    -1,
      10,    88,    11,    -1,    88,    28,    28,    -1,    88,    27,
      27,    -1,    27,    88,    -1,    28,    28,    88,    -1,    88,
      15,    88,    10,    86,    11,    -1,    12,    85,    13,    -1,
       4,    -1,     3,    -1,     5,    -1,    87,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    54,    55,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    68,    69,    71,    73,    74,    77,
      78,    81,    82,    85,    86,    89,    90,    91,    95,    96,
      97,    98,    99,   100,   104,   107,   108,   111,   112,   115,
     116,   117,   118,   120,   121,   122,   124,   125,   135,   149,
     163,   180,   181,   182,   183,   184,   187,   191,   191,   197,
     202,   203,   206,   216,   224,   234,   247,   248,   249,   250,
     251,   252,   253,   260,   268,   269,   272,   273,   275,   276,
     277,   278,   280,   280,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   314,   322,   323,   324
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING_LITERAL", "ID", "NUMBER",
  "USING", "CLASS", "VOID", "STATIC", "LPAREN", "RPAREN", "LBRACE",
  "RBRACE", "SEMICOLON", "DOT", "IF", "ELSE", "SWITCH", "CASE", "DEFAULT",
  "BREAK", "RETURN", "ASSIGN", "STRING", "BOOL", "INT", "MINUS", "PLUS",
  "MULTIPLY", "DIVIDE", "MODULO", "LESS_THAN", "LESS_EQUAL",
  "GREATER_THAN", "GREATER_EQUAL", "EQUALS", "NOT_EQUALS", "AND", "OR",
  "NOT", "COMMA", "QUESTION_MARK", "COLON", "WHILE", "FOR", "CONTINUE",
  "LSBRACE", "RSBRACE", "DOUBLE", "PRIVATE", "PUBLIC", "PROTECTED",
  "TRUE_VALUE", "FALSE_VALUE", "$accept", "program", "statement_list",
  "statement", "function_call", "continue_statement", "loop_statement",
  "while_statement", "for_statement", "exit_statement",
  "conditional_statement", "if_statement", "switch_statement", "case_list",
  "case_item", "ternary_expression", "expression_statement",
  "declaration_statement", "var_declarations", "var_declaration", "type",
  "directive_statement", "class_declarations", "$@1", "class_body",
  "function_declarations", "modifier", "parameter_list", "parameter",
  "func_body", "array_list", "console_list", "bool_values", "expression",
  "primary_expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    59,    59,    60,    61,    61,    62,
      62,    63,    63,    64,    64,    65,    65,    65,    66,    66,
      66,    66,    66,    66,    67,    68,    68,    69,    69,    70,
      70,    71,    71,    72,    72,    72,    73,    73,    73,    74,
      74,    75,    75,    75,    75,    75,    76,    78,    77,    77,
      79,    79,    80,    80,    80,    80,    81,    81,    81,    81,
      82,    82,    83,    83,    84,    84,    85,    85,    86,    86,
      86,    86,    87,    87,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    89,    89,    89,    89
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     4,     2,     1,     1,     7,
       5,    11,     9,     2,     2,     1,     1,     1,     7,    11,
       9,     5,     7,     9,    10,     1,     2,     4,     6,     6,
       9,     2,     1,     2,     1,     1,     1,     4,     6,     2,
       4,     1,     1,     1,     1,     1,     3,     0,     6,     6,
       1,     0,     8,     9,     7,     8,     1,     1,     1,     1,
       1,     3,     2,     4,     1,     0,     1,     3,     1,     3,
       3,     0,     1,     1,     1,     3,     3,     3,     3,     4,
       4,     4,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     2,     3,     3,     3,     2,
       3,     6,     3,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   114,   113,   115,     0,     0,    55,    66,     0,     0,
       0,     0,     0,     0,    52,    54,    51,     0,     0,     0,
       0,     0,     0,    53,    68,    67,    69,    82,    83,     0,
       2,     3,    12,    11,    10,    17,    18,     9,     8,    25,
      26,    27,     5,     6,     0,    46,     0,     7,    45,    44,
       0,   116,    42,    84,     0,     0,     0,   113,     0,     0,
      76,     0,     0,    24,    23,   109,     0,   105,     0,     0,
      16,     1,     4,    13,    43,    49,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
      56,    57,   106,   112,     0,     0,     0,   110,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,   108,    86,
       0,   107,    85,     0,    87,     0,    88,    93,    94,    95,
      96,    97,    98,   101,   102,   103,    99,     0,     0,     0,
      15,    61,    77,     0,     0,     0,     0,     0,    52,     0,
       0,    70,    47,    50,    61,     0,    81,    90,    89,    91,
      92,     0,     0,   104,    60,     0,     0,    31,     0,     0,
      20,     0,    75,     0,    72,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,    58,     0,    42,     0,     0,
       0,    35,     0,     0,    74,     0,     0,    75,    71,    48,
      59,    75,     0,   111,     0,     0,     0,    39,    28,     0,
      32,     0,     0,    36,    19,     0,    64,    73,     0,     0,
      75,    79,    80,    42,     0,     0,     0,     0,     0,     0,
      65,    62,     0,     0,     0,    30,    33,     0,    37,     0,
       0,    22,    63,    40,     0,     0,    34,     0,    29,    38,
      21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    29,   194,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,   190,   191,    41,    42,    43,    44,    45,
      46,    47,    48,   141,   165,    49,    50,   150,   151,   195,
      59,   181,    51,    52,    53
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -121
static const yytype_int16 yypact[] =
{
     600,  -121,    -4,  -121,    -3,    19,  -121,  -121,  1025,  1025,
       5,    41,    40,   600,  -121,  -121,  -121,  1025,    32,  1025,
      91,    92,    90,  -121,  -121,  -121,  -121,  -121,  -121,   105,
     600,  -121,    95,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,    97,  -121,     8,  -121,  -121,  -121,
      10,  -121,  1255,  -121,   249,    98,   104,  -121,  1086,    28,
    1439,   600,  1025,  -121,   600,  1567,  1025,   109,   600,   600,
    -121,  -121,  -121,  -121,  -121,    30,    69,   114,   117,  -121,
    1025,  1025,   132,   964,   967,   996,  1025,  1025,  1025,  1025,
    1025,  1025,  1025,  1025,  1025,  1025,  1028,  1025,  -121,  1115,
    -121,  -121,  -121,  -121,  1025,   112,  1144,  1567,   115,   116,
     172,  1025,   124,   119,   123,  1057,  1439,  1025,     4,  1567,
    1025,  -121,  1567,  1025,   109,  1025,   109,   109,  1558,  1558,
    1558,  1558,  1537,  1537,  1514,  1489,  1439,  1025,  1389,  1280,
    -121,   600,  1439,   652,   122,   704,  1025,   126,    93,   142,
      -9,  -121,  1439,   128,   600,   222,  1025,  1439,  1439,  1439,
    1439,  1200,  1025,  -121,   600,   134,   600,    21,   130,   600,
     600,  1308,   600,   113,  -121,   140,    54,  1025,   144,   141,
       9,    11,  1464,   120,  1336,  -121,   288,  1255,   756,  1025,
     -15,  -121,   340,  1025,   600,   149,   161,   600,  -121,  1439,
    -121,   600,   155,  -121,  1025,   392,   158,  -121,   156,   600,
     600,  1414,   131,  -121,  -121,  1173,  -121,  -121,   162,   163,
     600,  1439,   600,  1364,  1025,   808,   444,   860,   600,   912,
    -121,  -121,   164,  1227,   600,   600,  -121,   600,   600,   496,
     600,  -121,  -121,  -121,   548,   165,  -121,   168,  -121,  -121,
    -121
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -121,  -121,     0,    46,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,    -8,  -121,  -121,  -121,  -121,  -121,
     -47,  -121,  -121,  -121,    33,  -121,  -121,    29,    13,  -120,
    -121,  -121,  -121,     2,  -121
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -86
static const yytype_int16 yytable[] =
{
      30,    55,   175,    78,   189,   212,    54,     1,    57,     3,
      58,    60,    75,    64,     8,    61,     9,    77,     6,    65,
     202,    67,   203,    56,     1,     2,     3,     4,     5,     6,
       7,     8,   176,     9,    14,    15,    16,    10,   188,    11,
     110,   103,    12,    13,    19,    14,    15,    16,    17,    18,
     176,    62,   204,   111,    63,    76,    99,    27,    28,    23,
      66,    19,     6,   149,   106,    20,    21,    22,   107,   104,
      23,    24,    25,    26,    27,    28,    72,   218,   148,    15,
      16,   219,   115,   116,   119,   122,   124,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   138,   139,
     232,    68,    69,    23,    70,    71,   142,   105,   149,    73,
      72,    74,   100,   152,   108,   109,   101,   112,   113,   157,
      65,   114,   158,   143,    80,   159,   145,   160,   153,   149,
     146,   154,    81,   155,   168,     1,    57,     3,   172,   161,
     173,   164,     8,   167,     9,   170,   174,   185,   171,   189,
      95,   177,   197,   201,   164,   117,    97,   200,   182,   118,
      18,   196,   216,   206,   184,   217,   186,   220,   187,   192,
     224,   187,    19,   225,   228,   230,   231,   242,   249,   199,
       6,   250,   213,   147,   180,    27,    28,   178,   210,   198,
       0,   211,     0,     0,     0,   215,   148,    15,    16,     0,
       0,     0,     0,     0,     0,   222,   221,   223,     0,   226,
      72,   187,     0,    72,     0,     0,    72,     0,     0,     0,
       0,    23,     0,     0,     0,   235,   233,   238,   239,     0,
       6,     0,    72,   179,   244,     0,   187,     0,    72,   187,
      72,     0,   187,     0,     0,     0,   148,    15,    16,     0,
       0,     0,     1,    57,     3,     0,    72,     0,     0,     8,
      98,     9,     0,     0,     0,     0,     0,     0,    72,     0,
       0,    23,    72,     0,     0,   241,    17,    18,     0,     0,
       0,    72,     0,   245,    72,    72,   247,     0,     0,    19,
      72,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       9,   208,    27,    28,    10,     0,    11,     0,     0,    12,
      13,     0,    14,    15,    16,    17,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,    20,    21,    22,     0,     0,    23,    24,    25,
      26,    27,    28,     1,     2,     3,     4,     5,     6,     7,
       8,     0,     9,   214,     0,     0,    10,     0,    11,     0,
       0,    12,    13,     0,    14,    15,    16,    17,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,    20,    21,    22,     0,     0,    23,
      24,    25,    26,    27,    28,     1,     2,     3,     4,     5,
       6,     7,     8,     0,     9,     0,     0,     0,    10,     0,
      11,     0,     0,    12,    13,   120,    14,    15,    16,    17,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,    20,    21,    22,     0,
       0,    23,    24,    25,    26,    27,    28,     1,     2,     3,
       4,     5,     6,     7,     8,     0,     9,   236,     0,     0,
      10,     0,    11,     0,     0,    12,    13,     0,    14,    15,
      16,    17,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,     0,     0,    20,    21,
      22,     0,     0,    23,    24,    25,    26,    27,    28,     1,
       2,     3,     4,     5,     6,     7,     8,     0,     9,   246,
       0,     0,    10,     0,    11,     0,     0,    12,    13,     0,
      14,    15,    16,    17,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,     0,
      20,    21,    22,     0,     0,    23,    24,    25,    26,    27,
      28,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       9,   248,     0,     0,    10,     0,    11,     0,     0,    12,
      13,     0,    14,    15,    16,    17,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,    20,    21,    22,     0,     0,    23,    24,    25,
      26,    27,    28,     1,     2,     3,     4,     5,     6,     7,
       8,     0,     9,     0,     0,     0,    10,     0,    11,     0,
       0,    12,    13,     0,    14,    15,    16,    17,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,    20,    21,    22,     0,     0,    23,
      24,    25,    26,    27,    28,     1,     2,     3,     4,     5,
       6,     7,     8,     0,   166,     0,     0,     0,    10,     0,
      11,     0,     0,    12,    13,     0,    14,    15,    16,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,    20,    21,    22,     0,
       0,    23,    24,    25,    26,    27,    28,     1,     2,     3,
       4,     5,     6,     7,     8,     0,   169,     0,     0,     0,
      10,     0,    11,     0,     0,    12,    13,     0,    14,    15,
      16,    17,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,     0,     0,    20,    21,
      22,     0,     0,    23,    24,    25,    26,    27,    28,     1,
       2,     3,     4,     5,     6,     7,     8,     0,   209,     0,
       0,     0,    10,     0,    11,     0,     0,    12,    13,     0,
      14,    15,    16,    17,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,     0,
      20,    21,    22,     0,     0,    23,    24,    25,    26,    27,
      28,     1,     2,     3,     4,     5,     6,     7,     8,     0,
     234,     0,     0,     0,    10,     0,    11,     0,     0,    12,
      13,     0,    14,    15,    16,    17,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,    20,    21,    22,     0,     0,    23,    24,    25,
      26,    27,    28,     1,     2,     3,     4,     5,     6,     7,
       8,     0,   237,     0,     0,     0,    10,     0,    11,     0,
       0,    12,    13,     0,    14,    15,    16,    17,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,    20,    21,    22,     0,     0,    23,
      24,    25,    26,    27,    28,     1,     2,     3,     4,     5,
       6,     7,     8,     0,   240,     0,     0,     0,    10,     0,
      11,     0,     0,    12,    13,     0,    14,    15,    16,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,    20,    21,    22,     0,
       0,    23,    24,    25,    26,    27,    28,     1,    57,     3,
       1,    57,     3,     0,     8,     0,     9,     8,     0,     9,
       0,     0,     0,     0,     0,     0,     0,   120,     0,     0,
     123,    17,   121,     0,    17,    18,     0,     0,     0,     1,
      57,     3,     0,     0,    19,     0,     8,    19,     9,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,   125,
      27,    28,     0,    17,    18,     0,     0,     0,     1,    57,
       3,     1,    57,     3,     0,     8,    19,     9,     8,     0,
     137,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      28,     0,    17,    18,     0,    17,    18,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,   156,    19,     0,
       0,     0,    80,     0,     0,     0,     0,     0,    27,    28,
      81,    27,    28,     0,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,   102,    95,     0,
       0,    80,     0,     0,    97,     0,     0,     0,     0,    81,
       0,     0,     0,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,   140,    95,     0,     0,
      80,     0,     0,    97,     0,     0,     0,     0,    81,     0,
       0,     0,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,   144,    95,     0,     0,    80,
       0,     0,    97,     0,     0,     0,     0,    81,     0,     0,
       0,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,   229,    95,     0,     0,    80,     0,
       0,    97,     0,     0,     0,     0,    81,     0,     0,     0,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,   183,    95,    80,     0,     0,     0,     0,
      97,     0,     0,    81,     0,     0,     0,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
     243,    95,    80,     0,     0,     0,     0,    97,     0,     0,
      81,     0,     0,     0,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,     0,    95,    79,
      80,     0,     0,     0,    97,     0,     0,     0,    81,     0,
       0,     0,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    80,    95,    96,     0,     0,
       0,     0,    97,    81,     0,     0,     0,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
       0,    95,   193,    80,     0,     0,     0,    97,   163,     0,
       0,    81,     0,     0,     0,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,     0,    95,
     207,    80,     0,     0,     0,    97,     0,     0,     0,    81,
       0,     0,     0,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,     0,    95,    79,    80,
       0,     0,     0,    97,     0,     0,     0,    81,     0,     0,
       0,     0,     0,    84,    85,    86,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,    80,    95,    96,     0,     0,     0,
       0,    97,    81,     0,     0,     0,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    80,
      95,     0,   162,     0,     0,     0,    97,    81,     0,     0,
       0,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    80,    95,     0,   227,     0,     0,
       0,    97,    81,     0,     0,     0,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    80,
      95,     0,     0,     0,     0,     0,    97,    81,     0,     0,
       0,    82,   205,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    80,    95,     0,     0,     0,     0,
       0,    97,    81,     0,     0,     0,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,     0,    80,
      95,     0,     0,     0,     0,     0,    97,    81,     0,     0,
       0,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    80,     0,     0,    95,     0,     0,     0,     0,
      81,    97,     0,     0,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    80,     0,     0,     0,     0,    95,     0,
       0,    81,    80,     0,    97,    82,    83,    84,    85,    86,
      81,     0,     0,     0,     0,     0,    84,    85,    86,    95,
       0,     0,     0,     0,     0,    97,     0,     0,    95,     0,
       0,     0,     0,     0,    97
};

static const yytype_int16 yycheck[] =
{
       0,     4,    11,    50,    19,    20,    10,     3,     4,     5,
       8,     9,     4,    13,    10,    10,    12,     7,     8,    17,
      11,    19,    11,     4,     3,     4,     5,     6,     7,     8,
       9,    10,    41,    12,    24,    25,    26,    16,    17,    18,
      10,    13,    21,    22,    40,    24,    25,    26,    27,    28,
      41,    10,    41,    23,    14,    47,    54,    53,    54,    49,
      28,    40,     8,   110,    62,    44,    45,    46,    66,    41,
      49,    50,    51,    52,    53,    54,    30,   197,    24,    25,
      26,   201,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     220,    10,    10,    49,    14,     0,   104,    61,   155,    14,
      64,    14,    14,   111,    68,    69,    12,    48,     4,   117,
     118,     4,   120,    11,    15,   123,    11,   125,     4,   176,
      14,    12,    23,    10,    12,     3,     4,     5,    12,   137,
      47,   141,    10,   143,    12,   145,     4,    13,   146,    19,
      41,    23,    12,    12,   154,    23,    47,    13,   156,    27,
      28,    48,    13,    43,   162,     4,   166,    12,   166,   169,
      12,   169,    40,    17,    43,    13,    13,    13,    13,   177,
       8,    13,   190,    11,   155,    53,    54,   154,   188,   176,
      -1,   189,    -1,    -1,    -1,   193,    24,    25,    26,    -1,
      -1,    -1,    -1,    -1,    -1,   205,   204,   205,    -1,   209,
     164,   209,    -1,   167,    -1,    -1,   170,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,   225,   224,   227,   228,    -1,
       8,    -1,   186,    11,   234,    -1,   234,    -1,   192,   237,
     194,    -1,   240,    -1,    -1,    -1,    24,    25,    26,    -1,
      -1,    -1,     3,     4,     5,    -1,   210,    -1,    -1,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,
      -1,    49,   226,    -1,    -1,   229,    27,    28,    -1,    -1,
      -1,   235,    -1,   237,   238,   239,   240,    -1,    -1,    40,
     244,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    53,    54,    16,    -1,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    16,    -1,    18,    -1,
      -1,    21,    22,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    -1,    16,    -1,
      18,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    45,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      16,    -1,    18,    -1,    -1,    21,    22,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    45,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    16,    -1,    18,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    16,    -1,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    -1,    -1,    16,    -1,    18,    -1,
      -1,    21,    22,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    -1,    16,    -1,
      18,    -1,    -1,    21,    22,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    45,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    -1,    -1,
      16,    -1,    18,    -1,    -1,    21,    22,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    45,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    -1,    16,    -1,    18,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    -1,    -1,    16,    -1,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    -1,    -1,    16,    -1,    18,    -1,
      -1,    21,    22,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    -1,    16,    -1,
      18,    -1,    -1,    21,    22,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    45,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,     3,     4,     5,
       3,     4,     5,    -1,    10,    -1,    12,    10,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      23,    27,    28,    -1,    27,    28,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,    40,    -1,    10,    40,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    23,
      53,    54,    -1,    27,    28,    -1,    -1,    -1,     3,     4,
       5,     3,     4,     5,    -1,    10,    40,    12,    10,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    -1,    27,    28,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    10,    40,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    53,    54,
      23,    53,    54,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    11,    41,    -1,
      -1,    15,    -1,    -1,    47,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    11,    41,    -1,    -1,
      15,    -1,    -1,    47,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    11,    41,    -1,    -1,    15,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    11,    41,    -1,    -1,    15,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    13,    41,    15,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      13,    41,    15,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    14,
      15,    -1,    -1,    -1,    47,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    15,    41,    42,    -1,    -1,
      -1,    -1,    47,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    41,    14,    15,    -1,    -1,    -1,    47,    48,    -1,
      -1,    23,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      14,    15,    -1,    -1,    -1,    47,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    14,    15,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    15,    41,    42,    -1,    -1,    -1,
      -1,    47,    23,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    15,
      41,    -1,    43,    -1,    -1,    -1,    47,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    15,    41,    -1,    43,    -1,    -1,
      -1,    47,    23,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    15,
      41,    -1,    -1,    -1,    -1,    -1,    47,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    15,    41,    -1,    -1,    -1,    -1,
      -1,    47,    23,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    15,
      41,    -1,    -1,    -1,    -1,    -1,    47,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    15,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      23,    47,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    15,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    23,    15,    -1,    47,    27,    28,    29,    30,    31,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,    41,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    12,
      16,    18,    21,    22,    24,    25,    26,    27,    28,    40,
      44,    45,    46,    49,    50,    51,    52,    53,    54,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    70,    71,    72,    73,    74,    75,    76,    77,    80,
      81,    87,    88,    89,    10,     4,     4,     4,    88,    85,
      88,    10,    10,    14,    57,    88,    28,    88,    10,    10,
      14,     0,    58,    14,    14,     4,    47,     7,    75,    14,
      15,    23,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    41,    42,    47,    11,    88,
      14,    12,    11,    13,    41,    58,    88,    88,    58,    58,
      10,    23,    48,     4,     4,    88,    88,    23,    27,    88,
      23,    28,    88,    23,    88,    23,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    12,    88,    88,
      11,    78,    88,    11,    11,    11,    14,    11,    24,    75,
      82,    83,    88,     4,    12,    10,    10,    88,    88,    88,
      88,    88,    43,    48,    57,    79,    12,    57,    12,    12,
      57,    88,    12,    47,     4,    11,    41,    23,    79,    11,
      82,    86,    88,    13,    88,    13,    57,    88,    17,    19,
      68,    69,    57,    14,    57,    84,    48,    12,    83,    88,
      13,    12,    11,    11,    41,    28,    43,    14,    13,    12,
      57,    88,    20,    69,    13,    88,    13,     4,    84,    84,
      12,    88,    57,    88,    12,    17,    57,    43,    43,    11,
      13,    13,    84,    88,    12,    57,    13,    12,    57,    57,
      12,    58,    13,    13,    57,    58,    13,    58,    13,    13,
      13
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 14:

/* Line 1455 of yacc.c  */
#line 68 "parser.y"
    { printf("function_call.\n"); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 69 "parser.y"
    { printf("function_call.\n"); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 71 "parser.y"
    { printf("continue_statement.\n"); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    { printf("While statement block.\n"); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 78 "parser.y"
    { printf("While statement.\n"); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 81 "parser.y"
    { printf("For statement block.\n"); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 82 "parser.y"
    { printf("For statement.\n"); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 85 "parser.y"
    { printf("exit_statement.\n"); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 86 "parser.y"
    { printf("exit_statement.\n"); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    { printf("If statement.\n"); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    { printf("If-else statement.\n"); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 97 "parser.y"
    { printf("If-else statement.\n"); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    { printf("If statement.\n"); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    { printf("If-else statement.\n"); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    { printf("If-else statement.\n"); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 104 "parser.y"
    { printf("Switch statement.\n"); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    { printf("Ternary expression.\n"); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 116 "parser.y"
    { printf("Ternary expression.\n"); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 117 "parser.y"
    { printf("Expression statement.\n"); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 124 "parser.y"
    { printf("Declaration statement.\n"); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 125 "parser.y"
    { printf("Declaration statement with assignment.\n");
                      char *identifier = (yyvsp[(2) - (4)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                      } ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 135 "parser.y"
    { printf("Declaration statement with assignment.\n");
                                     char *identifier = (yyvsp[(4) - (6)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                          
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                      } ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 150 "parser.y"
    {
                      printf("Variable declaration: %s\n", (yyvsp[(2) - (2)].strval));
                      char *identifier = (yyvsp[(2) - (2)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                          
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                      }
                  ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    {
                      printf("Variable declaration: %s\n", (yyvsp[(4) - (4)].strval));
                      char *identifier = (yyvsp[(4) - (4)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                          
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                      }
                  ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 187 "parser.y"
    { printf("Using directive.\n"); 
                      char *identifier = (yyvsp[(2) - (3)].strval);
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 191 "parser.y"
    { ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 192 "parser.y"
    {
               printf("Parsed class declaration: %s\n", (yyvsp[(2) - (6)].strval));
                                     char *identifier = (yyvsp[(2) - (6)].strval);
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
           ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 197 "parser.y"
    {
            printf("Parsed class declaration with modifier: %s\n", (yyvsp[(3) - (6)].strval));
           ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 202 "parser.y"
    { printf("class body");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 207 "parser.y"
    {
                printf("Parsed function declaration with modifier: %s\n", (yyvsp[(3) - (8)].strval));
                           char *identifier = (yyvsp[(3) - (8)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count);
                      if (token == -1) {
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      } 
            ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 216 "parser.y"
    {
                           char *identifier = (yyvsp[(3) - (9)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count);
                      if (token == -1) {
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      } 
            ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 225 "parser.y"
    {
                printf("Parsed function declaration: %s\n", (yyvsp[(2) - (7)].strval));
                           char *identifier = (yyvsp[(2) - (7)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count);
                      if (token == -1) {
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      } 
            ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    {
                printf("Parsed function declaration: %s\n", (yyvsp[(2) - (8)].strval));
                           char *identifier = (yyvsp[(2) - (8)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count);
                      if (token == -1) {
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      } 
            ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 247 "parser.y"
    { printf("Static modifier.\n"); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 248 "parser.y"
    { printf("Public modifier.\n"); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 249 "parser.y"
    { printf("Private modifier.\n"); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 250 "parser.y"
    { printf("Protected modifier.\n"); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 252 "parser.y"
    { printf("Parameter list.\n"); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 253 "parser.y"
    { printf("Parameter.\n");
                           char *identifier = (yyvsp[(2) - (2)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count);
                      if (token == -1) {
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      }  ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    { printf("Parameter.\n"); 
                           char *identifier = (yyvsp[(4) - (4)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count);
                      if (token == -1) {
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      } ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 276 "parser.y"
    { printf("Console list.\n"); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 277 "parser.y"
    { printf("console list.\n"); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 311 "parser.y"
    { printf("Array list.\n"); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 314 "parser.y"
    { printf("Primary expression (identifier): %s\n", (yyvsp[(1) - (1)].strval));
           char *identifier = (yyvsp[(1) - (1)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count);
                      if (token == -1) {
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      } 
 ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 322 "parser.y"
    { printf("Primary expression (string literal): %s\n", (yyvsp[(1) - (1)].strval)); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 323 "parser.y"
    { printf("Primary expression (number): %s\n", (yyvsp[(1) - (1)].strval)); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 324 "parser.y"
    { printf("Primary expression (boolean)\n"); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2334 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 326 "parser.y"


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
