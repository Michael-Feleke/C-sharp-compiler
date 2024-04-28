
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
#include <stdbool.h>
extern int search_symbol_table(char *name, int scope, int scope_id,int func_id);
extern void add_to_symbol_table(char *name, int type,int line_number,int scope,int scope_id);
extern void addValue(int numValue);
extern int get_value(char * token_name);
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



/* Line 189 of yacc.c  */
#line 131 "parser.tab.c"

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
#line 59 "parser.y"

    char* strval;
    int intval;



/* Line 214 of yacc.c  */
#line 228 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 240 "parser.tab.c"

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
#define YYLAST   1238

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNRULES -- Number of states.  */
#define YYNSTATES  277

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
     182,   192,   195,   197,   200,   202,   204,   206,   211,   216,
     221,   228,   235,   242,   249,   254,   259,   266,   269,   274,
     276,   278,   280,   282,   284,   288,   289,   296,   303,   305,
     306,   315,   325,   333,   342,   344,   346,   348,   350,   352,
     356,   359,   364,   366,   367,   369,   373,   375,   379,   383,
     384,   386,   388,   390,   394,   398,   402,   406,   411,   416,
     421,   426,   430,   434,   438,   442,   448,   454,   460,   464,
     468,   472,   478,   482,   488,   492,   496,   500,   505,   508,
     512,   516,   520,   523,   527,   534,   538,   540,   542,   544,
     546,   548,   550,   552
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    57,    -1,    58,    -1,    57,    58,    -1,
      71,    -1,    72,    -1,    76,    -1,    65,    -1,    64,    -1,
      61,    -1,    60,    -1,    59,    -1,    59,    14,    -1,     4,
      10,    11,    -1,     4,    10,    88,    11,    -1,    46,    14,
      -1,    62,    -1,    63,    -1,    44,    10,    88,    11,    12,
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
      80,    -1,    77,    -1,    74,    -1,    75,     4,    23,     3,
      -1,    75,     4,    23,     5,    -1,    75,     4,    23,    90,
      -1,    75,     4,    23,    90,    30,    90,    -1,    75,     4,
      23,    90,    29,    90,    -1,    75,     4,    23,    90,    27,
      90,    -1,    75,     4,    23,    90,    28,    90,    -1,    75,
       4,    23,    88,    -1,    75,     4,    23,    87,    -1,    75,
      47,    48,     4,    23,    88,    -1,    75,     4,    -1,    75,
      47,    48,     4,    -1,    26,    -1,    24,    -1,    49,    -1,
      25,    -1,     8,    -1,     6,     4,    14,    -1,    -1,     7,
       4,    12,    78,    79,    13,    -1,    81,     7,     4,    12,
      79,    13,    -1,    57,    -1,    -1,    81,    75,     4,    10,
      11,    12,    84,    13,    -1,    81,    75,     4,    10,    82,
      11,    12,    84,    13,    -1,    75,     4,    10,    11,    12,
      84,    13,    -1,    75,     4,    10,    82,    11,    12,    84,
      13,    -1,     9,    -1,    51,    -1,    50,    -1,    52,    -1,
      83,    -1,    82,    41,    83,    -1,    75,     4,    -1,    24,
      47,    48,     4,    -1,    57,    -1,    -1,    88,    -1,    85,
      41,    88,    -1,    88,    -1,    86,    41,    88,    -1,    88,
      28,    57,    -1,    -1,    53,    -1,    54,    -1,    90,    -1,
      90,    28,    90,    -1,    90,    27,    90,    -1,    90,    29,
      90,    -1,    90,    30,    90,    -1,    90,    28,    23,    90,
      -1,    90,    27,    23,    90,    -1,    90,    29,    23,    90,
      -1,    90,    30,    23,    90,    -1,    90,    31,    90,    -1,
      90,    32,    90,    -1,    90,    33,    90,    -1,    90,    34,
      90,    -1,    90,    23,    90,    29,    90,    -1,    90,    23,
      90,    30,    90,    -1,    90,    23,    90,    27,    90,    -1,
      90,    35,    90,    -1,    90,    36,    90,    -1,    88,    41,
      88,    -1,    90,    23,    90,    28,    90,    -1,    90,    23,
      90,    -1,    90,    23,    90,    89,    90,    -1,    90,    37,
      90,    -1,    88,    38,    88,    -1,    88,    39,    88,    -1,
      88,    47,    88,    48,    -1,    40,    88,    -1,    10,    88,
      11,    -1,    88,    28,    28,    -1,    88,    27,    27,    -1,
      27,    88,    -1,    28,    28,    88,    -1,    88,    15,    88,
      10,    86,    11,    -1,    12,    85,    13,    -1,    28,    -1,
      27,    -1,    29,    -1,    30,    -1,     4,    -1,     3,    -1,
       5,    -1,    87,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    85,    85,    88,    89,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   102,   103,   105,   107,   108,   111,
     112,   115,   116,   119,   120,   123,   124,   125,   129,   130,
     131,   132,   133,   134,   138,   141,   142,   145,   146,   149,
     150,   151,   152,   155,   156,   157,   159,   160,   178,   194,
     218,   257,   290,   323,   356,   359,   370,   384,   398,   415,
     416,   417,   418,   419,   422,   426,   426,   432,   437,   438,
     441,   455,   467,   481,   501,   502,   503,   504,   505,   506,
     507,   514,   522,   523,   526,   527,   529,   530,   531,   532,
     534,   534,   536,   537,   561,   582,   606,   630,   654,   678,
     702,   726,   750,   774,   798,   822,   854,   893,   925,   949,
     973,   974,  1006,  1032,  1037,  1061,  1062,  1063,  1064,  1065,
    1066,  1067,  1068,  1069,  1070,  1071,  1074,  1074,  1074,  1074,
    1076,  1080,  1087,  1095
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
  "OPERATORS", "primary_expression", 0
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
      70,    71,    71,    72,    72,    72,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    74,    74,    75,
      75,    75,    75,    75,    76,    78,    77,    77,    79,    79,
      80,    80,    80,    80,    81,    81,    81,    81,    82,    82,
      83,    83,    84,    84,    85,    85,    86,    86,    86,    86,
      87,    87,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    89,    89,    89,    89,
      90,    90,    90,    90
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     4,     2,     1,     1,     7,
       5,    11,     9,     2,     2,     1,     1,     1,     7,    11,
       9,     5,     7,     9,    10,     1,     2,     4,     6,     6,
       9,     2,     1,     2,     1,     1,     1,     4,     4,     4,
       6,     6,     6,     6,     4,     4,     6,     2,     4,     1,
       1,     1,     1,     1,     3,     0,     6,     6,     1,     0,
       8,     9,     7,     8,     1,     1,     1,     1,     1,     3,
       2,     4,     1,     0,     1,     3,     1,     3,     3,     0,
       1,     1,     1,     3,     3,     3,     3,     4,     4,     4,
       4,     3,     3,     3,     3,     5,     5,     5,     3,     3,
       3,     5,     3,     5,     3,     3,     3,     4,     2,     3,
       3,     3,     2,     3,     6,     3,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   131,   130,   132,     0,     0,    63,    74,     0,     0,
       0,     0,     0,     0,    60,    62,    59,     0,     0,     0,
       0,     0,     0,    61,    76,    75,    77,    90,    91,     0,
       2,     3,    12,    11,    10,    17,    18,     9,     8,    25,
      26,    27,     5,     6,     0,    46,     0,     7,    45,    44,
       0,   133,    42,    92,     0,     0,     0,   130,     0,     0,
      84,     0,     0,    24,    23,   122,     0,   118,     0,     0,
      16,     1,     4,    13,    43,    57,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,     0,    64,    65,   119,   125,     0,     0,     0,   123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
     120,   115,   116,   110,     0,     0,     0,   112,     0,    94,
       0,    93,     0,    95,     0,    96,   101,   102,   103,   104,
     108,   109,   114,    15,    69,    85,     0,     0,     0,     0,
       0,     0,    60,     0,     0,    78,   131,   132,   133,    54,
      92,    58,    69,     0,    89,     0,     0,   117,     0,     0,
       0,     0,     0,    98,    97,    99,   100,    68,     0,     0,
      31,     0,    20,     0,     0,    83,     0,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
       0,     0,   107,   111,   105,   106,   113,    66,     0,    42,
       0,     0,     0,    35,     0,     0,    82,     0,     0,    83,
      79,    94,    93,    95,    96,    56,    67,    83,     0,   124,
       0,     0,     0,    39,    28,     0,    32,     0,     0,    36,
      19,     0,    72,    81,     0,     0,    83,    87,   120,    88,
       0,     0,     0,     0,     0,     0,    73,    70,     0,     0,
       0,    30,    33,     0,    37,     0,     0,    22,    71,    40,
       0,     0,    34,     0,    29,    38,    21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    29,   216,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,   212,   213,    41,    42,    43,    44,    45,
      46,    47,    48,   144,   178,    49,    50,   154,   155,   217,
      59,   198,    51,    52,   172,    53
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -136
static const yytype_int16 yypact[] =
{
     632,  -136,    -1,  -136,     3,     8,  -136,  -136,    23,    23,
      20,    22,    34,   632,  -136,  -136,  -136,    23,   -14,    23,
      24,    50,    57,  -136,  -136,  -136,  -136,  -136,  -136,    78,
     632,  -136,    66,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,    76,  -136,    -3,  -136,  -136,  -136,
     110,  -136,  1076,  1201,    13,    77,    71,  -136,   998,   -10,
    1160,   632,    23,  -136,   632,    28,    23,    28,   632,   632,
    -136,  -136,  -136,  -136,  -136,    39,    45,    90,    91,  -136,
      23,    75,    70,    23,    23,    23,    69,    23,     1,    96,
     134,   166,   170,     1,     1,     1,     1,     1,     1,     1,
    -136,  1027,  -136,  -136,  -136,  -136,    23,    95,  1032,    28,
     103,   993,    93,   292,   100,   109,   108,   111,   964,  -136,
    -136,   150,   157,  1160,    23,  1135,  1098,   102,     1,  -136,
       1,  -136,     1,  -136,     1,  -136,  -136,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,   632,  1160,   684,   112,   632,   113,
      23,   121,    98,   138,     4,  -136,   129,   133,   137,  1160,
    1186,   140,   632,   311,    23,  1054,    23,  -136,     1,     1,
       1,     1,     1,  -136,  -136,  -136,  -136,   632,   143,   632,
     280,   142,   632,   632,  1113,   632,   116,  -136,   155,    12,
      96,   134,   166,   170,    23,   163,   168,    11,    18,  1164,
     139,  1120,  -136,  -136,  -136,  -136,  -136,  -136,   372,  1076,
     736,    23,    38,  -136,   424,    23,   632,   177,   195,   632,
    -136,   186,   187,   188,   189,  1160,  -136,   632,   193,  -136,
      23,   788,   194,  -136,   190,   632,   632,  1142,   165,  -136,
    -136,  1061,  -136,  -136,   196,   198,   632,  1160,  -136,   632,
      23,   840,   476,   892,   632,   944,  -136,  -136,   199,  1083,
     632,   632,  -136,   632,   632,   528,   632,  -136,  -136,  -136,
     580,   202,  -136,   203,  -136,  -136,  -136
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,  -136,     0,   -22,  -136,  -136,  -136,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,     6,  -136,  -136,  -136,  -136,  -136,
     -48,  -136,  -136,  -136,    59,  -136,  -136,    62,    33,  -135,
    -136,  -136,   114,     2,  -136,   181
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -56
static const yytype_int16 yytable[] =
{
      30,    75,    78,   105,     1,    57,     3,    55,    72,    54,
      58,    60,    56,    64,    66,   188,     1,    57,     3,    65,
       6,    67,   228,     8,   100,     9,     1,    57,     3,   229,
      61,   106,    62,     8,    68,     9,   152,    15,    16,   107,
      17,    18,    72,    80,    76,   189,   110,   112,    63,   113,
      17,    18,   189,    19,    27,    28,   101,   211,   238,   230,
      69,    23,   114,    19,   108,   153,    27,    28,   109,    85,
     111,    70,     1,    57,     3,    87,    27,    28,    71,     8,
      73,   124,   118,   103,   244,   121,   122,   123,   125,   126,
      74,   102,   245,   115,   116,   117,    17,    18,   120,     1,
      57,     3,   119,   156,    57,   157,   146,   150,   145,    19,
       8,   258,     9,   161,   148,   153,   159,    77,     6,   128,
     162,   163,    27,    28,   181,   183,   165,    17,    18,   168,
     169,   170,   171,   185,    14,    15,    16,     1,    57,     3,
      19,   153,   187,   -47,   177,   186,   180,   -48,   182,    27,
      28,   -55,   184,    27,    28,    72,   207,   130,    72,    23,
      72,   211,   177,   194,   218,    80,   199,   219,   201,     1,
      57,     3,    80,     1,    57,     3,   226,    81,    82,   208,
     227,   209,   232,   214,    81,    82,    72,    27,    28,   132,
     242,    85,    72,   134,    72,    83,   225,    87,    85,   243,
     -52,   -53,   -51,   -50,    87,   246,   250,   251,   254,   256,
     236,   257,   268,   237,    72,   275,   276,   241,   239,    27,
      28,   195,   220,    27,    28,   197,     0,    72,   158,     0,
      72,   249,   247,   267,     0,   252,     0,   209,     0,    72,
       0,   271,    72,    72,   273,     0,     0,     0,    72,     0,
       0,   261,   259,   264,   265,     0,     0,     0,     0,     0,
     270,     0,   209,     0,     0,   209,     0,     0,   209,   127,
     129,   131,   133,   135,   136,   137,   138,   139,   140,   141,
     142,     0,     0,     1,     2,     3,     4,     5,     6,     7,
       8,     0,     9,     0,     0,   160,    10,   210,    11,     0,
       6,    12,    13,   151,    14,    15,    16,    17,    18,   173,
       0,   174,     0,   175,     0,   176,   152,    15,    16,     6,
      19,     0,   196,     0,    20,    21,    22,     0,     0,    23,
      24,    25,    26,    27,    28,   152,    15,    16,     0,     0,
       0,    23,     0,     0,     0,     0,     0,     0,     0,   202,
     203,   204,   205,   206,     0,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   221,   222,   223,   224,     1,     2,     3,     4,     5,
       6,     7,     8,     0,     9,   234,     0,     0,    10,     0,
      11,     0,     0,    12,    13,     0,    14,    15,    16,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,    20,    21,    22,     0,
       0,    23,    24,    25,    26,    27,    28,     1,     2,     3,
       4,     5,     6,     7,     8,     0,     9,   240,     0,     0,
      10,     0,    11,     0,     0,    12,    13,     0,    14,    15,
      16,    17,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,     0,     0,    20,    21,
      22,     0,     0,    23,    24,    25,    26,    27,    28,     1,
       2,     3,     4,     5,     6,     7,     8,     0,     9,   262,
       0,     0,    10,     0,    11,     0,     0,    12,    13,     0,
      14,    15,    16,    17,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,     0,
      20,    21,    22,     0,     0,    23,    24,    25,    26,    27,
      28,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       9,   272,     0,     0,    10,     0,    11,     0,     0,    12,
      13,     0,    14,    15,    16,    17,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,    20,    21,    22,     0,     0,    23,    24,    25,
      26,    27,    28,     1,     2,     3,     4,     5,     6,     7,
       8,     0,     9,   274,     0,     0,    10,     0,    11,     0,
       0,    12,    13,     0,    14,    15,    16,    17,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,    20,    21,    22,     0,     0,    23,
      24,    25,    26,    27,    28,     1,     2,     3,     4,     5,
       6,     7,     8,     0,     9,     0,     0,     0,    10,     0,
      11,     0,     0,    12,    13,     0,    14,    15,    16,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,    20,    21,    22,     0,
       0,    23,    24,    25,    26,    27,    28,     1,     2,     3,
       4,     5,     6,     7,     8,     0,   179,     0,     0,     0,
      10,     0,    11,     0,     0,    12,    13,     0,    14,    15,
      16,    17,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,     0,     0,    20,    21,
      22,     0,     0,    23,    24,    25,    26,    27,    28,     1,
       2,     3,     4,     5,     6,     7,     8,     0,   235,     0,
       0,     0,    10,     0,    11,     0,     0,    12,    13,     0,
      14,    15,    16,    17,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,     0,
      20,    21,    22,     0,     0,    23,    24,    25,    26,    27,
      28,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       9,     0,     0,     0,    10,     0,    11,     0,     0,    12,
      13,     0,    14,    15,    16,    17,   248,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,    20,    21,    22,     0,     0,    23,    24,    25,
      26,    27,    28,     1,     2,     3,     4,     5,     6,     7,
       8,     0,   260,     0,     0,     0,    10,     0,    11,     0,
       0,    12,    13,     0,    14,    15,    16,    17,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,    20,    21,    22,     0,     0,    23,
      24,    25,    26,    27,    28,     1,     2,     3,     4,     5,
       6,     7,     8,     0,   263,     0,     0,     0,    10,     0,
      11,     0,     0,    12,    13,     0,    14,    15,    16,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,    20,    21,    22,     0,
       0,    23,    24,    25,    26,    27,    28,     1,     2,     3,
       4,     5,     6,     7,     8,     0,   266,     0,     0,     0,
      10,     0,    11,     0,     0,    12,    13,     0,    14,    15,
      16,    17,    18,     0,   164,     0,     0,     0,     0,    80,
       0,     0,     0,     0,    19,     0,     0,     0,    20,    21,
      22,    81,    82,    23,    24,    25,    26,    27,    28,     0,
       0,     0,    83,    84,   149,    85,     0,    79,    80,   104,
       0,    87,     0,    80,     0,     0,     0,     0,     0,     0,
      81,    82,     0,     0,     0,    81,    82,     0,     0,     0,
       0,    83,    84,     0,    85,    86,    83,    84,   143,    85,
      87,     0,    80,   147,     0,    87,     0,    80,     0,     0,
       0,     0,     0,     0,    81,    82,     0,     0,     0,    81,
      82,     0,     0,     0,     0,    83,    84,   200,    85,    80,
      83,    84,   255,    85,    87,     0,    80,     0,     0,    87,
       0,    81,    82,     0,     0,     0,     0,     0,    81,    82,
      79,    80,    83,    84,     0,    85,   269,     0,    80,    83,
      84,    87,    85,    81,    82,     0,     0,     0,    87,     0,
      81,    82,     0,    80,    83,    84,     0,    85,    86,     0,
       0,    83,    84,    87,    85,    81,    82,   215,    80,     0,
      87,     0,     0,     0,   233,    80,    83,    84,     0,    85,
      81,    82,     0,     0,     0,    87,   167,    81,    82,     0,
      80,    83,    84,     0,    85,     0,     0,    80,    83,    84,
      87,    85,    81,    82,     0,     0,     0,    87,     0,    81,
      82,     0,     0,    83,    84,    80,    85,     0,   166,    80,
      83,    84,    87,    85,     0,   253,     0,    81,    82,    87,
       0,    81,   231,     0,     0,     0,     0,     0,    83,    84,
     -49,    85,    83,    84,     0,    85,     0,    87,     0,    88,
       0,    87,     0,   190,   191,   192,   193,    93,    94,    95,
      96,    97,    98,    99,    88,     0,     0,     0,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99
};

static const yytype_int16 yycheck[] =
{
       0,     4,    50,    13,     3,     4,     5,     4,    30,    10,
       8,     9,     4,    13,    28,    11,     3,     4,     5,    17,
       8,    19,    11,    10,    11,    12,     3,     4,     5,    11,
      10,    41,    10,    10,    10,    12,    24,    25,    26,    61,
      27,    28,    64,    15,    47,    41,    68,    69,    14,    10,
      27,    28,    41,    40,    53,    54,    54,    19,    20,    41,
      10,    49,    23,    40,    62,   113,    53,    54,    66,    41,
      68,    14,     3,     4,     5,    47,    53,    54,     0,    10,
      14,    12,    80,    12,   219,    83,    84,    85,    86,    87,
      14,    14,   227,    48,     4,     4,    27,    28,    28,     3,
       4,     5,    27,     3,     4,     5,    11,    14,   106,    40,
      10,   246,    12,     4,    11,   163,   114,     7,     8,    23,
      12,    10,    53,    54,    12,    12,   124,    27,    28,    27,
      28,    29,    30,    12,    24,    25,    26,     3,     4,     5,
      40,   189,     4,    14,   144,    47,   146,    14,   148,    53,
      54,    14,   150,    53,    54,   177,    13,    23,   180,    49,
     182,    19,   162,    23,    48,    15,   164,    12,   166,     3,
       4,     5,    15,     3,     4,     5,    13,    27,    28,   179,
      12,   179,    43,   183,    27,    28,   208,    53,    54,    23,
      13,    41,   214,    23,   216,    38,   194,    47,    41,     4,
      14,    14,    14,    14,    47,    12,    12,    17,    43,    13,
     210,    13,    13,   211,   236,    13,    13,   215,   212,    53,
      54,   162,   189,    53,    54,   163,    -1,   249,   114,    -1,
     252,   231,   230,   255,    -1,   235,    -1,   235,    -1,   261,
      -1,   263,   264,   265,   266,    -1,    -1,    -1,   270,    -1,
      -1,   251,   250,   253,   254,    -1,    -1,    -1,    -1,    -1,
     260,    -1,   260,    -1,    -1,   263,    -1,    -1,   266,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    -1,   114,    16,    17,    18,    -1,
       8,    21,    22,    11,    24,    25,    26,    27,    28,   128,
      -1,   130,    -1,   132,    -1,   134,    24,    25,    26,     8,
      40,    -1,    11,    -1,    44,    45,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    24,    25,    26,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,
     169,   170,   171,   172,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   190,   191,   192,   193,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    16,    -1,
      18,    -1,    -1,    21,    22,    -1,    24,    25,    26,    27,
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
      10,    -1,    12,    13,    -1,    -1,    16,    -1,    18,    -1,
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
       6,     7,     8,     9,    10,    -1,    12,    -1,    -1,    -1,
      16,    -1,    18,    -1,    -1,    21,    22,    -1,    24,    25,
      26,    27,    28,    -1,    10,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    45,
      46,    27,    28,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    38,    39,    11,    41,    -1,    14,    15,    11,
      -1,    47,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    38,    39,    -1,    41,    42,    38,    39,    11,    41,
      47,    -1,    15,    11,    -1,    47,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    38,    39,    13,    41,    15,
      38,    39,    11,    41,    47,    -1,    15,    -1,    -1,    47,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    27,    28,
      14,    15,    38,    39,    -1,    41,    13,    -1,    15,    38,
      39,    47,    41,    27,    28,    -1,    -1,    -1,    47,    -1,
      27,    28,    -1,    15,    38,    39,    -1,    41,    42,    -1,
      -1,    38,    39,    47,    41,    27,    28,    14,    15,    -1,
      47,    -1,    -1,    -1,    14,    15,    38,    39,    -1,    41,
      27,    28,    -1,    -1,    -1,    47,    48,    27,    28,    -1,
      15,    38,    39,    -1,    41,    -1,    -1,    15,    38,    39,
      47,    41,    27,    28,    -1,    -1,    -1,    47,    -1,    27,
      28,    -1,    -1,    38,    39,    15,    41,    -1,    43,    15,
      38,    39,    47,    41,    -1,    43,    -1,    27,    28,    47,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    38,    39,
      14,    41,    38,    39,    -1,    41,    -1,    47,    -1,    23,
      -1,    47,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    23,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37
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
      81,    87,    88,    90,    10,     4,     4,     4,    88,    85,
      88,    10,    10,    14,    57,    88,    28,    88,    10,    10,
      14,     0,    58,    14,    14,     4,    47,     7,    75,    14,
      15,    27,    28,    38,    39,    41,    42,    47,    23,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      11,    88,    14,    12,    11,    13,    41,    58,    88,    88,
      58,    88,    58,    10,    23,    48,     4,     4,    88,    27,
      28,    88,    88,    88,    12,    88,    88,    90,    23,    90,
      23,    90,    23,    90,    23,    90,    90,    90,    90,    90,
      90,    90,    90,    11,    78,    88,    11,    11,    11,    11,
      14,    11,    24,    75,    82,    83,     3,     5,    87,    88,
      90,     4,    12,    10,    10,    88,    43,    48,    27,    28,
      29,    30,    89,    90,    90,    90,    90,    57,    79,    12,
      57,    12,    57,    12,    88,    12,    47,     4,    11,    41,
      27,    28,    29,    30,    23,    79,    11,    82,    86,    88,
      13,    88,    90,    90,    90,    90,    90,    13,    57,    88,
      17,    19,    68,    69,    57,    14,    57,    84,    48,    12,
      83,    90,    90,    90,    90,    88,    13,    12,    11,    11,
      41,    28,    43,    14,    13,    12,    57,    88,    20,    69,
      13,    88,    13,     4,    84,    84,    12,    88,    28,    57,
      12,    17,    57,    43,    43,    11,    13,    13,    84,    88,
      12,    57,    13,    12,    57,    57,    12,    58,    13,    13,
      57,    58,    13,    58,    13,    13,    13
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
#line 102 "parser.y"
    { printf("function_call.\n"); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    { printf("function_call.\n"); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 105 "parser.y"
    { printf("continue_statement.\n"); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 111 "parser.y"
    { printf("While statement block.\n"); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 112 "parser.y"
    { printf("While statement.\n"); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    { printf("For statement block.\n"); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 116 "parser.y"
    { printf("For statement.\n"); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    { printf("exit_statement.\n"); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 120 "parser.y"
    { printf("exit_statement.\n"); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    { printf("If statement.\n"); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 130 "parser.y"
    { printf("If-else statement.\n"); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 131 "parser.y"
    { printf("If-else statement.\n"); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 132 "parser.y"
    { printf("If statement.\n"); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 133 "parser.y"
    { printf("If-else statement.\n"); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 134 "parser.y"
    { printf("If-else statement.\n"); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 138 "parser.y"
    { printf("Switch statement.\n"); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 149 "parser.y"
    { printf("Ternary expression.\n"); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 150 "parser.y"
    { printf("Ternary expression.\n"); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 151 "parser.y"
    { printf("Expression statement.\n"); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 159 "parser.y"
    { printf("Declaration statement.\n"); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    { printf("Declaration statement with assignment.\n");
                      char *identifier = (yyvsp[(2) - (4)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                      } 
                      
                      if(!check_constant_type_For_String((yyvsp[(2) - (4)].strval))){
                                                
                                                
                                               yyerror("Semantic error: operands are in differnt type can not be assined\n");
                                                 }

                      ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 178 "parser.y"
    { printf("Declaration statement with assignment.\n");
                      char *identifier = (yyvsp[(2) - (4)].strval);
                      int value = atoi((yyvsp[(4) - (4)].strval)); 
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          addValue(value);
                      }
                      if(!check_constant_type_For_Number((yyvsp[(2) - (4)].strval))){
                        yyerror("Semantic error: operands are in different type can not be assigned\n");
                      }
                      ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    { printf("Declaration statement with assignment.\n");
                    char *identifier = (yyvsp[(4) - (4)].strval);
                    int value = get_value(identifier);

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = (yyvsp[(2) - (4)].strval);
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
                    ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 218 "parser.y"
    { printf("Declaration statement with assignment.\n");
                    char *identifier = (yyvsp[(6) - (6)].strval);

                    int val1 = get_value((yyvsp[(4) - (6)].strval));
                    int val2 = get_value((yyvsp[(6) - (6)].strval));
                    int val3;

                    if(val2 == 0) {
                        yyerror("can't divide by zero");
                    } else {
                        val3=val1/val2;
                    }

                    int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identf = (yyvsp[(4) - (6)].strval);
                    int token = search_symbol_table(identf,scope_count,scope_id_count,0);
                     if(token == -1){
                        printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identf, token);
                          yyerror("Identifier wasn't declared");
                    }else{   
                        char *identifier2 = (yyvsp[(2) - (6)].strval);
                        int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         printf("Identifier '%s' added to symbol table with token type %d.\n", identifier2, ID);
                          add_to_symbol_table(identifier2, ID,yylineno,scope_count,scope_id_count); 
                          check_type_mismatch((yyvsp[(4) - (6)].strval),(yyvsp[(6) - (6)].strval));
                          addValue(val3);
                      } else{
                             printf("Error: Identifier '%s' doesn't exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                      }}

                         
                      }
                    ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 257 "parser.y"
    { printf("Declaration statement with assignment.\n");
                    char *identifier = (yyvsp[(6) - (6)].strval);

                    int val1 = get_value((yyvsp[(4) - (6)].strval));
                    int val2 = get_value((yyvsp[(6) - (6)].strval));
                    int val3 = val1 * val2;

                    int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identf = (yyvsp[(4) - (6)].strval);
                    int token = search_symbol_table(identf,scope_count,scope_id_count,0);
                     if(token == -1){
                        printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identf, token);
                          yyerror("Identifier wasn't declared");
                    }else{   
                        char *identifier2 = (yyvsp[(2) - (6)].strval);
                        int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         printf("Identifier '%s' added to symbol table with token type %d.\n", identifier2, ID);
                          add_to_symbol_table(identifier2, ID,yylineno,scope_count,scope_id_count); 
                          check_type_mismatch((yyvsp[(4) - (6)].strval),(yyvsp[(6) - (6)].strval));
                          addValue(val3);
                      } else{
                             printf("Error: Identifier '%s' doesn't exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                      }}

                         
                      }
                    ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 290 "parser.y"
    { printf("Declaration statement with assignment.\n");
                    char *identifier = (yyvsp[(6) - (6)].strval);

                    int val1 = get_value((yyvsp[(4) - (6)].strval));
                    int val2 = get_value((yyvsp[(6) - (6)].strval));
                    int val3 = val1 - val2;

                    int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identf = (yyvsp[(4) - (6)].strval);
                    int token = search_symbol_table(identf,scope_count,scope_id_count,0);
                     if(token == -1){
                        printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identf, token);
                          yyerror("Identifier wasn't declared");
                    }else{   
                        char *identifier2 = (yyvsp[(2) - (6)].strval);
                        int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         printf("Identifier '%s' added to symbol table with token type %d.\n", identifier2, ID);
                          add_to_symbol_table(identifier2, ID,yylineno,scope_count,scope_id_count); 
                          check_type_mismatch((yyvsp[(4) - (6)].strval),(yyvsp[(6) - (6)].strval));
                          addValue(val3);
                      } else{
                             printf("Error: Identifier '%s' doesn't exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                      }}

                         
                      }
                    ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 323 "parser.y"
    { printf("Declaration statement with assignment.\n");
                    char *identifier = (yyvsp[(6) - (6)].strval);

                    int val1 = get_value((yyvsp[(4) - (6)].strval));
                    int val2 = get_value((yyvsp[(6) - (6)].strval));
                    int val3 = val1 + val2;

                    int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identf = (yyvsp[(4) - (6)].strval);
                    int token = search_symbol_table(identf,scope_count,scope_id_count,0);
                     if(token == -1){
                        printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identf, token);
                          yyerror("Identifier wasn't declared");
                    }else{   
                        char *identifier2 = (yyvsp[(2) - (6)].strval);
                        int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         printf("Identifier '%s' added to symbol table with token type %d.\n", identifier2, ID);
                          add_to_symbol_table(identifier2, ID,yylineno,scope_count,scope_id_count); 
                          check_type_mismatch((yyvsp[(4) - (6)].strval),(yyvsp[(6) - (6)].strval));
                          addValue(val3);
                      } else{
                             printf("Error: Identifier '%s' doesn't exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                      }}

                         
                      }
                    ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 356 "parser.y"
    { printf("Declaration statement with assignment.\n");
                    
                      ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 359 "parser.y"
    { printf("Declaration statement with assignment.\n");
                      char *identifier = (yyvsp[(2) - (4)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
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
#line 370 "parser.y"
    { printf("Declaration statement with assignment.\n");
                                     char *identifier = (yyvsp[(4) - (6)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                          
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                      } ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 385 "parser.y"
    {
                      printf("Variable declaration: %s\n", (yyvsp[(2) - (2)].strval));
                      char *identifier = (yyvsp[(2) - (2)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                          
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                      }
                  ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 399 "parser.y"
    {
                      printf("Variable declaration: %s\n", (yyvsp[(4) - (4)].strval));
                      char *identifier = (yyvsp[(4) - (4)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                          
                      } else {
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                      }
                  ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 422 "parser.y"
    { printf("Using directive.\n"); 
                      char *identifier = (yyvsp[(2) - (3)].strval);
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 426 "parser.y"
    { ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 427 "parser.y"
    {
               printf("Parsed class declaration: %s\n", (yyvsp[(2) - (6)].strval));
                                     char *identifier = (yyvsp[(2) - (6)].strval);
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
           ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 432 "parser.y"
    {
            printf("Parsed class declaration with modifier: %s\n", (yyvsp[(3) - (6)].strval));
           ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 437 "parser.y"
    { printf("class body");;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 442 "parser.y"
    {
                printf("Parsed function declaration with modifier: %s\n", (yyvsp[(3) - (8)].strval));
                           char *identifier = (yyvsp[(3) - (8)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      } 
                                  else{
                                                 printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                      }
            ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 455 "parser.y"
    {
                           char *identifier = (yyvsp[(3) - (9)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,1);
                      if (token == -1) {
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      } 
                      else{
                                                 printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                      }
            ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 468 "parser.y"
    {
                printf("Parsed function declaration: %s\n", (yyvsp[(2) - (7)].strval));
                           char *identifier = (yyvsp[(2) - (7)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,1);
                      if (token == -1) {
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      } 
                                  else{
                                                 printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                      }
            ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 482 "parser.y"
    {
                printf("Parsed function declaration: %s\n", (yyvsp[(2) - (8)].strval));
                           char *identifier = (yyvsp[(2) - (8)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,1);
                      if (token != -1) {
             
                                                        printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                      } 
                                  else{
                                add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      }
            ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 501 "parser.y"
    { printf("Static modifier.\n"); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 502 "parser.y"
    { printf("Public modifier.\n"); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 503 "parser.y"
    { printf("Private modifier.\n"); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 504 "parser.y"
    { printf("Protected modifier.\n"); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 506 "parser.y"
    { printf("Parameter list.\n"); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 507 "parser.y"
    { printf("Parameter.\n");
                           char *identifier = (yyvsp[(2) - (2)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      }  ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 514 "parser.y"
    { printf("Parameter.\n"); 
                           char *identifier = (yyvsp[(4) - (4)].strval);
                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      } ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 530 "parser.y"
    { printf("Console list.\n"); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 531 "parser.y"
    { printf("console list.\n"); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 537 "parser.y"
    {
            char *identifier = (yyvsp[(3) - (3)].strval);
            

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = (yyvsp[(1) - (3)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));
              
                      }

                         
                      }
           ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 561 "parser.y"
    { char *identifier = (yyvsp[(3) - (3)].strval);

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = (yyvsp[(1) - (3)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));
              
                      }

                         
                      };}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 582 "parser.y"
    {
            char *identifier = (yyvsp[(3) - (3)].strval);

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = (yyvsp[(1) - (3)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));
              
                      }

                         
                      }

            ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 606 "parser.y"
    {
            char *identifier = (yyvsp[(3) - (3)].strval);

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = (yyvsp[(1) - (3)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));
              
                      }

                         
                      }

            ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 630 "parser.y"
    {
            char *identifier = (yyvsp[(4) - (4)].strval);

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = (yyvsp[(1) - (4)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch((yyvsp[(1) - (4)].strval),(yyvsp[(4) - (4)].strval));
              
                      }

                         
                      }

            ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 654 "parser.y"
    {
             char *identifier = (yyvsp[(4) - (4)].strval);

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = (yyvsp[(1) - (4)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch((yyvsp[(1) - (4)].strval),(yyvsp[(4) - (4)].strval));
              
                      }

                         
                      }

            ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 678 "parser.y"
    {
             char *identifier = (yyvsp[(4) - (4)].strval);

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = (yyvsp[(1) - (4)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch((yyvsp[(1) - (4)].strval),(yyvsp[(4) - (4)].strval));
              
                      }

                         
                      }

            ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 702 "parser.y"
    {
             char *identifier = (yyvsp[(4) - (4)].strval);

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = (yyvsp[(1) - (4)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch((yyvsp[(1) - (4)].strval),(yyvsp[(4) - (4)].strval));
              
                      }

                         
                      }

            ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 726 "parser.y"
    {
            char *identifier = (yyvsp[(3) - (3)].strval);

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = (yyvsp[(1) - (3)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));
              
                      }

                         
                      }

            ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 750 "parser.y"
    {
            char *identifier = (yyvsp[(3) - (3)].strval);

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = (yyvsp[(1) - (3)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));
              
                      }

                         
                      }

            ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 774 "parser.y"
    {
            char *identifier = (yyvsp[(3) - (3)].strval);

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = (yyvsp[(1) - (3)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));
              
                      }

                         
                      }

            ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 798 "parser.y"
    {
            char *identifier = (yyvsp[(3) - (3)].strval);

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = (yyvsp[(1) - (3)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));
              
                      }

                         
                      }

            ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 822 "parser.y"
    {
            char *identifier = (yyvsp[(5) - (5)].strval);

            int val1=get_value((yyvsp[(3) - (5)].strval));
            int val2=get_value((yyvsp[(5) - (5)].strval));
            int val3=val1*val2;
            int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                } else {
                    char *identifier2 = (yyvsp[(3) - (5)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                    if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                        }
                    else{
                        char *identifier2 = (yyvsp[(1) - (5)].strval);
                        int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                        if (token == -1) {
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                      }
                        else{
                           check_type_mismatch((yyvsp[(3) - (5)].strval),(yyvsp[(5) - (5)].strval));
                           addValue(val3);
                      }
                    }                         
                }
            ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 854 "parser.y"
    {
            char *identifier = (yyvsp[(5) - (5)].strval);

            int val1=get_value((yyvsp[(3) - (5)].strval));
            int val2=get_value((yyvsp[(5) - (5)].strval));
            int val3;

            if(val2==0){
                yyerror("Can't divide by zero");
            }
            else{
               val3=val1/val2;
            }
            int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                } else {
                    char *identifier2 = (yyvsp[(3) - (5)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                    if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                        }
                    else{
                        char *identifier2 = (yyvsp[(1) - (5)].strval);
                        int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                        if (token == -1) {
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                      }
                        else{
                           check_type_mismatch((yyvsp[(3) - (5)].strval),(yyvsp[(5) - (5)].strval));
                           addValue(val3);
                      }
                    }                         
                }
            ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 893 "parser.y"
    {
            char *identifier = (yyvsp[(5) - (5)].strval);

            int val1=get_value((yyvsp[(3) - (5)].strval));
            int val2=get_value((yyvsp[(5) - (5)].strval));
            int val3=val1-val2;
            int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                } else {
                    char *identifier2 = (yyvsp[(3) - (5)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                    if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                        }
                    else{
                        char *identifier2 = (yyvsp[(1) - (5)].strval);
                        int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                        if (token == -1) {
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                      }
                        else{
                           check_type_mismatch((yyvsp[(3) - (5)].strval),(yyvsp[(5) - (5)].strval));
                           addValue(val3);
                      }
                    }                         
                }
            ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 925 "parser.y"
    {
            char *identifier = (yyvsp[(3) - (3)].strval);

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = (yyvsp[(1) - (3)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));
              
                      }

                         
                      }

            ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 949 "parser.y"
    {
            char *identifier = (yyvsp[(3) - (3)].strval);

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = (yyvsp[(1) - (3)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));
              
                      }

                         
                      }

            ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 974 "parser.y"
    {
            char *identifier = (yyvsp[(5) - (5)].strval);

            int val1=get_value((yyvsp[(3) - (5)].strval));
            int val2=get_value((yyvsp[(5) - (5)].strval));
            int val3=val1+val2;
            int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                } else {
                    char *identifier2 = (yyvsp[(3) - (5)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                    if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                        }
                    else{
                        char *identifier2 = (yyvsp[(1) - (5)].strval);
                        int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                        if (token == -1) {
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                      }
                        else{
                           check_type_mismatch((yyvsp[(3) - (5)].strval),(yyvsp[(5) - (5)].strval));
                           addValue(val3);
                      }
                    }                         
                }
            ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1006 "parser.y"
    {
            char *identifier = (yyvsp[(3) - (3)].strval);
        

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = (yyvsp[(1) - (3)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{

                           check_type_mismatch((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));
              
                      }

                         
                      }

            ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1032 "parser.y"
    {

            check_type_mismatches((yyvsp[(1) - (5)].strval),(yyvsp[(3) - (5)].strval),(yyvsp[(5) - (5)].strval));

            ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1037 "parser.y"
    {
            char *identifier = (yyvsp[(3) - (3)].strval);

                      int token = search_symbol_table(identifier,scope_count,scope_id_count,0);
                      if (token == -1) {
                          printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier wasn't declared");
                      } else {
                    char *identifier2 = (yyvsp[(1) - (3)].strval);
                     int token = search_symbol_table(identifier2,scope_count,scope_id_count,0);
                      if (token == -1) {
                         
                               printf("Error: Identifier '%s' donot exists in the symbol table with token type %d.\n", identifier2, token);
                          yyerror("Identifier wasn't declared");
                    }
                      else{
                           check_type_mismatch((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));
              
                      }

                         
                      }

            ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1071 "parser.y"
    { printf("Array list.\n"); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1076 "parser.y"
    { printf("Primary expression (identifier): %s\n", (yyvsp[(1) - (1)].strval));
(yyval.strval)=(yyvsp[(1) - (1)].strval);

 ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1080 "parser.y"
    { printf("Primary expression (string literal): %s\n", (yyvsp[(1) - (1)].strval)); 
                           char *identifier = (yyvsp[(1) - (1)].strval);
          
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
(yyval.strval)=(yyvsp[(1) - (1)].strval);
                   ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1087 "parser.y"
    { printf("Primary expression (number): %s\n", (yyvsp[(1) - (1)].strval)); 
                   char *identifier = (yyvsp[(1) - (1)].strval);
          
                          add_to_symbol_table(identifier, ID,yylineno,scope_count,scope_id_count); 
                          printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, ID);
                      
(yyval.strval)=(yyvsp[(1) - (1)].strval);
                   ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1095 "parser.y"
    { printf("Primary expression (boolean)\n"); ;}
    break;



/* Line 1455 of yacc.c  */
#line 3237 "parser.tab.c"
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
#line 1097 "parser.y"


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
