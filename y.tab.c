/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser2.y"

void yyerror (char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <math.h>       
#define BRANCHFACTOR 20
#define NUMVARIABLES 50
#define MAX_STR_LEN 100



#define LN10 2.3025850929940456840179914546844
double ln(double x);
double log10( double x );

char * toArray(int number);
char*arr[100000];
int idx = 0;
void try(char*operation,char* arg1, char*arg2);
char* scopes[50];
int level = 0;
int node_counter;
typedef struct symbol{
	char* symbol_id;
	char* type;
	int initialized;
} symbol;
typedef struct node{
	int id;
	int num_children;
	int num_symbols;
	struct node* children[BRANCHFACTOR];
	struct node* parent;
	struct symbol symbols[NUMVARIABLES];
} node;
node* root;
node* current;

void new_block();
int declare_symbol(char*, char*, int, char*);
char* get_symbol(char* id);
void unused_symbols();

#line 118 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    IfFiller = 278,
    While = 279,
    Do_While = 280,
    logical_OP = 281,
    NOT = 282,
    SWITCH = 283,
    CASE = 284,
    DEFAULT = 285,
    integer_value = 286,
    Float_value = 287,
    Char_value = 288,
    String_value = 289,
    identifier = 290,
    GE = 291,
    LE = 292,
    G = 293,
    L = 294,
    EE = 295,
    NE = 296,
    INC = 297,
    DEC = 298,
    SHL = 299,
    SHR = 300
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
#define IfFiller 278
#define While 279
#define Do_While 280
#define logical_OP 281
#define NOT 282
#define SWITCH 283
#define CASE 284
#define DEFAULT 285
#define integer_value 286
#define Float_value 287
#define Char_value 288
#define String_value 289
#define identifier 290
#define GE 291
#define LE 292
#define G 293
#define L 294
#define EE 295
#define NE 296
#define INC 297
#define DEC 298
#define SHL 299
#define SHR 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 49 "parser2.y"
int int_num; char id; float float_num; char* string;

#line 263 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  77
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1292

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  139
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  266

#define YYUNDEFTOK  2
#define YYMAXUTOK   300


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,     2,     2,    50,    51,     2,
       2,     2,    48,    47,     2,    46,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,    52,    56,    54,     2,     2,     2,
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
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   103,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   144,
     146,   155,   156,   157,   158,   159,   160,   163,   164,   165,
     166,   167,   168,   170,   171,   173,   174,   176,   177,   180,
     181,   182,   183,   184,   185,   185,   186,   188,   188,   188,
     188,   188,   188,   190,   190,   190,   190,   191,   191,   192,
     192,   192,   192,   192,   192,   193,   193,   193,   193,   193,
     194,   194,   194,   194,   194,   195,   196,   198,   199,   199,
     200,   200,   200,   200,   200,   200,   203,   205,   209,   209,
     209,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   227,   228,   229,   230,   231,   232,
     233,   236,   237,   238,   241,   241,   247,   247,   249,   250
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
  "ASSIGN", "IfFiller", "While", "Do_While", "logical_OP", "NOT", "SWITCH",
  "CASE", "DEFAULT", "integer_value", "Float_value", "Char_value",
  "String_value", "identifier", "GE", "LE", "G", "L", "EE", "NE", "INC",
  "DEC", "SHL", "SHR", "'-'", "'+'", "'*'", "'/'", "'%'", "'&'", "'|'",
  "'^'", "'~'", "'{'", "'}'", "'!'", "$accept", "line", "start_block",
  "end_block", "term", "type", "argList", "cont", "stmtlist", "func",
  "func_call", "constant", "variable", "declaration", "definition",
  "logical_exp", "comparison_OP", "if", "$@1", "$@2", "$@3", "ifExpr",
  "cond", "bracketBeforeAndAfter", "notBefore", "elseIf", "else", "switch",
  "cases", "case", "while", "dowhile", "expression", "expression1",
  "expression2", "expression3", "single_val", "for", "$@4",
  "for_initi_stat", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,    45,    43,    42,    47,
      37,    38,   124,    94,   126,   123,   125,    33
};
# endif

#define YYPACT_NINF (-129)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-138)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1047,  -129,  -129,  -129,  -129,  -129,    -5,    -7,  -129,  -129,
     321,  -129,  -129,    41,    -2,   -47,     7,   495,    22,  -129,
    -129,  -129,  -129,    34,    78,    78,    41,    41,  -129,  -129,
      41,   717,  -129,  -129,    26,    11,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,   561,
    -129,  -129,   -10,  -129,  -129,    33,    35,  1047,    32,    31,
    -129,    41,  -129,  1204,    72,  1047,    44,    45,   772,    47,
     135,  -129,  -129,    73,   561,   561,   561,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,   561,  -129,  -129,  -129,    -8,    41,    41,
    -129,  -129,  -129,  -129,  -129,  -129,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,  -129,  -129,    72,
      72,  1047,    67,    58,    79,    75,  -129,   128,    82,   -18,
    -129,  -129,    89,    92,  -129,  -129,  1047,    98,   827,    86,
     882,   106,   111,  1069,  -129,  -129,   321,    41,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   109,   110,     9,   495,   108,    41,    41,   417,   112,
     113,   115,   338,   655,   -47,    72,   120,   -47,   130,   937,
    -129,   132,   137,  -129,  -129,   100,   131,  1108,  -129,   -47,
    -129,   495,  1128,  1148,  -129,   723,  -129,  -129,  -129,  1192,
     138,   139,   146,  -129,  -129,  1047,  -129,   136,    40,  -129,
     141,  -129,  -129,   164,   -47,  -129,   -47,  1047,  -129,    41,
    -129,   165,  -129,   778,  -129,  -129,  -129,  1047,    72,   134,
      40,  -129,   321,  -129,  1047,  -129,  1047,  1239,  -129,   168,
      24,   169,  -129,  -129,   158,  1047,   992,  1047,    27,  -129,
    -129,   179,   164,    41,  1047,  1047,   -47,  -129,  -129,  1168,
      60,  1047,   134,  1047,  -129,   102
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    48,    49,    47,    52,    73,     0,     0,    50,    51,
       0,    45,    46,     0,     0,     0,     0,     0,     0,    41,
      42,    43,    44,   133,     0,     0,     0,     0,    39,    40,
       0,     0,     7,     9,   132,     0,    35,    37,    27,    29,
      31,    33,    11,    13,    12,    17,    18,     3,     5,    23,
     108,   109,   110,    25,    21,     0,     0,     0,     0,     0,
     133,     0,   132,     0,     0,     0,     0,     0,     2,     0,
       0,   124,   126,   132,   130,   128,   129,     1,     8,    10,
      36,    38,    28,    30,    32,    34,    14,    16,    15,    19,
      20,     4,     6,    24,    26,    22,   134,     0,     0,     0,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   125,   127,     0,
       0,     0,     0,     0,     0,     0,   131,     0,     0,    82,
      81,    80,     0,    77,    83,    84,     0,     0,     2,     0,
     104,     0,   133,     0,   135,    63,    54,     0,   111,   120,
     122,   123,   113,   112,   114,   115,   116,   117,   118,   119,
     121,     0,     0,    10,     0,     0,     0,     0,    82,    81,
      80,     0,     0,     0,     0,     0,    10,     0,     0,   101,
     105,     0,     0,    65,    64,     0,     0,     0,    74,     0,
     139,     0,     0,     0,    88,     0,    87,    86,    89,    82,
      81,    80,     0,    79,    66,     0,    78,     0,     0,   102,
       0,   103,    60,    56,     0,    62,     0,     0,   138,     0,
      61,    79,    93,     0,    92,    91,    94,     0,     0,     0,
      98,   100,     0,    53,     2,    75,     0,     0,    85,    79,
      10,     0,    97,    99,     0,    57,     0,     0,    10,   136,
      90,     0,    56,     0,    58,     0,     0,   107,    55,     0,
      10,     0,     0,     0,    59,    10
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -129,   432,    -3,     3,     0,     5,  -129,   -53,  -129,   154,
     167,   183,   207,   239,   256,  -123,  -128,   280,  -129,  -129,
    -129,  -114,  -129,  -129,  -129,   311,   324,   327,   -28,    85,
     396,   409,   170,  -129,  -129,    53,   440,   456,  -129,  -129
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,    32,    33,    62,    35,   186,   233,   246,    36,
      37,    38,    39,    40,    41,   131,   116,    42,    55,   216,
     247,   132,   133,   134,   135,    43,    44,    45,   229,    46,
      47,    48,    49,    50,    51,    52,    53,    54,   256,   124
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,   173,    56,    57,   170,   161,   162,   145,    28,   -96,
     146,    58,    65,   171,   147,    59,    64,    67,   100,   101,
     102,   103,   104,   105,  -106,    66,    73,   -95,    78,   -96,
     -96,    34,   117,   118,    79,     1,     2,     3,     4,    68,
     195,    96,     8,     9,  -106,  -106,    97,   -95,   -95,   201,
      28,   119,    69,   120,    11,    12,    70,    34,   202,    13,
     -76,   206,   138,   123,   130,    34,   125,   122,    34,    17,
      18,   223,    19,    20,    21,    22,    60,    71,    72,   137,
     -76,   -76,   141,    24,    25,    11,    12,    61,   144,   164,
     127,    11,    12,   165,   166,    27,    13,   167,    30,   128,
     172,   180,  -137,    19,    20,    21,    22,   129,   174,    19,
      20,    21,    22,    60,   241,   175,    90,   177,    78,   130,
     130,    34,  -137,  -137,   163,   182,   183,   169,   188,   189,
     191,   196,   197,    78,   198,   213,    34,    78,    34,   176,
      34,    11,    12,    79,   207,   209,   127,   211,    11,    12,
     214,   185,   212,    13,   228,   128,   231,   224,   225,    19,
      20,    21,    22,   168,   190,   226,    19,    20,    21,    22,
     142,   205,   200,   204,   208,   130,    78,    24,    25,    34,
     232,    61,    79,    63,   238,    80,   217,   250,   251,    27,
      29,   218,    30,   252,   257,   204,    74,    75,    81,   258,
      76,    93,   243,     0,     0,    34,    90,     0,     0,     0,
       0,   234,     0,   235,    82,     0,     0,    34,     0,     0,
       0,    90,     0,   204,    78,    90,     0,    34,   130,     0,
     240,    74,   242,    78,    34,     0,    34,   244,    83,   248,
     143,     0,    78,     0,     0,    34,    34,    34,    79,     0,
       0,    78,    78,   261,    34,    34,     0,    79,   260,     0,
      78,    34,     0,    34,    90,   264,   265,     0,   148,   149,
      84,     0,     0,     0,     0,    80,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,    85,    81,     0,
      80,    93,     0,   230,    80,     0,     0,     0,     0,     0,
       0,     0,     0,    81,    82,     0,    93,    81,     0,     0,
      93,    86,    90,     0,     0,   230,     0,   187,     0,    82,
       0,    90,     0,    82,     1,     2,     3,     4,    83,     0,
      90,     8,     9,    80,     0,     0,   192,   193,     0,    90,
      90,     0,    87,    83,     0,     0,    81,    83,    90,    93,
       0,    11,    12,     0,     0,    88,   127,     0,    89,     0,
      84,     0,    82,     0,     0,   128,     0,     0,     0,    19,
      20,    21,    22,   199,     0,    84,     0,    85,     0,    84,
       0,    80,     0,     0,     0,     0,    83,     0,     0,   237,
      80,     0,    85,     0,    81,     0,    85,    93,     0,    80,
       0,    86,     0,    81,     0,     0,    93,     0,    80,    80,
      82,     0,    81,     0,     0,    93,    86,    80,    84,    82,
      86,    81,    81,   259,    93,    93,     0,    91,    82,     0,
      81,     0,    87,    93,    83,    85,   194,    82,    82,     0,
      92,     0,     0,    83,     0,    88,    82,    87,    89,     0,
       0,    87,    83,   100,   101,   102,   103,   104,   105,    86,
      88,    83,    83,    89,    88,     0,    84,    89,     0,     0,
      83,    94,     0,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    85,    84,     0,     0,    95,     0,   121,
      87,     0,    85,    84,    84,     0,     0,   136,     0,     0,
     140,    85,    84,    88,     0,     0,    89,    86,    11,    12,
      85,    85,     0,     0,     0,     0,    86,    91,     0,    85,
       0,     0,     0,     0,     0,    86,    19,    20,    21,    22,
      92,     0,    91,     0,    86,    86,    91,     0,    87,     0,
       0,     0,     0,    86,     0,    92,     0,    87,     0,    92,
       0,    88,     0,     0,    89,     0,    87,     0,     0,     0,
      88,    94,     0,    89,     0,    87,    87,     0,     0,    88,
     179,     0,    89,     0,    87,    91,    94,    95,    88,    88,
      94,    89,    89,    98,    99,     0,     0,    88,    92,     0,
      89,     0,    95,     0,     0,     0,    95,   100,   101,   102,
     103,   104,   105,     0,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,     0,     0,     0,     0,    94,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,    91,     0,     0,    95,    92,   227,     0,     0,
       0,    91,     0,     0,     0,    92,     0,     0,     0,   236,
      91,    91,     0,     0,    92,     0,     0,     0,     0,    91,
       0,     0,     0,    92,    92,     0,   245,    94,    11,    12,
       0,     0,    92,     0,     0,     0,    94,     0,   254,   255,
       0,     0,     0,    95,     0,    94,    19,    20,    21,    22,
     203,     0,    95,   263,    94,    94,     0,     0,     0,     0,
       0,    95,     0,    94,     0,     0,     0,     0,     0,     0,
      95,    95,     0,     0,     0,     0,     0,    77,     0,    95,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,     0,     0,     0,    13,    11,    12,     0,     0,
       0,    14,    15,     0,     0,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    19,    20,    21,    22,   221,    24,
      25,     0,     0,    26,     0,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,     0,     0,     0,
      13,    11,    12,   139,     0,     0,    14,    15,     0,     0,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    19,
      20,    21,    22,   239,    24,    25,     0,     0,    26,     0,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,     0,     0,     0,    13,     0,     0,   178,     0,
       0,    14,    15,     0,     0,    16,    17,    18,    19,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,    24,
      25,     0,     0,    26,     0,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,     0,     0,     0,
      13,     0,     0,   181,     0,     0,    14,    15,     0,     0,
      16,    17,    18,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,    24,    25,     0,     0,    26,     0,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,     0,     0,     0,    13,     0,     0,   210,     0,
       0,    14,    15,     0,     0,    16,    17,    18,    19,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,    24,
      25,     0,     0,    26,     0,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,     0,     0,     0,
      13,     0,   253,     0,     0,     0,    14,    15,     0,     0,
      16,    17,    18,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,    24,    25,     0,     0,    26,     0,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,     0,     0,     0,    13,     0,     0,     0,     0,
       0,    14,    15,     0,     0,    16,    17,    18,    19,    20,
      21,    22,    23,     0,   184,     0,     0,     0,     0,    24,
      25,    98,    99,    26,     0,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,   100,   101,   102,   103,   104,
     105,     0,     0,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   215,     0,     0,     0,     0,     0,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,   100,   101,   102,   103,   104,   105,
      98,    99,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,     0,   220,   100,   101,   102,   103,   104,   105,
      98,    99,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,     0,   262,   100,   101,   102,   103,   104,   105,
      98,    99,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,     0,     0,   100,   101,   102,   103,   104,   105,
       0,   222,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   126,     0,     0,     0,    98,    99,   100,   101,
     102,   103,   104,   105,     0,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     0,     0,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   249,     0,
       0,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,     0,     0,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115
};

static const yytype_int16 yycheck[] =
{
       0,   129,     7,     6,   127,   119,   120,    15,    55,     0,
      18,    18,    15,   127,    22,    10,    18,    17,    36,    37,
      38,    39,    40,    41,     0,    18,    26,     0,    31,    20,
      21,    31,    42,    43,    31,     3,     4,     5,     6,    17,
     168,    15,    10,    11,    20,    21,    35,    20,    21,   172,
      55,    18,    18,    18,    13,    14,    22,    57,   172,    18,
       0,   175,    17,    58,    64,    65,    35,    35,    68,    29,
      30,   199,    31,    32,    33,    34,    35,    24,    25,    35,
      20,    21,    35,    42,    43,    13,    14,    46,    15,    22,
      18,    13,    14,    35,    15,    54,    18,    22,    57,    27,
      18,    15,     0,    31,    32,    33,    34,    35,    19,    31,
      32,    33,    34,    35,   228,    23,    31,    19,   121,   119,
     120,   121,    20,    21,   121,    19,    15,   127,    19,    19,
      22,    19,    19,   136,    19,    35,   136,   140,   138,   136,
     140,    13,    14,   140,    24,    15,    18,    15,    13,    14,
      19,   146,    15,    18,    18,    27,    15,    19,    19,    31,
      32,    33,    34,    35,   164,    19,    31,    32,    33,    34,
      35,   174,   172,   173,   177,   175,   179,    42,    43,   179,
      16,    46,   179,    13,    19,    31,   189,    19,    19,    54,
      56,   191,    57,    35,    15,   195,    26,    27,    31,   252,
      30,    31,   230,    -1,    -1,   205,   121,    -1,    -1,    -1,
      -1,   214,    -1,   216,    31,    -1,    -1,   217,    -1,    -1,
      -1,   136,    -1,   223,   227,   140,    -1,   227,   228,    -1,
     227,    61,   229,   236,   234,    -1,   236,   232,    31,   236,
      70,    -1,   245,    -1,    -1,   245,   246,   247,   245,    -1,
      -1,   254,   255,   256,   254,   255,    -1,   254,   255,    -1,
     263,   261,    -1,   263,   179,   262,   263,    -1,    98,    99,
      31,    -1,    -1,    -1,    -1,   121,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    31,   121,    -1,
     136,   121,    -1,   208,   140,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,   121,    -1,   136,   140,    -1,    -1,
     140,    31,   227,    -1,    -1,   230,    -1,   147,    -1,   136,
      -1,   236,    -1,   140,     3,     4,     5,     6,   121,    -1,
     245,    10,    11,   179,    -1,    -1,   166,   167,    -1,   254,
     255,    -1,    31,   136,    -1,    -1,   179,   140,   263,   179,
      -1,    13,    14,    -1,    -1,    31,    18,    -1,    31,    -1,
     121,    -1,   179,    -1,    -1,    27,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    -1,   136,    -1,   121,    -1,   140,
      -1,   227,    -1,    -1,    -1,    -1,   179,    -1,    -1,   219,
     236,    -1,   136,    -1,   227,    -1,   140,   227,    -1,   245,
      -1,   121,    -1,   236,    -1,    -1,   236,    -1,   254,   255,
     227,    -1,   245,    -1,    -1,   245,   136,   263,   179,   236,
     140,   254,   255,   253,   254,   255,    -1,    31,   245,    -1,
     263,    -1,   121,   263,   227,   179,    19,   254,   255,    -1,
      31,    -1,    -1,   236,    -1,   121,   263,   136,   121,    -1,
      -1,   140,   245,    36,    37,    38,    39,    40,    41,   179,
     136,   254,   255,   136,   140,    -1,   227,   140,    -1,    -1,
     263,    31,    -1,    -1,    -1,   236,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   227,   245,    -1,    -1,    31,    -1,    57,
     179,    -1,   236,   254,   255,    -1,    -1,    65,    -1,    -1,
      68,   245,   263,   179,    -1,    -1,   179,   227,    13,    14,
     254,   255,    -1,    -1,    -1,    -1,   236,   121,    -1,   263,
      -1,    -1,    -1,    -1,    -1,   245,    31,    32,    33,    34,
     121,    -1,   136,    -1,   254,   255,   140,    -1,   227,    -1,
      -1,    -1,    -1,   263,    -1,   136,    -1,   236,    -1,   140,
      -1,   227,    -1,    -1,   227,    -1,   245,    -1,    -1,    -1,
     236,   121,    -1,   236,    -1,   254,   255,    -1,    -1,   245,
     138,    -1,   245,    -1,   263,   179,   136,   121,   254,   255,
     140,   254,   255,    22,    23,    -1,    -1,   263,   179,    -1,
     263,    -1,   136,    -1,    -1,    -1,   140,    36,    37,    38,
      39,    40,    41,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,   179,
      -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   236,    -1,    -1,   179,   227,   205,    -1,    -1,
      -1,   245,    -1,    -1,    -1,   236,    -1,    -1,    -1,   217,
     254,   255,    -1,    -1,   245,    -1,    -1,    -1,    -1,   263,
      -1,    -1,    -1,   254,   255,    -1,   234,   227,    13,    14,
      -1,    -1,   263,    -1,    -1,    -1,   236,    -1,   246,   247,
      -1,    -1,    -1,   227,    -1,   245,    31,    32,    33,    34,
      35,    -1,   236,   261,   254,   255,    -1,    -1,    -1,    -1,
      -1,   245,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,
     254,   255,    -1,    -1,    -1,    -1,    -1,     0,    -1,   263,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    18,    13,    14,    -1,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    31,    32,    33,    34,    35,    42,
      43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      18,    13,    14,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    31,
      32,    33,    34,    35,    42,    43,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    18,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      18,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    18,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    15,    -1,    -1,    -1,    -1,    42,
      43,    22,    23,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    36,    37,    38,    39,    40,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    36,    37,    38,    39,    40,    41,
      22,    23,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    15,    36,    37,    38,    39,    40,    41,
      22,    23,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    15,    36,    37,    38,    39,    40,    41,
      22,    23,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    19,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    18,    -1,    -1,    -1,    22,    23,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    18,    24,    25,    28,    29,    30,    31,
      32,    33,    34,    35,    42,    43,    46,    54,    55,    56,
      57,    59,    60,    61,    62,    63,    67,    68,    69,    70,
      71,    72,    75,    83,    84,    85,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    76,     7,    60,    18,    63,
      35,    46,    62,    90,    18,    60,    18,    62,    17,    18,
      22,    93,    93,    62,    90,    90,    90,     0,    60,    61,
      67,    68,    69,    70,    71,    72,    75,    83,    84,    85,
      87,    88,    89,    90,    94,    95,    15,    35,    22,    23,
      36,    37,    38,    39,    40,    41,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    74,    42,    43,    18,
      18,    59,    35,    63,    97,    35,    18,    18,    27,    35,
      62,    73,    79,    80,    81,    82,    59,    35,    17,    21,
      59,    35,    35,    90,    15,    15,    18,    22,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    79,    79,    61,    22,    35,    15,    22,    35,    62,
      73,    79,    18,    74,    19,    23,    61,    19,    21,    59,
      15,    21,    19,    15,    15,    63,    64,    90,    19,    19,
      62,    22,    90,    90,    19,    74,    19,    19,    19,    35,
      62,    73,    79,    35,    62,    60,    79,    24,    60,    15,
      21,    15,    15,    35,    19,    15,    77,    60,    62,    15,
      15,    35,    19,    74,    19,    19,    19,    59,    18,    86,
      87,    15,    16,    65,    60,    60,    59,    90,    19,    35,
      61,    79,    61,    86,    63,    59,    66,    78,    61,    19,
      19,    19,    35,    20,    59,    59,    96,    15,    65,    90,
      61,    60,    15,    59,    61,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    60,
      61,    62,    62,    62,    62,    62,    62,    63,    63,    63,
      63,    63,    63,    64,    64,    65,    65,    66,    66,    67,
      68,    69,    70,    71,    72,    72,    73,    74,    74,    74,
      74,    74,    74,    76,    77,    78,    75,    79,    79,    80,
      80,    80,    80,    80,    80,    81,    81,    81,    81,    81,
      82,    82,    82,    82,    82,    83,    84,    85,    86,    86,
      87,    87,    87,    87,    87,    87,    88,    89,    90,    90,
      90,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    92,    92,    92,    92,    92,    92,
      92,    93,    93,    93,    94,    94,    96,    95,    97,    97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     1,     1,     2,     2,     2,     1,     1,     2,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     4,     0,     1,     2,    11,
       5,     6,     5,     3,     4,     4,     3,     1,     1,     1,
       1,     1,     1,     0,     0,     0,    10,     1,     3,     3,
       1,     1,     1,     1,     1,     5,     3,     3,     3,     3,
       6,     4,     4,     4,     4,     8,     4,     7,     1,     2,
       6,     4,     5,     5,     3,     4,     7,     9,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     3,     1,     1,     2,     3,     0,    12,     4,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3:
#line 104 "parser2.y"
                                            {;}
#line 1829 "y.tab.c"
    break;

  case 4:
#line 105 "parser2.y"
                                        {;}
#line 1835 "y.tab.c"
    break;

  case 5:
#line 106 "parser2.y"
                                            {;}
#line 1841 "y.tab.c"
    break;

  case 6:
#line 107 "parser2.y"
                                        {;}
#line 1847 "y.tab.c"
    break;

  case 7:
#line 108 "parser2.y"
                                        {;}
#line 1853 "y.tab.c"
    break;

  case 8:
#line 109 "parser2.y"
                                        {;}
#line 1859 "y.tab.c"
    break;

  case 9:
#line 110 "parser2.y"
                                            {;}
#line 1865 "y.tab.c"
    break;

  case 10:
#line 111 "parser2.y"
                                        {;}
#line 1871 "y.tab.c"
    break;

  case 11:
#line 113 "parser2.y"
                    {;}
#line 1877 "y.tab.c"
    break;

  case 12:
#line 114 "parser2.y"
                      {;}
#line 1883 "y.tab.c"
    break;

  case 13:
#line 115 "parser2.y"
                        {;}
#line 1889 "y.tab.c"
    break;

  case 14:
#line 116 "parser2.y"
                         {;}
#line 1895 "y.tab.c"
    break;

  case 15:
#line 117 "parser2.y"
                           {;}
#line 1901 "y.tab.c"
    break;

  case 16:
#line 118 "parser2.y"
                             {;}
#line 1907 "y.tab.c"
    break;

  case 17:
#line 119 "parser2.y"
                        {;}
#line 1913 "y.tab.c"
    break;

  case 18:
#line 120 "parser2.y"
                      {;}
#line 1919 "y.tab.c"
    break;

  case 19:
#line 121 "parser2.y"
                             {;}
#line 1925 "y.tab.c"
    break;

  case 20:
#line 122 "parser2.y"
                           {;}
#line 1931 "y.tab.c"
    break;

  case 21:
#line 123 "parser2.y"
                      {;}
#line 1937 "y.tab.c"
    break;

  case 22:
#line 124 "parser2.y"
                           {;}
#line 1943 "y.tab.c"
    break;

  case 23:
#line 125 "parser2.y"
                             {;}
#line 1949 "y.tab.c"
    break;

  case 24:
#line 126 "parser2.y"
                                 {;}
#line 1955 "y.tab.c"
    break;

  case 25:
#line 127 "parser2.y"
                             {;}
#line 1961 "y.tab.c"
    break;

  case 26:
#line 128 "parser2.y"
                                 {;}
#line 1967 "y.tab.c"
    break;

  case 27:
#line 129 "parser2.y"
                          {;}
#line 1973 "y.tab.c"
    break;

  case 28:
#line 130 "parser2.y"
                               {;}
#line 1979 "y.tab.c"
    break;

  case 29:
#line 131 "parser2.y"
                      {;}
#line 1985 "y.tab.c"
    break;

  case 30:
#line 132 "parser2.y"
                               {;}
#line 1991 "y.tab.c"
    break;

  case 31:
#line 133 "parser2.y"
                         {;}
#line 1997 "y.tab.c"
    break;

  case 32:
#line 134 "parser2.y"
                                  {;}
#line 2003 "y.tab.c"
    break;

  case 33:
#line 135 "parser2.y"
                        {;}
#line 2009 "y.tab.c"
    break;

  case 34:
#line 136 "parser2.y"
                                 {;}
#line 2015 "y.tab.c"
    break;

  case 35:
#line 137 "parser2.y"
                   {;}
#line 2021 "y.tab.c"
    break;

  case 36:
#line 138 "parser2.y"
                           {;}
#line 2027 "y.tab.c"
    break;

  case 37:
#line 139 "parser2.y"
                           {;}
#line 2033 "y.tab.c"
    break;

  case 38:
#line 140 "parser2.y"
                                {;}
#line 2039 "y.tab.c"
    break;

  case 39:
#line 144 "parser2.y"
                                {level += 1; new_block(); printf("id %d , childrenNum %d, parentID %d \n", current->id, current->num_children, current->parent->id);}
#line 2045 "y.tab.c"
    break;

  case 40:
#line 146 "parser2.y"
                {
					if (level == 0) yyerror("start scope first!\n"); 
					else{
					int parID;
					if(current->id == 1)  parID = -1; else parID = current->parent->id;
				 	level -= 1; unused_symbols(); current = current -> parent; printf("id %d , childrenNum %d, parentID %d \n", current->id, current->num_children, parID);
					}
				}
#line 2058 "y.tab.c"
    break;

  case 41:
#line 155 "parser2.y"
                        {;try("",toArray((yyvsp[0].int_num)),"");}
#line 2064 "y.tab.c"
    break;

  case 42:
#line 156 "parser2.y"
                                {;}
#line 2070 "y.tab.c"
    break;

  case 43:
#line 157 "parser2.y"
                              {;printf((yyvsp[0].id));char *ptr = malloc(2*sizeof(char));ptr[0] = (yyvsp[0].id);ptr[1] = '\0';try("",ptr,""); }
#line 2076 "y.tab.c"
    break;

  case 44:
#line 158 "parser2.y"
                                {;try("",(yyvsp[0].string),""); }
#line 2082 "y.tab.c"
    break;

  case 45:
#line 159 "parser2.y"
                         {;}
#line 2088 "y.tab.c"
    break;

  case 46:
#line 160 "parser2.y"
                         {;try("","true",""); }
#line 2094 "y.tab.c"
    break;

  case 59:
#line 180 "parser2.y"
                                                                                                               {printf("function\n");}
#line 2100 "y.tab.c"
    break;

  case 60:
#line 181 "parser2.y"
                                                                    {printf("Function Call\n");}
#line 2106 "y.tab.c"
    break;

  case 61:
#line 182 "parser2.y"
                                                             {printf("constant and assignment\n");}
#line 2112 "y.tab.c"
    break;

  case 62:
#line 183 "parser2.y"
                                                       {printf("declaration and assignment\n");}
#line 2118 "y.tab.c"
    break;

  case 63:
#line 184 "parser2.y"
                                        {declare_symbol((yyvsp[-1].string), (yyvsp[-2].string), 0, "");printf("declaration\n");}
#line 2124 "y.tab.c"
    break;

  case 64:
#line 185 "parser2.y"
                                                    {assign_symbol((yyvsp[-3].string), "int"); printf("definition\n");}
#line 2130 "y.tab.c"
    break;

  case 65:
#line 185 "parser2.y"
                                                                                                                                                 {assign_symbol((yyvsp[-3].string), get_symbol((yyvsp[-1].string)));}
#line 2136 "y.tab.c"
    break;

  case 66:
#line 186 "parser2.y"
                                            {try("",(yyvsp[-2].string),"");printf("logical expression \n");}
#line 2142 "y.tab.c"
    break;

  case 67:
#line 188 "parser2.y"
                   {try("GE","","");}
#line 2148 "y.tab.c"
    break;

  case 68:
#line 188 "parser2.y"
                                           {try("LE","","");}
#line 2154 "y.tab.c"
    break;

  case 69:
#line 188 "parser2.y"
                                                                  {try("G","","");}
#line 2160 "y.tab.c"
    break;

  case 70:
#line 188 "parser2.y"
                                                                                        {try("L","","");}
#line 2166 "y.tab.c"
    break;

  case 71:
#line 188 "parser2.y"
                                                                                                               {try("EE","","");}
#line 2172 "y.tab.c"
    break;

  case 72:
#line 188 "parser2.y"
                                                                                                                                       {try("NE","","");}
#line 2178 "y.tab.c"
    break;

  case 73:
#line 190 "parser2.y"
        {printf("if condition ");}
#line 2184 "y.tab.c"
    break;

  case 74:
#line 190 "parser2.y"
                                                                   {try("if","","");}
#line 2190 "y.tab.c"
    break;

  case 75:
#line 190 "parser2.y"
                                                                                                   {printf("if condition\n");}
#line 2196 "y.tab.c"
    break;

  case 78:
#line 191 "parser2.y"
                                     {printf("expression\n");}
#line 2202 "y.tab.c"
    break;

  case 79:
#line 192 "parser2.y"
                                            {try("",(yyvsp[-2].string),(yyvsp[0].string));}
#line 2208 "y.tab.c"
    break;

  case 84:
#line 192 "parser2.y"
                                                                                                                                    {printf("condition\n");}
#line 2214 "y.tab.c"
    break;

  case 95:
#line 195 "parser2.y"
                                                                            {try("elseif","","");printf("else if condition ");}
#line 2220 "y.tab.c"
    break;

  case 96:
#line 196 "parser2.y"
                                      {printf("else\n");}
#line 2226 "y.tab.c"
    break;

  case 106:
#line 203 "parser2.y"
                                                                           {printf("whileLoop \n"); scopes[level] = "while";}
#line 2232 "y.tab.c"
    break;

  case 107:
#line 205 "parser2.y"
                                                                                              {printf("dowhile \n");}
#line 2238 "y.tab.c"
    break;

  case 133:
#line 238 "parser2.y"
                                        {get_symbol((yyvsp[0].string));}
#line 2244 "y.tab.c"
    break;

  case 136:
#line 247 "parser2.y"
                                                                                             {printf("for loop ");}
#line 2250 "y.tab.c"
    break;


#line 2254 "y.tab.c"

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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
#line 254 "parser2.y"
                     /* C code */

int main (void) {
	/* init symbol table */
	root = malloc(sizeof (node));
	node_counter = 0;
	root-> id = node_counter = 0;
	root-> num_children = 0;
	root-> num_symbols = 0;
	current = root;
	yyparse ( );
	unused_symbols();
	print_symbol_table();
	for(int i=0; i<idx;++i){
		printf(arr[i]);
	}
	return 0;
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

void yyerror (char *s) {fprintf (stderr, "%s\n", s);}

void new_block(){
	node_counter += 1;
	current->children[current->num_children] = malloc(sizeof (node));
	current->children[current->num_children] -> id = node_counter;
	current->children[current->num_children] -> num_children = 0;
	current->children[current->num_children] -> num_symbols = 0;
	current->children[current->num_children] -> parent = current;
	current->num_children += 1;
	current = current->children[current->num_children - 1];	
}
int declare_symbol(char* id, char* type_id, int init, char* type_value){
	for (int i=0; i<current->num_symbols; i++)
		if(strcmp(current->symbols[i].symbol_id, id) == 0){
			char Output[MAX_STR_LEN];
			sprintf(Output, "%s%s%s", "Identifier ", id, " is already declared in this scope!\n");
			yyerror(Output);
			return 0;
		}
	if(init == 1 && strcmp(type_id, type_value)!=0){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%s", "type mismatch in assigning", id, "!\n");
		yyerror(Output);
		return 0;
	}
	//printf("type %s, id %s", type_id, id);
	current->symbols[current->num_symbols].symbol_id = id;
	current->symbols[current->num_symbols].type = type_id;
	current->symbols[current->num_symbols].initialized = init;
	current->num_symbols += 1;
	return 1;
}
node* find_symbol(char* id, int* index){
	*index = -1;
	node* search_node = current;
	while(1){
		for (int i=0; i<search_node->num_symbols; i++){
			if (strcmp(search_node->symbols[i].symbol_id, id) == 0){
				*index = i;
				return search_node;
			}
		}
		if (search_node->id == 0)
			return NULL;
		search_node = search_node->parent;
	}
}
int assign_symbol(char* id, char* data_type){
	int* index = (int*) malloc (sizeof(int));
	node* symbol_node = find_symbol(id, index);
	//printf("index %d", *index);
	if (symbol_node == NULL){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%s", "Undeclared Identifier ", id, "!\n");
		yyerror(Output);
		return 0;
	}
	else if(strcmp(symbol_node->symbols[*index].type, data_type)!= 0){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%S", "type mismatch while assigning ", id, "!\n");
		yyerror(Output);
		return 0;
	}
	else{
		symbol_node->symbols[*index].initialized = 1;
		return 1;
	}
}
char* get_symbol(char* id){
	int* index = (int*) malloc (sizeof(int));
	node* symbol_node = find_symbol(id, index);
	if (symbol_node == NULL){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%s", "Undeclared Identifier ", id, "!\n");
		yyerror(Output);
		return "None";
	}
	else if(symbol_node->symbols[*index].initialized != 1){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%s", "identifier ", id,  " is not yet initialized!\n");
		yyerror(Output);
		return "None";
	}
	else{
		return symbol_node->symbols[*index].type;
	}
}
void unused_symbols(){
	for (int i=0; i<current->num_symbols; i++){
		if (current->symbols[i].initialized != 1)
			printf("Warning: Variable %s is declared but never used!\n", current->symbols[i].symbol_id);
	}
}
int type_conversion(char* id, char* new_type){
	int* index = (int*) malloc (sizeof(int));
	node* symbol_node = find_symbol(id, index);
	if (symbol_node == NULL){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%s", "Undeclared Identifier ", id, "!\n");
		yyerror(Output);
		return 0;
	}
	else{
		symbol_node->symbols[*index].type = new_type;
		return 1;
	}
}
void traverse_node(node* Node, FILE* fp, char* seq){
	for (int i=0; i < Node->num_children; i++){
		char Output[10];
		sprintf(Output, "%s.%d", seq, i, "!\n");
		traverse_node(Node->children[i], fp, Output);
	}
	fprintf(fp, "{\n %s \n", seq);
	for(int i=0; i < Node->num_symbols; i++){
		fprintf(fp, "\t %s %s %d\n", Node->symbols[i].symbol_id, Node->symbols[i].type, Node->symbols[i].initialized);
	}
	fprintf(fp, "}\n");
}
void print_symbol_table(){
	FILE * fp;
   	fp = fopen ("symbol_table.txt","w");
	traverse_node(root, fp, "0");	
   	fclose (fp);
}

char * toArray(int number)
{
    int n = log10(number) + 1;
    int i;
    char *numberArray = calloc(n, sizeof(char));
    for (i = n-1; i >= 0; --i, number /= 10)
    {
        numberArray[i] = (number % 10) + '0';
    }
    return numberArray;
}

double ln(double x)
{
    double old_sum = 0.0;
    double xmlxpl = (x - 1) / (x + 1);
    double xmlxpl_2 = xmlxpl * xmlxpl;
    double denom = 1.0;
    double frac = xmlxpl;
    double term = frac;                 // denom start from 1.0
    double sum = term;

    while ( sum != old_sum )
    {
        old_sum = sum;
        denom += 2.0;
        frac *= xmlxpl_2;
        sum += frac / denom;
    }
    return 2.0 * sum;
}

double log10( double x ) {
    return ln(x) / LN10;    
}
