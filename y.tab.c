/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

void yyerror (char *s);
void yyerror_semantic (char * s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <math.h> 
#include <stdbool.h>
#include "SymTable.c"  
extern int yylineno;   

#define LN10 2.3025850929940456840179914546844
FILE* errorFile;
FILE * fp;
int label=0;
char*arr[100000];
int idx = 0;
char*termType;
char*switchVariableType;
double ln(double x);
void jmpNewLabel(int notCond);
double log10( double x );
char * toArray(int number);
void printQuad();
void printQuadComp(char* s1, char* s2, char* s3);
void printQuadExpress(char* s1, char* s2, char* s3, int i);
void try(char*operation,char* arg1, char*arg2);
int level = 0;
void new_block();
int declare_symbol(char*, char*, int, char*, int);
char* get_symbol(char* id);
void unused_symbols();
char* retType = " ";
char* gType = " ";
char* func_id=" ";
int For_loop = 0;
int  nops =0;
int aftEnd = 0;
char* temporary[5];
char* syntax_error_handler(int);

#line 111 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    FLOAT = 259,
    CHAR = 260,
    VOID = 261,
    IF = 262,
    ELSE = 263,
    FOR = 264,
    STRING = 265,
    BOOL = 266,
    CONST = 267,
    FALSE = 268,
    TRUE = 269,
    SEMICOLON = 270,
    COMMA = 271,
    COLON = 272,
    OPENBRACKET = 273,
    CLOSEBRACKET = 274,
    RET = 275,
    BREAK = 276,
    ASSIGN = 277,
    AndAnd = 278,
    OrOr = 279,
    While = 280,
    Do_While = 281,
    logical_OP = 282,
    NOT = 283,
    SWITCH = 284,
    CASE = 285,
    DEFAULT = 286,
    integer_value = 287,
    Float_value = 288,
    Char_value = 289,
    String_value = 290,
    identifier = 291,
    GE = 292,
    LE = 293,
    G = 294,
    L = 295,
    EE = 296,
    NE = 297,
    INC = 298,
    DEC = 299,
    SHL = 300,
    SHR = 301,
    EQ = 302,
    U_MINUM = 303,
    PRE_INC = 304,
    PRE_DEC = 305,
    SUF_INC = 306,
    SUF_DEC = 307
  };
#endif
/* Tokens.  */
#define INT 258
#define FLOAT 259
#define CHAR 260
#define VOID 261
#define IF 262
#define ELSE 263
#define FOR 264
#define STRING 265
#define BOOL 266
#define CONST 267
#define FALSE 268
#define TRUE 269
#define SEMICOLON 270
#define COMMA 271
#define COLON 272
#define OPENBRACKET 273
#define CLOSEBRACKET 274
#define RET 275
#define BREAK 276
#define ASSIGN 277
#define AndAnd 278
#define OrOr 279
#define While 280
#define Do_While 281
#define logical_OP 282
#define NOT 283
#define SWITCH 284
#define CASE 285
#define DEFAULT 286
#define integer_value 287
#define Float_value 288
#define Char_value 289
#define String_value 290
#define identifier 291
#define GE 292
#define LE 293
#define G 294
#define L 295
#define EE 296
#define NE 297
#define INC 298
#define DEC 299
#define SHL 300
#define SHR 301
#define EQ 302
#define U_MINUM 303
#define PRE_INC 304
#define PRE_DEC 305
#define SUF_INC 306
#define SUF_DEC 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 48 "parser.y" /* yacc.c:355  */
int int_num; char id; float float_num; char* string;

#line 258 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 289 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  78
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1065

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  166
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  298

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,     2,     2,    51,    52,     2,
       2,     2,    49,    48,     2,    47,     2,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    54,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,    53,    63,     2,     2,     2,     2,
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
      45,    46,    55,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   117,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   137,   138,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   160,   161,   167,   180,   181,
     182,   183,   184,   185,   188,   189,   190,   191,   192,   193,
     195,   195,   200,   202,   202,   207,   209,   210,   213,   213,
     232,   242,   245,   251,   256,   259,   283,   284,   287,   298,
     309,   315,   317,   323,   337,   353,   354,   354,   354,   354,
     354,   354,   356,   356,   357,   357,   358,   358,   358,   358,
     358,   358,   359,   359,   359,   359,   359,   360,   360,   360,
     360,   360,   361,   361,   362,   364,   364,   366,   366,   367,
     367,   368,   368,   368,   371,   371,   371,   372,   374,   374,
     378,   378,   378,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   396,   400,   404,   405,
     406,   407,   410,   411,   421,   435,   448,   459,   469,   480,
     496,   496,   502,   502,   502,   506,   507
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "CHAR", "VOID", "IF",
  "ELSE", "FOR", "STRING", "BOOL", "CONST", "FALSE", "TRUE", "SEMICOLON",
  "COMMA", "COLON", "OPENBRACKET", "CLOSEBRACKET", "RET", "BREAK",
  "ASSIGN", "AndAnd", "OrOr", "While", "Do_While", "logical_OP", "NOT",
  "SWITCH", "CASE", "DEFAULT", "integer_value", "Float_value",
  "Char_value", "String_value", "identifier", "GE", "LE", "G", "L", "EE",
  "NE", "INC", "DEC", "SHL", "SHR", "'-'", "'+'", "'*'", "'/'", "'%'",
  "'&'", "'|'", "'^'", "EQ", "'!'", "U_MINUM", "PRE_INC", "PRE_DEC",
  "SUF_INC", "SUF_DEC", "'{'", "'}'", "$accept", "line", "$@1", "$@2",
  "block", "start_block", "end_block", "term", "type", "argList", "$@3",
  "cont", "$@4", "stmtlist", "func_p1", "$@5", "func_p2",
  "many_identifiers", "func_call_p1", "func_call_p2", "constant",
  "variable", "declaration", "typeConversion", "definition", "logical_exp",
  "comparison_OP", "if", "$@6", "ifExpr", "cond", "bracketBeforeAndAfter",
  "notBefore", "elseIf", "$@7", "else", "IfFiller", "switch", "$@8",
  "cases", "case", "$@9", "$@10", "while", "$@11", "$@12", "whileCont1",
  "dowhile", "$@13", "expression", "expression1", "expression2",
  "expression3", "single_val", "for", "$@14", "$@15", "for_initi_stat", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    45,    43,    42,
      47,    37,    38,   124,    94,   302,    33,   303,   304,   305,
     306,   307,   123,   125
};
# endif

#define YYPACT_NINF -130

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-130)))

#define YYTABLE_NINF -54

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     684,  -130,  -130,  -130,  -130,     1,     5,    20,  -130,  -130,
     260,     6,    35,   716,  -130,   -48,    39,    43,    46,    48,
      57,   -11,   448,   448,   743,   716,  -130,   321,  -130,   442,
      60,    18,   -48,  -130,   987,  -130,  -130,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,  -130,  -130,   945,  -130,  -130,
     -27,  -130,  -130,   996,    44,  -130,   684,    42,   -18,  -130,
    -130,  -130,  -130,  -130,  -130,  -130,   716,   889,    64,   684,
      -8,  -130,   770,    62,    68,    69,    47,    47,  -130,  -130,
     442,   -48,  -130,   987,  -130,  -130,  -130,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,  -130,   945,  -130,  -130,   503,
    -130,    29,    -9,   684,    74,    12,    17,   716,   716,  -130,
    -130,  -130,  -130,  -130,  -130,   716,   716,   716,   716,   716,
     716,   716,   716,   716,   716,  -130,   716,  -130,    88,  -130,
    -130,  1020,    86,  -130,  -130,  -130,  -130,   485,  -130,  -130,
      89,    16,  -130,  -130,   996,    90,    75,  -130,  -130,   996,
      93,  -130,   996,   684,   503,  -130,    99,   987,  -130,   792,
    -130,  -130,  -130,  -130,  -130,  -130,   100,  -130,   260,   770,
     381,  -130,   101,   448,   945,   945,   744,   744,   320,   320,
      47,    47,    47,   945,   945,   945,   945,  -130,   105,   103,
     107,   108,  1029,   346,  -130,  -130,  -130,   996,   110,    96,
     115,   716,  -130,   684,    95,   116,  -130,   121,   119,   118,
    -130,   812,   716,  -130,  -130,  -130,  -130,   398,  -130,  -130,
    -130,   453,   120,   140,   145,  -130,  -130,   -48,  -130,  -130,
    -130,   832,   150,   161,   -48,  -130,   164,  -130,  -130,   852,
     176,  -130,   406,  -130,  -130,  -130,  -130,   -48,   716,  -130,
     -48,   996,    13,   260,  -130,  -130,   151,  -130,   196,  -130,
     925,   684,  -130,  -130,  -130,   199,   151,    13,   190,  -130,
    -130,  -130,  -130,   503,   208,   285,   684,  -130,  -130,   164,
     -48,  -130,   217,  -130,   564,  -130,   684,  -130,   216,   219,
    -130,   503,   684,  -130,  -130,   624,   221,  -130
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    55,    56,    54,    59,     0,     0,     0,    57,    58,
       0,   157,   158,     0,   124,     0,     0,   153,   155,   154,
     156,   159,     0,     0,     0,     0,    46,     0,     9,     7,
       0,     0,    35,    37,    39,    41,    27,    29,    31,    43,
      33,    11,    13,    12,    17,     3,     5,    21,   130,   131,
     132,    25,    19,     0,     0,   114,     2,     0,     0,   157,
     158,   153,   155,   154,   156,   159,     0,     0,     0,     2,
       0,    75,     0,     0,     0,     0,   151,   150,     1,    10,
       8,    36,    38,    40,    42,    28,    30,    32,    44,    34,
      14,    16,    15,    18,     4,     6,    23,    26,    20,     0,
     160,     0,     0,     2,     0,     0,    72,     0,     0,    86,
      87,    88,    89,    90,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,     0,   147,     0,    52,
      53,     0,     0,    48,    49,    50,    51,    99,    98,    97,
       0,    94,   100,   101,     0,     0,     0,   165,   166,     0,
       0,   152,     0,    66,     0,   117,   159,     0,    84,     0,
     146,   148,   161,    24,    47,    45,     0,    81,    62,     0,
       0,    77,     0,    74,   143,   144,   138,   139,   134,   133,
     135,   136,   137,   140,   141,   142,   145,   149,    99,    98,
      97,     0,     0,     0,    92,   115,   116,     0,     0,     0,
       0,     0,   125,    67,     0,     0,    83,     0,     0,     0,
      80,     0,     0,    71,    76,    73,   105,     0,   104,   103,
     106,    99,    98,    97,     0,    96,    85,     0,    95,   112,
     162,     0,     0,     0,     0,    82,    65,    68,    79,     0,
      96,   110,     0,   109,   108,   111,    93,     0,     0,    78,
       0,     0,     0,     0,    60,    69,     0,   102,    96,   113,
       0,     2,   126,   128,   121,     0,     0,     0,     0,    61,
      70,   107,   163,     0,     0,     0,     2,   118,   120,    65,
       0,   127,     0,   122,     0,    63,     2,   129,     0,     0,
      64,     0,     2,   119,   164,     0,     0,   123
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,     0,  -130,  -130,    -4,    -5,    50,   -21,    -6,  -130,
    -130,   -42,  -130,   -83,    -1,  -130,     3,    65,   -12,    -3,
       8,    -2,    10,    14,     7,  -126,  -129,    15,  -130,    97,
    -130,  -130,  -130,    22,  -130,    41,  -130,    54,  -130,   -28,
    -130,  -130,  -130,    59,  -130,  -130,  -130,    78,  -130,    66,
    -130,  -130,    51,    98,   106,  -130,  -130,  -130
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   153,   125,   163,    28,    29,   165,    30,    31,   209,
     269,   254,   290,   154,    32,   255,    33,   105,    34,    35,
      36,    37,    38,    39,    40,   139,   126,    41,   227,   140,
     141,   142,   143,    42,   247,    43,   197,    44,   205,   266,
     267,   275,   288,    45,    68,   232,   262,    46,   274,    47,
      48,    49,    50,    51,    52,   248,   280,   149
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,    56,    55,    75,    58,   190,   167,    71,   193,   168,
      69,    72,    54,   169,    26,    83,   127,   128,   150,    53,
     170,   -52,    80,    79,    84,    86,    81,   103,   155,    99,
      82,   172,   138,   173,    89,    85,   101,    87,    57,   195,
     196,    88,    90,   264,   265,     1,     2,     3,     4,    91,
     -53,   146,     8,     9,   102,   147,    99,    70,   -48,   217,
     157,   -49,   144,   -50,   148,   166,   223,    26,    92,   158,
     107,   108,   -51,    73,    74,   100,   103,   160,   145,    67,
      99,    93,   152,   161,   162,   106,    94,    83,   113,   171,
      76,    77,   242,    96,    80,    79,    84,    86,    81,   122,
     123,   124,    82,   187,   192,    95,    89,    85,   194,    87,
     189,   199,    72,    88,    90,   201,   214,    71,   169,   207,
     233,    91,   218,   138,   216,    97,   219,   220,   138,   229,
     230,   138,    76,    98,   106,   234,   235,   237,   159,   243,
      92,    83,   109,   110,   111,   112,   113,   114,    80,    79,
      84,    86,    81,    93,   203,   236,    82,   157,    94,   244,
      89,    85,   208,    87,   245,    96,   210,    88,    90,   250,
     203,   222,   226,   174,   175,    91,   138,    95,   273,   251,
     253,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    83,   186,   284,    92,   257,   226,    97,    80,    79,
      84,    86,    81,   291,   204,    98,    82,    93,   106,   295,
      89,    85,    94,    87,   164,   271,   276,    88,    90,    96,
     213,   226,    56,   246,   106,    91,   279,   282,   191,   252,
     138,    95,   287,   292,   293,   211,   297,   285,   215,   278,
       0,   198,    56,   259,    92,   261,   200,   268,     0,   202,
       0,    97,     0,     0,   283,     0,     0,    93,     0,    98,
       0,     0,    94,     1,     2,     3,     4,   231,     0,    96,
       8,     9,     0,   203,     0,   286,     0,     0,   239,     0,
       0,    95,     0,     0,   203,     0,     0,     0,     0,   224,
       0,   203,     0,     0,   228,   203,     0,     0,   129,   130,
       0,    97,     0,     0,     0,     0,   270,     0,     0,    98,
       0,     0,     0,     0,   260,     0,   277,   133,   134,   135,
     136,    78,     0,   281,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,    13,
       0,   294,     0,   107,   108,     0,    14,    15,   263,     0,
      16,     0,     0,    17,    18,    19,    20,    21,     0,   129,
     130,   113,     0,     0,    22,    23,     0,     0,    24,   119,
     120,   121,   122,   123,   124,     0,     0,    25,   133,   134,
     135,   136,   225,    26,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,    13,
       0,   212,     0,     0,     0,     0,    14,    15,     0,     0,
      16,   129,   130,    17,    18,    19,    20,    21,     0,   129,
     130,     0,     0,     0,    22,    23,     0,     0,    24,     0,
     133,   134,   135,   136,   240,     0,     0,    25,   133,   134,
     135,   136,   258,    26,   164,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,     0,     0,     0,
      13,    59,    60,     0,     0,     0,    13,    14,    15,     0,
       0,    16,   241,     0,    17,    18,    19,    20,    21,     0,
      61,    62,    63,    64,    65,    22,    23,     0,     0,    24,
     109,   110,   111,   112,   113,   114,     0,     0,    25,     0,
       0,     0,     0,     0,    26,    -2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,   109,   110,   111,   112,   113,   114,    14,    15,
       0,     0,    16,     0,     0,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,     0,    22,    23,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,    25,
       0,     0,     0,     0,     0,    26,   164,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    13,     0,     0,   289,     0,     0,     0,    14,
      15,     0,     0,    16,     0,     0,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,    22,    23,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,     0,     0,     0,    26,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    13,     0,     0,   296,     0,     0,     0,    14,
      15,     0,     0,    16,     0,     0,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,    22,    23,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,     0,     0,     0,    26,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    13,     0,     0,     0,     0,     0,     0,    14,
      15,     0,     0,    16,     0,     0,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,    22,    23,    59,
      60,    24,     0,     0,    13,     0,     0,     0,     0,     0,
      25,     0,     0,     0,     0,     0,    26,     0,    61,    62,
      63,    64,    65,     0,     0,     0,    11,    12,     0,    22,
      23,    13,     0,    66,     0,     0,     0,   107,   108,     0,
       0,     0,    25,     0,     0,    17,    18,    19,    20,    65,
       0,     0,     0,    59,    60,   113,    22,    23,    13,     0,
      66,   117,   118,   119,   120,   121,   122,   123,   124,    25,
       0,     0,    61,    62,    63,    64,   156,   206,     0,     0,
       0,     0,     0,    22,    23,   107,   108,    66,     0,     0,
       0,     0,     0,     0,     0,     0,    25,   238,     0,   109,
     110,   111,   112,   113,   114,   107,   108,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   249,     0,   109,
     110,   111,   112,   113,   114,   107,   108,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   256,     0,   109,
     110,   111,   112,   113,   114,   107,   108,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,     0,     0,   109,
     110,   111,   112,   113,   114,     0,     0,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   151,     0,     0,
       0,     0,   107,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,   110,   111,   112,
     113,   114,     0,     0,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   272,     0,     0,     0,   107,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   109,   110,   111,   112,   113,   114,   107,   108,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
       0,     0,   109,   110,   111,   112,   113,   114,     0,     0,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      59,    60,     0,     0,     0,    13,   104,     0,     0,   129,
     130,     0,     0,     0,   131,     0,     0,     0,     0,    61,
      62,    63,    64,    65,   132,     0,     0,     0,   133,   134,
     135,   136,   137,   129,   130,     0,     0,     0,   131,     0,
       0,     0,   129,   130,     0,     0,     0,   131,   132,     0,
       0,     0,   133,   134,   135,   136,   188,   132,     0,     0,
       0,   133,   134,   135,   136,   221
};

static const yytype_int16 yycheck[] =
{
       0,     6,     6,    24,    10,   131,    15,    18,   137,    18,
      15,    22,     7,    22,    62,    27,    43,    44,    36,    18,
     103,    15,    27,    27,    27,    27,    27,    32,    36,    29,
      27,    19,    53,    16,    27,    27,    18,    27,    18,    23,
      24,    27,    27,    30,    31,     3,     4,     5,     6,    27,
      15,    57,    10,    11,    36,    57,    56,    18,    15,   188,
      72,    15,    18,    15,    57,    36,   192,    62,    27,    72,
      23,    24,    15,    22,    23,    15,    81,    15,    36,    13,
      80,    27,    18,    15,    15,    34,    27,    99,    41,    15,
      24,    25,   221,    27,    99,    99,    99,    99,    99,    52,
      53,    54,    99,    15,    18,    27,    99,    99,    19,    99,
     131,    36,    22,    99,    99,    22,    15,    18,    22,    19,
      25,    99,    19,   144,    19,    27,    19,    19,   149,    19,
      15,   152,    66,    27,    83,    19,    15,    19,    72,    19,
      99,   153,    37,    38,    39,    40,    41,    42,   153,   153,
     153,   153,   153,    99,   154,    36,   153,   169,    99,    19,
     153,   153,   168,   153,    19,    99,   169,   153,   153,    19,
     170,   192,   193,   107,   108,   153,   197,    99,   261,    18,
      16,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   203,   126,   276,   153,    19,   217,    99,   203,   203,
     203,   203,   203,   286,   154,    99,   203,   153,   157,   292,
     203,   203,   153,   203,    63,    19,    17,   203,   203,   153,
     170,   242,   227,   227,   173,   203,    36,    19,   131,   234,
     251,   153,    15,    17,    15,   169,    15,   279,   173,   267,
      -1,   144,   247,   247,   203,   250,   149,   253,    -1,   152,
      -1,   153,    -1,    -1,   275,    -1,    -1,   203,    -1,   153,
      -1,    -1,   203,     3,     4,     5,     6,   201,    -1,   203,
      10,    11,    -1,   273,    -1,   280,    -1,    -1,   212,    -1,
      -1,   203,    -1,    -1,   284,    -1,    -1,    -1,    -1,   192,
      -1,   291,    -1,    -1,   197,   295,    -1,    -1,    13,    14,
      -1,   203,    -1,    -1,    -1,    -1,   256,    -1,    -1,   203,
      -1,    -1,    -1,    -1,   248,    -1,   266,    32,    33,    34,
      35,     0,    -1,   273,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    18,
      -1,   291,    -1,    23,    24,    -1,    25,    26,   251,    -1,
      29,    -1,    -1,    32,    33,    34,    35,    36,    -1,    13,
      14,    41,    -1,    -1,    43,    44,    -1,    -1,    47,    49,
      50,    51,    52,    53,    54,    -1,    -1,    56,    32,    33,
      34,    35,    36,    62,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    18,
      -1,    20,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      29,    13,    14,    32,    33,    34,    35,    36,    -1,    13,
      14,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      32,    33,    34,    35,    36,    -1,    -1,    56,    32,    33,
      34,    35,    36,    62,    63,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      18,    13,    14,    -1,    -1,    -1,    18,    25,    26,    -1,
      -1,    29,    19,    -1,    32,    33,    34,    35,    36,    -1,
      32,    33,    34,    35,    36,    43,    44,    -1,    -1,    47,
      37,    38,    39,    40,    41,    42,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    62,    63,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    18,    37,    38,    39,    40,    41,    42,    25,    26,
      -1,    -1,    29,    -1,    -1,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    62,    63,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    18,    -1,    -1,    21,    -1,    -1,    -1,    25,
      26,    -1,    -1,    29,    -1,    -1,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    62,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    18,    -1,    -1,    21,    -1,    -1,    -1,    25,
      26,    -1,    -1,    29,    -1,    -1,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    62,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    29,    -1,    -1,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    13,
      14,    47,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    62,    -1,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    13,    14,    -1,    43,
      44,    18,    -1,    47,    -1,    -1,    -1,    23,    24,    -1,
      -1,    -1,    56,    -1,    -1,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    13,    14,    41,    43,    44,    18,    -1,
      47,    47,    48,    49,    50,    51,    52,    53,    54,    56,
      -1,    -1,    32,    33,    34,    35,    36,    15,    -1,    -1,
      -1,    -1,    -1,    43,    44,    23,    24,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    15,    -1,    37,
      38,    39,    40,    41,    42,    23,    24,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    15,    -1,    37,
      38,    39,    40,    41,    42,    23,    24,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    15,    -1,    37,
      38,    39,    40,    41,    42,    23,    24,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    37,
      38,    39,    40,    41,    42,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    18,    -1,    -1,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    42,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    19,    -1,    -1,    -1,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    23,    24,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    37,    38,    39,    40,    41,    42,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      13,    14,    -1,    -1,    -1,    18,    19,    -1,    -1,    13,
      14,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    28,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    13,    14,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    13,    14,    -1,    -1,    -1,    18,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    28,    -1,    -1,
      -1,    32,    33,    34,    35,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    18,    25,    26,    29,    32,    33,    34,
      35,    36,    43,    44,    47,    56,    62,    65,    68,    69,
      71,    72,    78,    80,    82,    83,    84,    85,    86,    87,
      88,    91,    97,    99,   101,   107,   111,   113,   114,   115,
     116,   117,   118,    18,     7,    68,    69,    18,    72,    13,
      14,    32,    33,    34,    35,    36,    47,   113,   108,    69,
      18,    18,    22,   116,   116,    71,   113,   113,     0,    68,
      69,    78,    80,    82,    83,    84,    85,    86,    87,    88,
      91,    97,    99,   101,   107,   111,   113,   117,   118,    65,
      15,    18,    36,    69,    19,    81,   116,    23,    24,    37,
      38,    39,    40,    41,    42,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    66,    90,    43,    44,    13,
      14,    18,    28,    32,    33,    34,    35,    36,    71,    89,
      93,    94,    95,    96,    18,    36,    72,    85,    88,   121,
      36,    18,    18,    65,    77,    36,    36,    82,    83,   113,
      15,    15,    15,    67,    63,    70,    36,    15,    18,    22,
      77,    15,    19,    16,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,    15,    36,    71,
      89,    93,    18,    90,    19,    23,    24,   100,    93,    36,
      93,    22,    93,    65,    70,   102,    15,    19,    72,    73,
      83,   113,    20,    70,    15,    81,    19,    90,    19,    19,
      19,    36,    71,    89,    93,    36,    71,    92,    93,    19,
      15,   113,   109,    25,    19,    15,    36,    19,    15,   113,
      36,    19,    90,    19,    19,    19,    68,    98,   119,    15,
      19,    18,    69,    16,    75,    79,    15,    19,    36,    68,
     113,    69,   110,    93,    30,    31,   103,   104,    72,    74,
      70,    19,    19,    77,   112,   105,    17,    70,   103,    36,
     120,    70,    19,    71,    77,    75,    69,    15,   106,    21,
      76,    77,    17,    15,    70,    77,    21,    15
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    66,    65,    67,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    68,    69,    70,    71,    71,
      71,    71,    71,    71,    72,    72,    72,    72,    72,    72,
      74,    73,    73,    76,    75,    75,    77,    77,    79,    78,
      80,    80,    81,    81,    81,    82,    83,    83,    84,    85,
      85,    86,    87,    88,    88,    89,    90,    90,    90,    90,
      90,    90,    92,    91,    93,    93,    94,    94,    94,    94,
      94,    94,    95,    95,    95,    95,    95,    96,    96,    96,
      96,    96,    98,    97,    99,   100,   100,   102,   101,   103,
     103,   105,   106,   104,   108,   109,   107,   110,   112,   111,
     113,   113,   113,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   115,   115,   115,   115,
     115,   115,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   119,   120,   118,   121,   121
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     1,     1,     2,     2,     2,     1,     2,     1,
       2,     0,     2,     0,     3,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     0,     0,     5,     0,     1,     2,     0,     6,
       7,     4,     1,     3,     0,     2,     4,     3,     6,     5,
       4,     3,     5,     4,     3,     3,     1,     1,     1,     1,
       1,     1,     0,     6,     1,     3,     3,     1,     1,     1,
       1,     1,     5,     3,     3,     3,     3,     6,     4,     4,
       4,     4,     0,     7,     2,     1,     1,     0,     8,     5,
       2,     0,     0,     8,     0,     0,     7,     3,     0,    10,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       2,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     0,     0,    12,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 118 "parser.y" /* yacc.c:1646  */
    {;}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 119 "parser.y" /* yacc.c:1646  */
    {;}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 120 "parser.y" /* yacc.c:1646  */
    {;}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 121 "parser.y" /* yacc.c:1646  */
    {;}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 122 "parser.y" /* yacc.c:1646  */
    {;}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 123 "parser.y" /* yacc.c:1646  */
    {;}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 124 "parser.y" /* yacc.c:1646  */
    {;}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 125 "parser.y" /* yacc.c:1646  */
    {;}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 127 "parser.y" /* yacc.c:1646  */
    {;}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 128 "parser.y" /* yacc.c:1646  */
    {;}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 129 "parser.y" /* yacc.c:1646  */
    {;}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 130 "parser.y" /* yacc.c:1646  */
    {;}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 131 "parser.y" /* yacc.c:1646  */
    {;}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 132 "parser.y" /* yacc.c:1646  */
    {;}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 133 "parser.y" /* yacc.c:1646  */
    {;}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 134 "parser.y" /* yacc.c:1646  */
    {;}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 135 "parser.y" /* yacc.c:1646  */
    {;}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 136 "parser.y" /* yacc.c:1646  */
    {;}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 137 "parser.y" /* yacc.c:1646  */
    {;}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 137 "parser.y" /* yacc.c:1646  */
    {gType = " "; nops = 0;}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 138 "parser.y" /* yacc.c:1646  */
    {;}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 138 "parser.y" /* yacc.c:1646  */
    {gType = " "; nops = 0;}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 139 "parser.y" /* yacc.c:1646  */
    {;}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 140 "parser.y" /* yacc.c:1646  */
    {;}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 141 "parser.y" /* yacc.c:1646  */
    {;}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 142 "parser.y" /* yacc.c:1646  */
    {;}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 143 "parser.y" /* yacc.c:1646  */
    {;}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 144 "parser.y" /* yacc.c:1646  */
    {;}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 145 "parser.y" /* yacc.c:1646  */
    {;}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 146 "parser.y" /* yacc.c:1646  */
    {;}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 147 "parser.y" /* yacc.c:1646  */
    {;}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 148 "parser.y" /* yacc.c:1646  */
    {;}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 149 "parser.y" /* yacc.c:1646  */
    {;}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 150 "parser.y" /* yacc.c:1646  */
    {;}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 151 "parser.y" /* yacc.c:1646  */
    {;}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 152 "parser.y" /* yacc.c:1646  */
    {;}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 153 "parser.y" /* yacc.c:1646  */
    {;}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 154 "parser.y" /* yacc.c:1646  */
    {;}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 155 "parser.y" /* yacc.c:1646  */
    {;}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 156 "parser.y" /* yacc.c:1646  */
    {;}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 157 "parser.y" /* yacc.c:1646  */
    {;}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 158 "parser.y" /* yacc.c:1646  */
    {;}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 160 "parser.y" /* yacc.c:1646  */
    {;}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 161 "parser.y" /* yacc.c:1646  */
    {
					level += 1;
					new_block();
				 	//printf("id %d , childrenNum %d, parentID %d \n", current->id, current->num_children, current->parent->id);
				}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 167 "parser.y" /* yacc.c:1646  */
    {
					if(in_function == 1 && current -> parent -> id == 0)
						in_function = 0; 
					if (level == 0) yyerror_semantic("start scope first!\n"); 
					else{
					int parID;
					if(current->id == 1)  parID = -1; else parID = current->parent->id;
				 	level -= 1; unused_symbols(); 
					current = current -> parent; 
					//printf("id %d , childrenNum %d, parentID %d \n", current->id, current->num_children, parID);
					}
				}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 180 "parser.y" /* yacc.c:1646  */
    {; printf(toArray((yyvsp[0].int_num)));try("",toArray((yyvsp[0].int_num)),"");termType="int";}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 181 "parser.y" /* yacc.c:1646  */
    {; char buf[1000];gcvt((yyvsp[0].float_num), 6, buf);try("",buf,"");termType="float";}
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 182 "parser.y" /* yacc.c:1646  */
    {;printf('%c',(yyvsp[0].id));/*try("",ptr,""); termType="char";*/}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 183 "parser.y" /* yacc.c:1646  */
    {;try("",(yyvsp[0].string),""); termType="string";}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 184 "parser.y" /* yacc.c:1646  */
    {;try("","false","");termType="false";}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 185 "parser.y" /* yacc.c:1646  */
    {;try("","true",""); termType="true";}
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 195 "parser.y" /* yacc.c:1646  */
    {try("Args",(yyvsp[-1].string),"");}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 195 "parser.y" /* yacc.c:1646  */
    {
								cur_func_args[cur_func_args_num] = (yyvsp[-3].string);
								cur_func_names[cur_func_args_num] = (yyvsp[-2].string);
								cur_func_args_num += 1;
								}
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 202 "parser.y" /* yacc.c:1646  */
    {try("Args",(yyvsp[-1].string),"");}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 202 "parser.y" /* yacc.c:1646  */
    {
								cur_func_args[cur_func_args_num] = (yyvsp[-3].string);
								cur_func_names[cur_func_args_num] = (yyvsp[-2].string);
								cur_func_args_num += 1;
								}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 213 "parser.y" /* yacc.c:1646  */
    {try("PROC",(yyvsp[-3].string),"");}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 214 "parser.y" /* yacc.c:1646  */
    {
			retType=(yyvsp[-5].string);
			if (current->id != 0){
				yyerror_semantic("Function can only be declared globally!");
				//return;
			}
			for(int i=0; i<BRANCHFACTOR; i++)
				if(function_table[i] && strcmp(function_table[i], (yyvsp[-4].string))==0){
					char Output[MAX_STR_LEN];
					sprintf(Output, "%s%s%s", "A function with name ", (yyvsp[-4].string), " is already defined!\n");
					yyerror_semantic(Output);
					//return 0;
				}
			function_table[node_counter+1] = (yyvsp[-4].string);
			in_function = 1;
			func_type = (yyvsp[-5].string);
		}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 233 "parser.y" /* yacc.c:1646  */
    {
	 if( strcmp(retType, gType) != 0){
		 yyerror_semantic("return value type does not match the function type");
		 printf("return value %s type does not match the function type %s ",retType,gType);
	 }
	 try("RET","",""); 
	 printf("function\n");
	 gType=" ";
	 nops=0;}
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 245 "parser.y" /* yacc.c:1646  */
    {
					if(check_func(gType)!=0) {
						try("params",(yyvsp[0].string),"");
					}
					
				}
#line 2233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 251 "parser.y" /* yacc.c:1646  */
    {
					if(check_func(gType)!=0){
						try("params",(yyvsp[-2].string),"");
					} 
				}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 260 "parser.y" /* yacc.c:1646  */
    {	try("CALL",(yyvsp[-1].string),"");
				func_id=(yyvsp[-1].string);
				int found = 0;
				for(int i=0; i<BRANCHFACTOR; i++)
					if(function_table[i] && strcmp(function_table[i], (yyvsp[-1].string))==0)
						found = 1;
				if (found != 1){
					char Output[MAX_STR_LEN];
					sprintf(Output, "%s%s", (yyvsp[-1].string), " is not a function!\n");
					yyerror_semantic(Output);
					return 0;
				}
				for(int i=0; i<BRANCHFACTOR; i++){
					if(function_table[i] && strcmp(function_table[i], (yyvsp[-1].string))==0){
						for(int j=0; j<root->num_children; j++)
							if(root->children[j]->id == i){
								arg_size = root->children[j] -> num_arguments;
								indx_arg = 0;
								func_call_node = j;
							}
						}
					}
			}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 283 "parser.y" /* yacc.c:1646  */
    {func_call_handler();}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 284 "parser.y" /* yacc.c:1646  */
    {func_call_handler();}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 287 "parser.y" /* yacc.c:1646  */
    {
				declare_symbol((yyvsp[-3].string), (yyvsp[-4].string), 1, gType, 1); 
				printf("constant and assignment\n");
				if(nops == 1)
				{
					try("Single" , (yyvsp[-1].string), "");
				}	
				try("POP", (yyvsp[-3].string), ""); 
				gType = " ";
				nops = 0;
			}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 299 "parser.y" /* yacc.c:1646  */
    {
				declare_symbol((yyvsp[-3].string), (yyvsp[-4].string), 1, gType, 0);
			  	if(nops == 1)
				{
					try("Single" , (yyvsp[-1].string), "");
				}	
				try("POP", (yyvsp[-3].string), ""); 
				gType = " ";
				nops = 0;
			}
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 309 "parser.y" /* yacc.c:1646  */
    {
				declare_symbol((yyvsp[-2].string), (yyvsp[-3].string), 0, "", 0);
				try("POP",(yyvsp[-2].string),"");
				assign_to_func((yyvsp[-2].string), func_id);

			}
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 315 "parser.y" /* yacc.c:1646  */
    {declare_symbol((yyvsp[-1].string), (yyvsp[-2].string), 0, "", 0);}
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 317 "parser.y" /* yacc.c:1646  */
    {
	try("type_conv",(yyvsp[-2].string),"");
	type_conversion((yyvsp[-2].string), (yyvsp[-4].string));
	
}
#line 2341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 324 "parser.y" /* yacc.c:1646  */
    {
					int r = assign_symbol((yyvsp[-3].string), gType);
					if(r==1){ 
						if(nops == 1)
						{
							try("Single" , (yyvsp[-1].string), "");
						}		
						try("POP", (yyvsp[-3].string), ""); 
						gType = " ";
						nops = 0;
					}
				}
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 337 "parser.y" /* yacc.c:1646  */
    {
				  try("POP",(yyvsp[-2].string),"");
				  assign_to_func((yyvsp[-2].string), func_id);
			}
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 353 "parser.y" /* yacc.c:1646  */
    {if(strcmp(get_symbol((yyvsp[-2].string)),termType)!=0){yyerror_semantic("Different types of operands \n");}try("",(yyvsp[-2].string),"");}
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 354 "parser.y" /* yacc.c:1646  */
    {try("GE","","");}
#line 2379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 354 "parser.y" /* yacc.c:1646  */
    {try("LE","","");}
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 354 "parser.y" /* yacc.c:1646  */
    {try("G","","");}
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 354 "parser.y" /* yacc.c:1646  */
    {try("L","","");}
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 354 "parser.y" /* yacc.c:1646  */
    {try("EE","","");}
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 354 "parser.y" /* yacc.c:1646  */
    {try("NE","","");}
#line 2409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 356 "parser.y" /* yacc.c:1646  */
    {try("if","","");}
#line 2415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 356 "parser.y" /* yacc.c:1646  */
    {try("endIf","","");}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 358 "parser.y" /* yacc.c:1646  */
    {if(strcmp(get_symbol((yyvsp[-2].string)),get_symbol((yyvsp[0].string)))!=0){yyerror_semantic("Different types of operands \n");}try("",(yyvsp[-2].string),(yyvsp[0].string));}
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 359 "parser.y" /* yacc.c:1646  */
    {if(strcmp(get_symbol((yyvsp[-3].string)),get_symbol((yyvsp[-1].string)))!=0){yyerror_semantic("Different types of operands \n");}try("",(yyvsp[-3].string),(yyvsp[-1].string));}
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 359 "parser.y" /* yacc.c:1646  */
    {try("",(yyvsp[-1].string),"");}
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 360 "parser.y" /* yacc.c:1646  */
    {if(strcmp(get_symbol((yyvsp[-3].string)),get_symbol((yyvsp[-1].string)))!=0){yyerror_semantic("Different types of operands \n");}try((yyvsp[-3].string),(yyvsp[-1].string),"not");}
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 360 "parser.y" /* yacc.c:1646  */
    {try("not","","");}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 360 "parser.y" /* yacc.c:1646  */
    {try("not","","");}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 360 "parser.y" /* yacc.c:1646  */
    {try("not",(yyvsp[-1].string),"");}
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 360 "parser.y" /* yacc.c:1646  */
    {try("not","","");}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 361 "parser.y" /* yacc.c:1646  */
    {try("elseif","","");}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 361 "parser.y" /* yacc.c:1646  */
    {try("endIf","","");}
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 364 "parser.y" /* yacc.c:1646  */
    {try("AndAnd","","");}
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 364 "parser.y" /* yacc.c:1646  */
    {try("OrOr","","");}
#line 2493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 366 "parser.y" /* yacc.c:1646  */
    {switchVariableType=get_symbol((yyvsp[0].string));try("switch",(yyvsp[0].string),"");}
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 366 "parser.y" /* yacc.c:1646  */
    {try("endSwitch","","");}
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 368 "parser.y" /* yacc.c:1646  */
    {try("case","","");}
#line 2511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 368 "parser.y" /* yacc.c:1646  */
    {if(strcmp(switchVariableType,termType)!=0){yyerror_semantic("Different types of operands \n");}}
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 368 "parser.y" /* yacc.c:1646  */
    {try("endCase","","");}
#line 2523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 371 "parser.y" /* yacc.c:1646  */
    {try("startWhile","","");}
#line 2529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 371 "parser.y" /* yacc.c:1646  */
    {try("while","","");}
#line 2535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 372 "parser.y" /* yacc.c:1646  */
    {try("endWhile","","");}
#line 2541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 374 "parser.y" /* yacc.c:1646  */
    {try("while","endWhile","");}
#line 2547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 381 "parser.y" /* yacc.c:1646  */
    {  try("Add", (yyvsp[-2].string), (yyvsp[0].string)); try("", (yyval.string), ""); }
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 382 "parser.y" /* yacc.c:1646  */
    {  try("SUB", (yyvsp[-2].string), (yyvsp[0].string)); try("", (yyval.string), ""); }
#line 2559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 383 "parser.y" /* yacc.c:1646  */
    {  try("MUL", (yyvsp[-2].string), (yyvsp[0].string)); try("", (yyval.string), ""); }
#line 2565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 384 "parser.y" /* yacc.c:1646  */
    {  try("DIV", (yyvsp[-2].string), (yyvsp[0].string)); try("", (yyval.string), ""); }
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 385 "parser.y" /* yacc.c:1646  */
    {  try("MOD", (yyvsp[-2].string), (yyvsp[0].string)); try("", (yyval.string), ""); }
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 386 "parser.y" /* yacc.c:1646  */
    {  try("SHL", (yyvsp[-2].string), (yyvsp[0].string)); try("", (yyval.string), ""); }
#line 2583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 387 "parser.y" /* yacc.c:1646  */
    {  try("SHR", (yyvsp[-2].string), (yyvsp[0].string)); try("", (yyval.string), ""); }
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 391 "parser.y" /* yacc.c:1646  */
    {try("And", (yyvsp[-2].string), (yyvsp[0].string));}
#line 2595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 392 "parser.y" /* yacc.c:1646  */
    {try("Or", (yyvsp[-2].string), (yyvsp[0].string));}
#line 2601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 396 "parser.y" /* yacc.c:1646  */
    { if(aftEnd == 0) {try("INC", (yyvsp[-1].string), ""); try("", (yyval.string), ""); try("POP", (yyvsp[-1].string), "");}
								else{
									temporary[0] = "INC"; temporary[1]= (yyvsp[-1].string); temporary[2]= (yyval.string); temporary[3]="POP"; temporary[4]= (yyvsp[-1].string);
								} }
#line 2610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 400 "parser.y" /* yacc.c:1646  */
    { if(aftEnd == 0) {try("INC", (yyvsp[-1].string), ""); try("", (yyval.string), ""); try("POP", (yyvsp[-1].string), "");}
								else{
									temporary[0] = "INC"; temporary[1]= (yyvsp[-1].string); temporary[2]= (yyval.string); temporary[3]="POP"; temporary[4]= (yyvsp[-1].string);
								}}
#line 2619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 404 "parser.y" /* yacc.c:1646  */
    { try("DEC", (yyvsp[-1].string), ""); try("", (yyval.string), ""); try("POP", (yyvsp[-1].string), "");}
#line 2625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 405 "parser.y" /* yacc.c:1646  */
    {try("DEC", (yyvsp[-2].string), ""); try("", (yyval.string), ""); try("POP", (yyvsp[-2].string), "");}
#line 2631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 406 "parser.y" /* yacc.c:1646  */
    {try("NOT", (yyvsp[0].string), ""); try("", (yyval.string), "");}
#line 2637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 407 "parser.y" /* yacc.c:1646  */
    {try("NEG", (yyvsp[0].string), ""); try("", (yyval.string), "");}
#line 2643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 410 "parser.y" /* yacc.c:1646  */
    {(yyval.string) = (yyvsp[-1].string);}
#line 2649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 411 "parser.y" /* yacc.c:1646  */
    { //printf("\ integer value %i \n", $1);
								(yyval.string) = toArray((yyvsp[0].int_num));
								if(gType == " ")
									gType = "int";
								else if( strcmp("int", gType) != 0){
									yyerror("Different types of operands \n");	printf("Different types of operands  \n");
									return;
								}
								nops += 1;
							}
#line 2664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 421 "parser.y" /* yacc.c:1646  */
    { 
								char str[2]; 
								str[0] = (yyvsp[0].id); 
								str[1] = '\0'; 
								(yyval.string) = str; 
								// printf("\ char value %s \n", $$);
								if(gType == " ")
									gType = "char";
								else if( strcmp("char", gType) != 0){
									yyerror("Different types of operands \n");	printf("Different types of operands  \n");
									return;
								}
								nops += 1;
								}
#line 2683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 435 "parser.y" /* yacc.c:1646  */
    { //printf("floaaaat %f", $1); 
								char buf[1000];
								gcvt((yyvsp[0].float_num), 6, buf);
								(yyval.string) = buf;
								if(gType == " ")
									gType = "float";
								else if( strcmp("float", gType) != 0){
									yyerror("Different types of operands \n");	printf("Different types of operands  \n");
									return;
								}
								nops += 1;
							}
#line 2700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 448 "parser.y" /* yacc.c:1646  */
    {

								if(gType == " ")
									gType = "string";
								else if( strcmp("string", gType) != 0){
									yyerror("Different types of operands \n");	printf("Different types of operands  \n");
									return;
								}
								nops += 1;
							}
#line 2715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 459 "parser.y" /* yacc.c:1646  */
    { 	(yyval.string) = "false";
								//printf("\ bool value %s \n", $$);
								if(gType == " ")
									gType = "bool";
								else if( strcmp("bool", gType) != 0){
									yyerror("Different types of operands \n");	printf("Different types of operands  \n");
									return;
								}
								nops += 1;
							}
#line 2730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 469 "parser.y" /* yacc.c:1646  */
    { 	(yyval.string) = "true";
								//printf("\ bool value %s \n", $$);
								if(gType == " ")
									gType = "bool";
								else if( strcmp("bool", gType) != 0){
									yyerror("Different types of operands \n");	printf("Different types of operands  \n");
									return;
								}
								nops += 1;
							}
#line 2745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 480 "parser.y" /* yacc.c:1646  */
    {(yyval.string) = (yyvsp[0].string); 
								// printf("\ identifier name is %s \n",  $1);
							    // printf("\ type of variable %s is %s \n", $1 , get_symbol($1));
								
								if(gType == " ")
									gType = get_symbol((yyvsp[0].string));
								else if( strcmp(get_symbol((yyvsp[0].string)), gType) != 0){
									yyerror("Different types of operands \n");	printf("Different types of operands  \n");
									return;
								}
								nops += 1;
							}
#line 2762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 502 "parser.y" /* yacc.c:1646  */
    { aftEnd =1; }
#line 2768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 502 "parser.y" /* yacc.c:1646  */
    {try("forloop","",""); For_loop=1; gType = " "; nops = 0;}
#line 2774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 504 "parser.y" /* yacc.c:1646  */
    {try(temporary[0], temporary[1], temporary[2]); try(temporary[3], temporary[4], ""); try("endforloop","","");For_loop=0;}
#line 2780 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2784 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
  return yyresult;
}
#line 510 "parser.y" /* yacc.c:1906  */
                     /* C code */

int main (int argc, char **argv) {
	fp = fopen ("Test_Cases/quad.txt","w");
	errorFile = fopen ("Test_Cases/Errors!!.txt","w");
	/* init symbol table */
	root = malloc(sizeof (node));
	node_counter = 0;
	root-> id = node_counter = 0;
	root-> num_children = 0;
	root-> num_symbols = 0;
	current = root;
	char* str = read_input_file(argv[1]);
	yy_scan_string(str);
	yyparse ();
	fclose (errorFile);
	unused_symbols();
	print_symbol_table();

	// for debugging
	/*for(int i=0; i<idx;++i){
		printf(arr[i]); 
		printf("  ");
	}*/
	//int x;
	//scanf("%d",  &x);

	printQuad();
	fclose (fp);
	return 0;
}

void printQuadComp(char* s1, char* s2, char* s3){
	fprintf (fp, "push %s\n",s2);
	fprintf (fp, "push %s\n",s3);
	if (s1=="EE") fprintf (fp, "compEQ \n");
	else if (s1=="NE") fprintf (fp, "compNEQ \n");
	else if (s1=="LE") fprintf (fp, "compLE \n");
	else if (s1=="GE") fprintf (fp, "compGE \n");
	else if (s1=="G") fprintf (fp, "compG \n");
	else fprintf (fp, "compL \n"); 
}

void printQuadExpress(char* s1, char* s2, char* s3, int i){
	if(s1 == "POP")
		fprintf (fp, "Pop %s\n",s2);
	else if(s1 == "Single")
		fprintf (fp, "push %s\n",s2);	
	else{
		if(i < 3)
		{
			fprintf (fp, "push %s\n",s2);
			if(s3 != NULL)
				fprintf (fp, "push %s\n",s3);
			fprintf (fp,  s1);
			fprintf (fp, "\n");
			return;
		}
		bool flagS2 = true, flagS3 = true;
		for(int k = i; k >= 0; k -= 4)
		{
			if(arr[k-3] == "INC" || arr[k-3] == "DEC" || arr[k-3] == "NOT" || arr[k-3] == "NEG")
			{
				if(s2 == arr[k-1])
					flagS2 = false;
			}
			else if(arr[k-4] == "Add"|| arr[k-4] == "SUB" || arr[k-4]  == "MUL" || arr[k-4]  == "DIV" || arr[k-4]  == "MOD" || arr[k-4]  == "SHL" || arr[k-4] == "SHR")
			{
				if(s2 == arr[k-1])
					flagS2 = false;
				if(s3 == arr[k-1])
					flagS3 = false;
			}
			else
				break;
		}
		if(flagS2)
			fprintf (fp, "push %s\n",s2);
		if(flagS3 && s3 != NULL)
			fprintf (fp, "push %s\n",s3);
		fprintf (fp,  s1);
		fprintf (fp, "\n");
	}	
}

void printQuadSwitchcases(char*c){
	fprintf (fp, "push %s\n",c);
	fprintf (fp, "compEQ \n");
	fprintf (fp, "jnz l%d \n",label); //nz as I'll make the quad will be directlu under it if they are eual, so if not equal, jump to the other comparison
	label+=1;
}


void jmpNewLabel(int notCond){
	if(notCond){
		fprintf (fp, "jnz l%d \n",label);
	}
	else{
		fprintf (fp, "jz l%d \n",label);
	}
	label+=1;
}


void printQuadArgs(char*c, int iter){
	iter=iter-2;
	for(int i=iter;i>=0;i-=2){
		if(arr[i]=="Args"){
			fprintf (fp, "Pop %s\n",arr[i+1]);
		}
	}



	/*int args=0;
	int start=iter;
	while(arr[iter]=="Args"){
		iter+=1;
		args+=1;
	}
	fprintf (fp, "PROC %s\n",arr[iter+1]);
	for(int i=args*2-1;i>start;i-=2){
		printf (fp, "Pop %s\n",arr[i]);
	}
	return args*2;*/
}


void printQuad(){
	int notCond=0;
	int notCond_for=0;
	int endSwitchCond=0;
	int andLabel=-1;
	int orLabel=-1;
	int andLabel_for=-1;
	int whileCond=0;
	int forloopCond=0;
	int orLabel_for=-1;
	int jmpOutLabel=0;
	for (int i=0;i<idx;++i){
		if(arr[i]=="forloop")For_loop=1;

		if(arr[i] == "EE" || arr[i] == "NE" || arr[i] == "GE"|| arr[i] == "LE"|| arr[i] == "G"|| arr[i] == "L"){
			printQuadComp(arr[i],arr[i+1],arr[i+2]);
			i+=2;
		}
		else if(arr[i] == "Add" || arr[i] == "SUB" || arr[i] == "MUL" || arr[i] == "DIV" || arr[i] == "MOD" || arr[i] == "SHL" || arr[i] == "SHR"){
			printQuadExpress(arr[i],arr[i+1],arr[i+2], i);
			i += 3;
		}
		else if(arr[i] == "INC" || arr[i] == "DEC" || arr[i] == "NOT" || arr[i] == "NEG"){
			printQuadExpress(arr[i], arr[i+1], NULL, i);
			i += 2;
		}
		else if(arr[i] == "POP" || arr[i] == "Single"){
			printQuadExpress(arr[i], arr[i+1], NULL, i);
			i += 1;
		}
		else if(arr[i] == "And" || arr[i] == "Or")
		{
			fprintf (fp, "push %s\n", arr[i+1]);
			fprintf (fp, "push %s\n", arr[i+2]);
			fprintf (fp,  arr[i]); fprintf (fp, "\n");
			i +=2;
		}
		else if(arr[i]=="if" || arr[i]=="elseif"){
			if(arr[i]=="if")jmpOutLabel++;
			if(notCond)notCond=0;else notCond=1;
			jmpNewLabel(notCond);
			notCond=0;
			andLabel=-1;
			orLabel=-1;
		}
		else if(arr[i]=="while"){
			if(notCond==0){
				notCond=1;
				whileCond=0;
			}
			else{notCond=0;whileCond=0;}
			jmpNewLabel(notCond);
			notCond=0;
			andLabel=-1;
			orLabel=-1;
		}
		else if(arr[i]=="startWhile") whileCond=1;
		else if(arr[i]=="AndAnd")
		{
			if(andLabel==-1)andLabel=label++;
			if(notCond && whileCond==0) fprintf (fp, "jz l%d \n",label);
			else if(notCond && whileCond) fprintf (fp, "jz l%d \n",label+1);
			else fprintf (fp, "jnz l%d \n",label);
			notCond=0;

		}
		else if (arr[i]=="OrOr"){
			if(orLabel==-1)orLabel=label++;
			if(notCond && whileCond==0) fprintf (fp, "jnz l%d \n",orLabel);
			else if(notCond && whileCond) fprintf (fp, "jnz l%d \n",orLabel+1);
			else fprintf (fp, "jz l%d \n",orLabel);
			if(notCond && whileCond==0) fprintf (fp, "jnz l%d \n",label);
			else if(notCond && whileCond) fprintf (fp, "jnz l%d \n",label+1);
		
			else fprintf (fp, "jz l%d \n",label);
			notCond=0;
		}
		else if(arr[i]=="not"){
			notCond=1;
			//for loop
			notCond_for=1;
		}
		else if(arr[i]=="endIf"){
			fprintf (fp, "jmp JOl%d\n",jmpOutLabel);
		}
		else if(arr[i]=="endCase"){
			fprintf (fp, "jmp l%d\n",label-1);
		}
		else if(arr[i]=="switch"){
			fprintf (fp, "push %s\n",arr[i+1]);
			i+=1;
		}
		else if(arr[i]=="case"){
			printQuadSwitchcases(arr[i+1]);
			i+=1;
		}
		else if(arr[i]=="PROC"){
			fprintf (fp, "PROC %s\n",arr[i+1]);
			printQuadArgs(arr[i],i);
			i+=1;
		}
		else if(arr[i]=="RET"){
			 fprintf (fp, "RET \n");
			
			
		}
		else if(arr[i]=="CALL"){
			 fprintf (fp, "CALL %s\n",arr[i+1]);
			 i+=1;
		}
		else if(arr[i]=="params"){
			fprintf (fp, "push %s\n",arr[i+1]);
			i+=1; 
		}
		else if(arr[i]=="endWhile"){
			fprintf (fp, "jmp l%d\n",label);
			label+=1;
		}
		//for loop
		else if(arr[i]=="forloop"){
			if(notCond_for==0){
					notCond_for=1;
					forloopCond=0;
				}
			else{notCond_for=0;forloopCond=0;}
			jmpNewLabel(notCond_for);
			notCond_for=0;
			andLabel_for=-1;
			orLabel_for=-1;
		}
		else if(arr[i]=="endforloop"){
			fprintf (fp, "jmp l%d\n",label);
			label+=1;
		}
		//for loop 
		else if(For_loop&&arr[i]=="AndAnd")
		{
			//for loop 
			if(andLabel_for==-1)andLabel_for=label++;
			if(notCond_for && forloopCond==0) fprintf (fp, "jz l%d \n",andLabel_for);
			else if(notCond_for && forloopCond) fprintf (fp, "jz l%d \n",andLabel_for+1);
			else fprintf (fp, "jnz l%d \n",andLabel_for);
			notCond_for=0;
		}
		// for loop 
		else if (For_loop&&arr[i]=="OrOr"){
			//for loop 		
			if(orLabel_for==-1)orLabel_for=label++;
			if(notCond_for && forloopCond==0) fprintf (fp, "jnz l%d \n",orLabel_for);
			else if(notCond_for && forloopCond) fprintf (fp, "jnz l%d \n",orLabel_for+1);
			else fprintf (fp, "jz l%d \n",orLabel_for);
			if(notCond_for && forloopCond==0) fprintf (fp, "jnz l%d \n",label);
			else if(notCond_for && forloopCond) fprintf (fp, "jnz l%d \n",label+1);
		
			else fprintf (fp, "jz l%d \n",label);
			notCond_for=0;
		
		}	
		else if(arr[i]=="type_conv"){
			fprintf (fp, "CONV %s\n",arr[i+1]);
			i+=1;
		}
		
		
	}
}


try(char*operation,char* arg1, char*arg2){
	if (operation != ""){
		arr[idx++] = operation;
	}
	if(arg1 != "") {
		arr[idx++] = arg1;
	}
	if(arg2 != "") {
		arr[idx++] = arg2;
	}
}

void yyerror (char *s) {
	fprintf (stderr,"Error: %s at line %d %s", syntax_error_handler(yychar), yylineno, "\n");
	fprintf (errorFile,"Error: %s at line %d %s", syntax_error_handler(yychar), yylineno, "\n");
	//fprintf(stderr, s);
}
void yyerror_semantic(char *s) {
	fprintf(stderr, s);
	fprintf(errorFile, s);
}


char* toArray(int number){
	char text[20]; 
	sprintf(text, "%d", number);   
	return strdup(text);
}



char* syntax_error_handler(int err){
	//printf("yycahr value is %d %s", err, " ");
	switch(err){
		case 258: case 290: case 276: case 125: return "expecting a ';'!";
		case 270: case 123: return "expecting a closing paranthesis or invalid definition!";
		case 273: return "expecting an opening block {!";
		case 274: return "expecting a logical expression!";
		case 287: return "Invalid identifier name!";
		case -2: case 275: return "Mis-spelling or keyword fault!"; 
		default: return "";
	}
}




/*
void new_define(){
	if(arg_size != 0){
		yyerror("Missing another argument(s)!\n");
		return;
		}
	func_call_node = 0;
	printf("Function Call\n");
}*/
