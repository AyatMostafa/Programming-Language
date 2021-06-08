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
#line 1 "parser.y"

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
int  nops =0;
char* syntax_error_handler(int);

#line 112 "y.tab.c"

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
#line 45 "parser.y"
int int_num; char id; float float_num; char* string;

#line 271 "y.tab.c"

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
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
#define YYFINAL  78
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   970

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  163
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  294

#define YYUNDEFTOK  2
#define YYMAXUTOK   307


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
       2,     2,     2,    56,     2,     2,     2,    51,    52,     2,
       2,     2,    49,    48,     2,    47,     2,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    54,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,    53,    64,    57,     2,     2,     2,
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
      45,    46,    55,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   114,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   157,   158,   164,   177,   178,   179,   180,
     181,   182,   185,   186,   187,   188,   189,   190,   192,   192,
     197,   199,   199,   204,   206,   207,   210,   210,   229,   239,
     242,   251,   259,   262,   286,   287,   290,   301,   312,   315,
     317,   323,   336,   351,   352,   352,   352,   352,   352,   352,
     354,   354,   355,   355,   356,   356,   356,   356,   356,   356,
     357,   357,   357,   357,   357,   358,   358,   358,   358,   358,
     359,   359,   360,   362,   362,   364,   364,   365,   365,   366,
     366,   366,   369,   369,   369,   370,   372,   372,   376,   376,
     376,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   394,   395,   396,   397,   398,   399,
     402,   403,   413,   427,   440,   451,   461,   472,   488,   488,
     494,   494,   498,   499
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
  "'&'", "'|'", "'^'", "EQ", "'!'", "'~'", "U_MINUM", "PRE_INC", "PRE_DEC",
  "SUF_INC", "SUF_DEC", "'{'", "'}'", "$accept", "line", "block",
  "start_block", "end_block", "term", "type", "argList", "$@1", "cont",
  "$@2", "stmtlist", "func_p1", "$@3", "func_p2", "many_identifiers",
  "func_call_p1", "func_call_p2", "constant", "variable", "declaration",
  "typeConversion", "definition", "logical_exp", "comparison_OP", "if",
  "$@4", "ifExpr", "cond", "bracketBeforeAndAfter", "notBefore", "elseIf",
  "$@5", "else", "IfFiller", "switch", "$@6", "cases", "case", "$@7",
  "$@8", "while", "$@9", "$@10", "whileCont1", "dowhile", "$@11",
  "expression", "expression1", "expression2", "expression3", "single_val",
  "for", "$@12", "for_initi_stat", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,    45,    43,    42,
      47,    37,    38,   124,    94,   302,    33,   126,   303,   304,
     305,   306,   307,   123,   125
};
# endif

#define YYPACT_NINF (-130)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-52)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     659,  -130,  -130,  -130,  -130,    23,     5,    31,  -130,  -130,
     386,    37,    38,   222,  -130,   -50,    42,    40,    51,    52,
      56,    -4,   543,   543,   296,   222,  -130,   290,  -130,   413,
      59,     1,   -50,  -130,    -8,  -130,  -130,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,  -130,  -130,   839,  -130,  -130,
     -27,  -130,  -130,   901,    68,  -130,   659,   398,    41,  -130,
    -130,  -130,  -130,  -130,  -130,  -130,   222,   783,    69,   659,
      54,  -130,   419,  -130,  -130,    77,   297,   297,  -130,  -130,
     413,   -50,  -130,    -8,  -130,  -130,  -130,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,  -130,   839,  -130,  -130,   475,
    -130,    63,    57,   659,    80,    84,    85,   222,   222,  -130,
    -130,  -130,  -130,  -130,  -130,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,  -130,  -130,  -130,  -130,
     910,    83,  -130,  -130,  -130,  -130,   557,  -130,  -130,    87,
      24,  -130,  -130,   901,    88,    79,  -130,  -130,   901,    94,
    -130,   901,   659,   475,  -130,   101,    -8,   106,   686,  -130,
    -130,  -130,   103,  -130,   386,   419,   351,  -130,    89,   108,
     839,   839,   859,   859,   474,   474,   297,   297,   297,   839,
     839,   839,   839,   495,   109,   111,   129,   934,   554,  -130,
    -130,  -130,   901,   133,   132,   149,   222,  -130,   659,   147,
     157,  -130,  -130,   164,   146,   168,   174,   706,   222,  -130,
    -130,  -130,  -130,   604,  -130,  -130,  -130,   609,   172,   180,
     181,  -130,  -130,   -50,  -130,  -130,   222,   726,   184,   165,
     -50,  -130,   189,  -130,  -130,  -130,   746,   188,  -130,   646,
    -130,  -130,  -130,  -130,   -50,   819,  -130,   -50,   901,    27,
     386,  -130,  -130,   144,  -130,   190,  -130,  -130,   659,  -130,
    -130,  -130,   193,   144,    27,   176,  -130,  -130,  -130,   -50,
     475,   200,    49,   659,  -130,  -130,   189,   659,  -130,   206,
    -130,   537,  -130,   475,  -130,   205,   208,  -130,  -130,   659,
    -130,   598,   209,  -130
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    53,    54,    52,    57,     0,     0,     0,    55,    56,
       0,   155,   156,     0,   122,     0,     0,   151,   153,   152,
     154,   157,     0,     0,     0,     0,    44,     0,     9,     7,
       0,     0,    33,    35,    37,    39,    25,    27,    29,    41,
      31,    11,    13,    12,    17,     3,     5,    21,   128,   129,
     130,    23,    19,     0,     0,   112,     2,     0,     0,   155,
     156,   151,   153,   152,   154,   157,     0,     0,     0,     2,
       0,    73,     0,   144,   146,     0,   149,   148,     1,    10,
       8,    34,    36,    38,    40,    26,    28,    30,    42,    32,
      14,    16,    15,    18,     4,     6,    22,    24,    20,     0,
     158,     0,     0,     2,     0,    70,     0,     0,     0,    84,
      85,    86,    87,    88,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   145,   147,    50,    51,
       0,     0,    46,    47,    48,    49,    97,    96,    95,     0,
      92,    98,    99,     0,     0,     0,   162,   163,     0,     0,
     150,     0,    64,     0,   115,   157,     0,     0,     0,   159,
      45,    43,     0,    79,    60,     0,     0,    75,    72,     0,
     141,   142,   136,   137,   132,   131,   133,   134,   135,   138,
     139,   140,   143,    97,    96,    95,     0,     0,     0,    90,
     113,   114,     0,     0,     0,     0,     0,   123,    65,     0,
       0,    82,    81,     0,     0,     0,     0,     0,     0,    69,
      71,    74,   103,     0,   102,   101,   104,    97,    96,    95,
       0,    94,    83,     0,    93,   110,     0,     0,     0,     0,
       0,    80,    63,    66,    78,    77,     0,    94,   108,     0,
     107,   106,   109,    91,     0,     0,    76,     0,     0,     0,
       0,    58,    67,     0,   100,    94,   111,   160,     2,   124,
     126,   119,     0,     0,     0,     0,    59,    68,   105,     0,
       0,     0,     0,     2,   116,   118,    63,     2,   125,     0,
     120,     0,    61,     0,   127,     0,     0,    62,   161,     2,
     117,     0,     0,   121
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,     0,     3,    -5,    22,   -19,    -7,  -130,  -130,   -48,
    -130,   -99,    -1,  -130,     4,    73,    -3,    -2,     6,   -21,
       8,    13,    -6,  -122,  -129,    15,  -130,  -128,  -130,  -130,
    -130,    18,  -130,    34,  -130,    46,  -130,   -34,  -130,  -130,
    -130,    62,  -130,  -130,  -130,    81,  -130,    19,  -130,  -130,
      16,    82,    86,  -130,  -130
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   152,    28,    29,   161,    30,    31,   205,   266,   251,
     287,   153,    32,   252,    33,   106,    34,    35,    36,    37,
      38,    39,    40,   138,   125,    41,   223,   139,   140,   141,
     142,    42,   244,    43,   192,    44,   200,   263,   264,   272,
     285,    45,    68,   228,   259,    46,   271,    47,    48,    49,
      50,    51,    52,   269,   148
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,    56,   186,    58,   166,    75,    86,   188,   185,    55,
      69,   104,    54,    26,    71,   193,   126,   127,    72,   101,
     195,    89,    80,   197,    83,    84,    81,   103,   105,    99,
      79,    82,    67,    85,   137,    87,   146,   102,    73,    74,
      88,    53,    90,    76,    77,    91,    96,   190,   191,    57,
     145,   147,   -50,   -51,   213,   -46,    99,   261,   262,   220,
      70,    92,   128,   129,   224,   219,   -47,   -48,    26,   156,
     157,   -49,   163,    93,   100,   164,   103,   149,    86,   165,
      99,   132,   133,   134,   135,    76,   143,   151,   239,    94,
     154,   158,   159,    89,    80,   167,    83,    84,    81,   162,
     168,   187,    79,    82,   169,    85,   189,    87,    95,    97,
      72,   184,    88,    98,    90,   194,   196,    91,    96,    71,
     260,   201,   203,   211,   137,   105,   170,   171,   214,   137,
     215,    86,   137,    92,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,    93,    89,    80,   216,    83,
      84,    81,   225,   198,   165,    79,    82,   204,    85,   270,
      87,    94,   156,   206,   226,    88,   198,    90,   218,   222,
      91,    96,   229,   137,   281,   199,   230,    86,   283,   231,
      95,    97,   232,   248,   207,    98,    92,   233,   209,   234,
     291,   240,    89,    80,   222,    83,    84,    81,    93,   241,
     242,    79,    82,   247,    85,   250,    87,   254,   160,   268,
     273,    88,   276,    90,    94,   227,    91,    96,    56,   279,
     222,   284,   289,   290,   293,   249,   243,   236,   282,   137,
     275,     0,    92,    95,    97,    59,    60,     0,    98,    56,
      13,   210,   258,   265,    93,   245,     0,   256,     0,     0,
       0,     0,     0,   280,    61,    62,    63,    64,    65,     0,
      94,     0,     0,     0,   277,    22,    23,     0,     0,    66,
     198,     0,     0,     0,     0,   267,     0,     0,    25,    95,
      97,   198,     0,   198,    98,   274,     0,     0,     0,     0,
      78,   198,   278,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,   288,     0,     0,    13,    11,
      12,     0,     0,     0,    13,    14,    15,     0,     0,    16,
     107,   108,    17,    18,    19,    20,    21,     0,    17,    18,
      19,    20,    65,    22,    23,     0,     0,    24,   113,    22,
      23,     0,     0,    66,     0,     0,    25,     0,     0,   122,
     123,   124,    25,    26,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,    13,
       0,   208,     0,     0,     0,     0,    14,    15,     0,     0,
      16,     0,     0,    17,    18,    19,    20,    21,     0,     1,
       2,     3,     4,     0,    22,    23,     8,     9,    24,     0,
       0,     1,     2,     3,     4,     0,     0,    25,     8,     9,
       0,     0,     0,     0,    26,   160,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,    59,    60,   144,     0,     0,    13,    14,    15,
       0,     0,    16,     0,     0,    17,    18,    19,    20,    21,
       0,    61,    62,    63,    64,   155,    22,    23,     0,     0,
      24,     0,    22,    23,     0,     0,    66,     0,     0,    25,
       0,     0,     0,     0,     0,    25,    26,    -2,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,     0,   107,   108,     0,
      14,    15,     0,     0,    16,     0,     0,    17,    18,    19,
      20,    21,     0,     0,   212,   113,     0,     0,    22,    23,
       0,     0,    24,   119,   120,   121,   122,   123,   124,     0,
       0,    25,   109,   110,   111,   112,   113,   114,    26,   160,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,     0,     0,     0,    13,    59,    60,   286,     0,
       0,    13,    14,    15,     0,     0,    16,   128,   129,    17,
      18,    19,    20,    21,     0,    61,    62,    63,    64,    65,
      22,    23,     0,     0,    24,     0,   132,   133,   134,   135,
     221,     0,     0,    25,   109,   110,   111,   112,   113,   114,
      26,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,   128,   129,   292,
       0,     0,     0,    14,    15,     0,     0,    16,   238,     0,
      17,    18,    19,    20,    21,     0,   132,   133,   134,   135,
     237,    22,    23,     0,     0,    24,   109,   110,   111,   112,
     113,   114,     0,     0,    25,     0,     0,     0,     0,   128,
     129,    26,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,     0,     0,     0,    13,   132,   133,
     134,   135,   255,     0,    14,    15,     0,     0,    16,     0,
       0,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,   202,    22,    23,     0,     0,    24,     0,     0,   107,
     108,     0,     0,     0,     0,    25,     0,     0,     0,     0,
       0,   235,    26,   109,   110,   111,   112,   113,   114,   107,
     108,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   246,     0,   109,   110,   111,   112,   113,   114,   107,
     108,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   253,     0,   109,   110,   111,   112,   113,   114,   107,
     108,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,     0,     0,   109,   110,   111,   112,   113,   114,     0,
       0,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   150,     0,     0,     0,     0,   107,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     109,   110,   111,   112,   113,   114,     0,     0,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   257,     0,
       0,     0,   107,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,   110,   111,   112,
     113,   114,   107,   108,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,     0,     0,   109,   110,   111,   112,
     113,   114,   107,   108,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,     0,   117,   118,   119,   120,
     121,   122,   123,   124,   128,   129,     0,     0,     0,   130,
       0,     0,     0,   128,   129,     0,     0,     0,   130,   131,
       0,     0,     0,   132,   133,   134,   135,   136,   131,     0,
       0,     0,   132,   133,   134,   135,   183,   128,   129,     0,
       0,     0,   130,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   131,     0,     0,     0,   132,   133,   134,   135,
     217
};

static const yytype_int16 yycheck[] =
{
       0,     6,   130,    10,   103,    24,    27,   136,   130,     6,
      15,    19,     7,    63,    18,   143,    43,    44,    22,    18,
     148,    27,    27,   151,    27,    27,    27,    32,    36,    29,
      27,    27,    13,    27,    53,    27,    57,    36,    22,    23,
      27,    18,    27,    24,    25,    27,    27,    23,    24,    18,
      57,    57,    15,    15,   183,    15,    56,    30,    31,   187,
      18,    27,    13,    14,   192,   187,    15,    15,    63,    72,
      72,    15,    15,    27,    15,    18,    81,    36,    99,    22,
      80,    32,    33,    34,    35,    66,    18,    18,   217,    27,
      36,    72,    15,    99,    99,    15,    99,    99,    99,    36,
      16,    18,    99,    99,    19,    99,    19,    99,    27,    27,
      22,   130,    99,    27,    99,    36,    22,    99,    99,    18,
     248,    15,    19,    15,   143,    36,   107,   108,    19,   148,
      19,   152,   151,    99,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,    99,   152,   152,    19,   152,
     152,   152,    19,   153,    22,   152,   152,   164,   152,   258,
     152,    99,   165,   165,    15,   152,   166,   152,   187,   188,
     152,   152,    25,   192,   273,   153,    19,   198,   277,    15,
      99,    99,    36,    18,   165,    99,   152,    19,   166,    15,
     289,    19,   198,   198,   213,   198,   198,   198,   152,    19,
      19,   198,   198,    19,   198,    16,   198,    19,    64,    19,
      17,   198,    36,   198,   152,   196,   198,   198,   223,    19,
     239,    15,    17,    15,    15,   230,   223,   208,   276,   248,
     264,    -1,   198,   152,   152,    13,    14,    -1,   152,   244,
      18,   168,   247,   250,   198,   226,    -1,   244,    -1,    -1,
      -1,    -1,    -1,   272,    32,    33,    34,    35,    36,    -1,
     198,    -1,    -1,    -1,   269,    43,    44,    -1,    -1,    47,
     270,    -1,    -1,    -1,    -1,   253,    -1,    -1,    56,   198,
     198,   281,    -1,   283,   198,   263,    -1,    -1,    -1,    -1,
       0,   291,   270,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   283,    -1,    -1,    18,    13,
      14,    -1,    -1,    -1,    18,    25,    26,    -1,    -1,    29,
      23,    24,    32,    33,    34,    35,    36,    -1,    32,    33,
      34,    35,    36,    43,    44,    -1,    -1,    47,    41,    43,
      44,    -1,    -1,    47,    -1,    -1,    56,    -1,    -1,    52,
      53,    54,    56,    63,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    18,
      -1,    20,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      29,    -1,    -1,    32,    33,    34,    35,    36,    -1,     3,
       4,     5,     6,    -1,    43,    44,    10,    11,    47,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    56,    10,    11,
      -1,    -1,    -1,    -1,    63,    64,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    18,    13,    14,    36,    -1,    -1,    18,    25,    26,
      -1,    -1,    29,    -1,    -1,    32,    33,    34,    35,    36,
      -1,    32,    33,    34,    35,    36,    43,    44,    -1,    -1,
      47,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    56,    63,    64,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    23,    24,    -1,
      25,    26,    -1,    -1,    29,    -1,    -1,    32,    33,    34,
      35,    36,    -1,    -1,    19,    41,    -1,    -1,    43,    44,
      -1,    -1,    47,    49,    50,    51,    52,    53,    54,    -1,
      -1,    56,    37,    38,    39,    40,    41,    42,    63,    64,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    18,    13,    14,    21,    -1,
      -1,    18,    25,    26,    -1,    -1,    29,    13,    14,    32,
      33,    34,    35,    36,    -1,    32,    33,    34,    35,    36,
      43,    44,    -1,    -1,    47,    -1,    32,    33,    34,    35,
      36,    -1,    -1,    56,    37,    38,    39,    40,    41,    42,
      63,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    18,    13,    14,    21,
      -1,    -1,    -1,    25,    26,    -1,    -1,    29,    19,    -1,
      32,    33,    34,    35,    36,    -1,    32,    33,    34,    35,
      36,    43,    44,    -1,    -1,    47,    37,    38,    39,    40,
      41,    42,    -1,    -1,    56,    -1,    -1,    -1,    -1,    13,
      14,    63,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    18,    32,    33,
      34,    35,    36,    -1,    25,    26,    -1,    -1,    29,    -1,
      -1,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    15,    43,    44,    -1,    -1,    47,    -1,    -1,    23,
      24,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    15,    63,    37,    38,    39,    40,    41,    42,    23,
      24,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    15,    -1,    37,    38,    39,    40,    41,    42,    23,
      24,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    15,    -1,    37,    38,    39,    40,    41,    42,    23,
      24,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    37,    38,    39,    40,    41,    42,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    18,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    39,    40,    41,    42,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    19,    -1,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    42,    23,    24,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    37,    38,    39,    40,
      41,    42,    23,    24,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    13,    14,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    13,    14,    -1,    -1,    -1,    18,    28,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    13,    14,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    18,    25,    26,    29,    32,    33,    34,
      35,    36,    43,    44,    47,    56,    63,    66,    67,    68,
      70,    71,    77,    79,    81,    82,    83,    84,    85,    86,
      87,    90,    96,    98,   100,   106,   110,   112,   113,   114,
     115,   116,   117,    18,     7,    67,    68,    18,    71,    13,
      14,    32,    33,    34,    35,    36,    47,   112,   107,    68,
      18,    18,    22,   115,   115,    70,   112,   112,     0,    67,
      68,    77,    79,    81,    82,    83,    84,    85,    86,    87,
      90,    96,    98,   100,   106,   110,   112,   116,   117,    66,
      15,    18,    36,    68,    19,    36,    80,    23,    24,    37,
      38,    39,    40,    41,    42,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    89,    43,    44,    13,    14,
      18,    28,    32,    33,    34,    35,    36,    70,    88,    92,
      93,    94,    95,    18,    36,    71,    84,    87,   119,    36,
      18,    18,    66,    76,    36,    36,    81,    82,   112,    15,
      64,    69,    36,    15,    18,    22,    76,    15,    16,    19,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,    36,    70,    88,    92,    18,    89,    19,
      23,    24,    99,    92,    36,    92,    22,    92,    66,    69,
     101,    15,    15,    19,    71,    72,    82,   112,    20,    69,
      80,    15,    19,    89,    19,    19,    19,    36,    70,    88,
      92,    36,    70,    91,    92,    19,    15,   112,   108,    25,
      19,    15,    36,    19,    15,    15,   112,    36,    19,    89,
      19,    19,    19,    67,    97,   112,    15,    19,    18,    68,
      16,    74,    78,    15,    19,    36,    67,    19,    68,   109,
      92,    30,    31,   102,   103,    71,    73,    69,    19,   118,
      76,   111,   104,    17,    69,   102,    36,    68,    69,    19,
      70,    76,    74,    76,    15,   105,    21,    75,    69,    17,
      15,    76,    21,    15
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    65,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    67,    68,    69,    70,    70,    70,    70,
      70,    70,    71,    71,    71,    71,    71,    71,    73,    72,
      72,    75,    74,    74,    76,    76,    78,    77,    79,    79,
      80,    80,    80,    81,    82,    82,    83,    84,    84,    85,
      86,    87,    87,    88,    89,    89,    89,    89,    89,    89,
      91,    90,    92,    92,    93,    93,    93,    93,    93,    93,
      94,    94,    94,    94,    94,    95,    95,    95,    95,    95,
      97,    96,    98,    99,    99,   101,   100,   102,   102,   104,
     105,   103,   107,   108,   106,   109,   111,   110,   112,   112,
     112,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   114,   114,   114,   114,   114,   114,
     115,   115,   115,   115,   115,   115,   115,   115,   116,   116,
     118,   117,   119,   119
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     1,     1,     2,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       0,     0,     5,     0,     1,     2,     0,     6,     7,     4,
       1,     3,     0,     2,     4,     3,     6,     5,     5,     3,
       5,     4,     4,     3,     1,     1,     1,     1,     1,     1,
       0,     6,     1,     3,     3,     1,     1,     1,     1,     1,
       5,     3,     3,     3,     3,     6,     4,     4,     4,     4,
       0,     7,     2,     1,     1,     0,     8,     5,     2,     0,
       0,     8,     0,     0,     7,     3,     0,    10,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       0,    11,     1,     1
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
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3:
#line 115 "parser.y"
                                            {;}
#line 1911 "y.tab.c"
    break;

  case 4:
#line 116 "parser.y"
                                        {;}
#line 1917 "y.tab.c"
    break;

  case 5:
#line 117 "parser.y"
                                            {;}
#line 1923 "y.tab.c"
    break;

  case 6:
#line 118 "parser.y"
                                        {;}
#line 1929 "y.tab.c"
    break;

  case 7:
#line 119 "parser.y"
                                        {;}
#line 1935 "y.tab.c"
    break;

  case 8:
#line 120 "parser.y"
                                        {;}
#line 1941 "y.tab.c"
    break;

  case 9:
#line 121 "parser.y"
                                                {;}
#line 1947 "y.tab.c"
    break;

  case 10:
#line 122 "parser.y"
                                                {;}
#line 1953 "y.tab.c"
    break;

  case 11:
#line 124 "parser.y"
                    {;}
#line 1959 "y.tab.c"
    break;

  case 12:
#line 125 "parser.y"
                      {;}
#line 1965 "y.tab.c"
    break;

  case 13:
#line 126 "parser.y"
                        {;}
#line 1971 "y.tab.c"
    break;

  case 14:
#line 127 "parser.y"
                         {;}
#line 1977 "y.tab.c"
    break;

  case 15:
#line 128 "parser.y"
                           {;}
#line 1983 "y.tab.c"
    break;

  case 16:
#line 129 "parser.y"
                             {;}
#line 1989 "y.tab.c"
    break;

  case 17:
#line 130 "parser.y"
                        {;}
#line 1995 "y.tab.c"
    break;

  case 18:
#line 131 "parser.y"
                             {;}
#line 2001 "y.tab.c"
    break;

  case 19:
#line 132 "parser.y"
                      {;}
#line 2007 "y.tab.c"
    break;

  case 20:
#line 133 "parser.y"
                           {;}
#line 2013 "y.tab.c"
    break;

  case 21:
#line 134 "parser.y"
                             {;}
#line 2019 "y.tab.c"
    break;

  case 22:
#line 135 "parser.y"
                                 {;}
#line 2025 "y.tab.c"
    break;

  case 23:
#line 136 "parser.y"
                             {;}
#line 2031 "y.tab.c"
    break;

  case 24:
#line 137 "parser.y"
                                 {;}
#line 2037 "y.tab.c"
    break;

  case 25:
#line 138 "parser.y"
                          {;}
#line 2043 "y.tab.c"
    break;

  case 26:
#line 139 "parser.y"
                               {;}
#line 2049 "y.tab.c"
    break;

  case 27:
#line 140 "parser.y"
                      {;}
#line 2055 "y.tab.c"
    break;

  case 28:
#line 141 "parser.y"
                               {;}
#line 2061 "y.tab.c"
    break;

  case 29:
#line 142 "parser.y"
                         {;}
#line 2067 "y.tab.c"
    break;

  case 30:
#line 143 "parser.y"
                                  {;}
#line 2073 "y.tab.c"
    break;

  case 31:
#line 144 "parser.y"
                        {;}
#line 2079 "y.tab.c"
    break;

  case 32:
#line 145 "parser.y"
                                 {;}
#line 2085 "y.tab.c"
    break;

  case 33:
#line 146 "parser.y"
                      {;}
#line 2091 "y.tab.c"
    break;

  case 34:
#line 147 "parser.y"
                              {;}
#line 2097 "y.tab.c"
    break;

  case 35:
#line 148 "parser.y"
                          {;}
#line 2103 "y.tab.c"
    break;

  case 36:
#line 149 "parser.y"
                              {;}
#line 2109 "y.tab.c"
    break;

  case 37:
#line 150 "parser.y"
                              {;}
#line 2115 "y.tab.c"
    break;

  case 38:
#line 151 "parser.y"
                                   {;}
#line 2121 "y.tab.c"
    break;

  case 39:
#line 152 "parser.y"
                              {;}
#line 2127 "y.tab.c"
    break;

  case 40:
#line 153 "parser.y"
                                   {;}
#line 2133 "y.tab.c"
    break;

  case 41:
#line 154 "parser.y"
                               {;}
#line 2139 "y.tab.c"
    break;

  case 42:
#line 155 "parser.y"
                                    {;}
#line 2145 "y.tab.c"
    break;

  case 43:
#line 157 "parser.y"
                                  {;}
#line 2151 "y.tab.c"
    break;

  case 44:
#line 158 "parser.y"
                {
					level += 1;
					new_block();
				 	//printf("id %d , childrenNum %d, parentID %d \n", current->id, current->num_children, current->parent->id);
				}
#line 2161 "y.tab.c"
    break;

  case 45:
#line 164 "parser.y"
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
#line 2178 "y.tab.c"
    break;

  case 46:
#line 177 "parser.y"
                        {; printf(toArray((yyvsp[0].int_num)));try("",toArray((yyvsp[0].int_num)),"");termType="int";}
#line 2184 "y.tab.c"
    break;

  case 47:
#line 178 "parser.y"
                                {; char buf[1000];gcvt((yyvsp[0].float_num), 6, buf);try("",buf,"");termType="float";}
#line 2190 "y.tab.c"
    break;

  case 48:
#line 179 "parser.y"
                              {;printf('%c',(yyvsp[0].id));/*try("",ptr,""); termType="char";*/}
#line 2196 "y.tab.c"
    break;

  case 49:
#line 180 "parser.y"
                                {;try("",(yyvsp[0].string),""); termType="string";}
#line 2202 "y.tab.c"
    break;

  case 50:
#line 181 "parser.y"
                         {;try("","false","");termType="false";}
#line 2208 "y.tab.c"
    break;

  case 51:
#line 182 "parser.y"
                         {;try("","true",""); termType="true";}
#line 2214 "y.tab.c"
    break;

  case 58:
#line 192 "parser.y"
                                {try("Args",(yyvsp[-1].string),"");}
#line 2220 "y.tab.c"
    break;

  case 59:
#line 192 "parser.y"
                                                    {
								cur_func_args[cur_func_args_num] = (yyvsp[-3].string);
								cur_func_names[cur_func_args_num] = (yyvsp[-2].string);
								cur_func_args_num += 1;
								}
#line 2230 "y.tab.c"
    break;

  case 61:
#line 199 "parser.y"
                                 {try("Args",(yyvsp[-1].string),"");}
#line 2236 "y.tab.c"
    break;

  case 62:
#line 199 "parser.y"
                                                     {
								cur_func_args[cur_func_args_num] = (yyvsp[-3].string);
								cur_func_names[cur_func_args_num] = (yyvsp[-2].string);
								cur_func_args_num += 1;
								}
#line 2246 "y.tab.c"
    break;

  case 66:
#line 210 "parser.y"
                                                          {try("PROC",(yyvsp[-3].string),"");}
#line 2252 "y.tab.c"
    break;

  case 67:
#line 211 "parser.y"
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
#line 2274 "y.tab.c"
    break;

  case 68:
#line 230 "parser.y"
 {
	 if( strcmp(retType, gType) != 0){
		 yyerror_semantic("return value type does not match the function type");
		 printf("return value %s type does not match the function type %s ",retType,gType);
	 }
	 try("RET","",""); 
	 printf("function\n");
	 gType=" ";
	 nops=0;}
#line 2288 "y.tab.c"
    break;

  case 70:
#line 242 "parser.y"
                                           {
					if(check_func(get_symbol((yyvsp[0].string)))==0) {
						return;
					}
					else {
						try("params",(yyvsp[0].string),"");
					}
					
				}
#line 2302 "y.tab.c"
    break;

  case 71:
#line 251 "parser.y"
                                                                   {
					if(check_func(get_symbol((yyvsp[-2].string)))==0){
						return;
					}
					else{
						try("params",(yyvsp[-2].string),"");
					} 
				}
#line 2315 "y.tab.c"
    break;

  case 73:
#line 263 "parser.y"
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
#line 2343 "y.tab.c"
    break;

  case 74:
#line 286 "parser.y"
                                                                   {func_call_handler();}
#line 2349 "y.tab.c"
    break;

  case 75:
#line 287 "parser.y"
                                                              {func_call_handler();}
#line 2355 "y.tab.c"
    break;

  case 76:
#line 290 "parser.y"
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
#line 2371 "y.tab.c"
    break;

  case 77:
#line 302 "parser.y"
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
#line 2386 "y.tab.c"
    break;

  case 78:
#line 312 "parser.y"
                                                                       {
				assign_to_func(func_id, (yyvsp[-3].string));
			}
#line 2394 "y.tab.c"
    break;

  case 79:
#line 315 "parser.y"
                                        {declare_symbol((yyvsp[-1].string), (yyvsp[-2].string), 0, "", 0);}
#line 2400 "y.tab.c"
    break;

  case 80:
#line 317 "parser.y"
                                                                   {
	try("type_conv",(yyvsp[-2].string),"");
	type_conversion((yyvsp[-2].string), (yyvsp[-4].string));
	
}
#line 2410 "y.tab.c"
    break;

  case 81:
#line 324 "parser.y"
                                {
					int r = assign_symbol((yyvsp[-3].string), gType);
					if(r==1){ 
						if(nops == 1)
						{
							try("Single" , (yyvsp[-1].string), "");
						}		
						try("POP", (yyvsp[-2].string), ""); 
						gType = " ";
						nops = 0;
					}
				}
#line 2427 "y.tab.c"
    break;

  case 82:
#line 336 "parser.y"
                                                                            {
				  assign_to_func(func_id, (yyvsp[-3].string));
			}
#line 2435 "y.tab.c"
    break;

  case 83:
#line 351 "parser.y"
                                            {if(strcmp(get_symbol((yyvsp[-2].string)),termType)!=0){yyerror_semantic("Different types of operands \n");}try("",(yyvsp[-2].string),"");}
#line 2441 "y.tab.c"
    break;

  case 84:
#line 352 "parser.y"
                   {try("GE","","");}
#line 2447 "y.tab.c"
    break;

  case 85:
#line 352 "parser.y"
                                           {try("LE","","");}
#line 2453 "y.tab.c"
    break;

  case 86:
#line 352 "parser.y"
                                                                  {try("G","","");}
#line 2459 "y.tab.c"
    break;

  case 87:
#line 352 "parser.y"
                                                                                        {try("L","","");}
#line 2465 "y.tab.c"
    break;

  case 88:
#line 352 "parser.y"
                                                                                                               {try("EE","","");}
#line 2471 "y.tab.c"
    break;

  case 89:
#line 352 "parser.y"
                                                                                                                                       {try("NE","","");}
#line 2477 "y.tab.c"
    break;

  case 90:
#line 354 "parser.y"
                                        {try("if","","");}
#line 2483 "y.tab.c"
    break;

  case 91:
#line 354 "parser.y"
                                                                 {try("endIf","","");}
#line 2489 "y.tab.c"
    break;

  case 94:
#line 356 "parser.y"
                                            {if(strcmp(get_symbol((yyvsp[-2].string)),get_symbol((yyvsp[0].string)))!=0){yyerror_semantic("Different types of operands \n");}try("",(yyvsp[-2].string),(yyvsp[0].string));}
#line 2495 "y.tab.c"
    break;

  case 100:
#line 357 "parser.y"
                                                                                     {if(strcmp(get_symbol((yyvsp[-3].string)),get_symbol((yyvsp[-1].string)))!=0){yyerror_semantic("Different types of operands \n");}try("",(yyvsp[-3].string),(yyvsp[-1].string));}
#line 2501 "y.tab.c"
    break;

  case 103:
#line 357 "parser.y"
                                                                                                                                                                                                                                                                                                                   {try("",(yyvsp[-1].string),"");}
#line 2507 "y.tab.c"
    break;

  case 105:
#line 358 "parser.y"
                                                                             {if(strcmp(get_symbol((yyvsp[-3].string)),get_symbol((yyvsp[-1].string)))!=0){yyerror_semantic("Different types of operands \n");}try((yyvsp[-3].string),(yyvsp[-1].string),"not");}
#line 2513 "y.tab.c"
    break;

  case 106:
#line 358 "parser.y"
                                                                                                                                                                                                                                            {try("not","","");}
#line 2519 "y.tab.c"
    break;

  case 107:
#line 358 "parser.y"
                                                                                                                                                                                                                                                                                                    {try("not","","");}
#line 2525 "y.tab.c"
    break;

  case 108:
#line 358 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                  {try("not",(yyvsp[-1].string),"");}
#line 2531 "y.tab.c"
    break;

  case 109:
#line 358 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                                                                           {try("not","","");}
#line 2537 "y.tab.c"
    break;

  case 110:
#line 359 "parser.y"
                                                 {try("elseif","","");}
#line 2543 "y.tab.c"
    break;

  case 111:
#line 359 "parser.y"
                                                                              {try("endIf","","");}
#line 2549 "y.tab.c"
    break;

  case 113:
#line 362 "parser.y"
                  {try("AndAnd","","");}
#line 2555 "y.tab.c"
    break;

  case 114:
#line 362 "parser.y"
                                               {try("OrOr","","");}
#line 2561 "y.tab.c"
    break;

  case 115:
#line 364 "parser.y"
                                       {switchVariableType=get_symbol((yyvsp[0].string));try("switch",(yyvsp[0].string),"");}
#line 2567 "y.tab.c"
    break;

  case 116:
#line 364 "parser.y"
                                                                                                                                         {try("endSwitch","","");}
#line 2573 "y.tab.c"
    break;

  case 119:
#line 366 "parser.y"
            {try("case","","");}
#line 2579 "y.tab.c"
    break;

  case 120:
#line 366 "parser.y"
                                      {if(strcmp(switchVariableType,termType)!=0){yyerror_semantic("Different types of operands \n");}}
#line 2585 "y.tab.c"
    break;

  case 121:
#line 366 "parser.y"
                                                                                                                                                                       {try("endCase","","");}
#line 2591 "y.tab.c"
    break;

  case 122:
#line 369 "parser.y"
                {try("startWhile","","");}
#line 2597 "y.tab.c"
    break;

  case 123:
#line 369 "parser.y"
                                                              {try("while","","");}
#line 2603 "y.tab.c"
    break;

  case 125:
#line 370 "parser.y"
                                           {try("endWhile","","");}
#line 2609 "y.tab.c"
    break;

  case 126:
#line 372 "parser.y"
                                                                           {try("while","endWhile","");}
#line 2615 "y.tab.c"
    break;

  case 131:
#line 379 "parser.y"
                                            {  try("Add", (yyvsp[-2].string), (yyvsp[0].string)); try("", (yyval.string), ""); }
#line 2621 "y.tab.c"
    break;

  case 132:
#line 380 "parser.y"
                                                        {  try("SUB", (yyvsp[-2].string), (yyvsp[0].string)); try("", (yyval.string), ""); }
#line 2627 "y.tab.c"
    break;

  case 133:
#line 381 "parser.y"
                                                            {  try("MUL", (yyvsp[-2].string), (yyvsp[0].string)); try("", (yyval.string), ""); }
#line 2633 "y.tab.c"
    break;

  case 134:
#line 382 "parser.y"
                                                            {  try("DIV", (yyvsp[-2].string), (yyvsp[0].string)); try("", (yyval.string), ""); }
#line 2639 "y.tab.c"
    break;

  case 135:
#line 383 "parser.y"
                                                            {  try("MOD", (yyvsp[-2].string), (yyvsp[0].string)); try("", (yyval.string), ""); }
#line 2645 "y.tab.c"
    break;

  case 136:
#line 384 "parser.y"
                                                            {  try("SHL", (yyvsp[-2].string), (yyvsp[0].string)); try("", (yyval.string), "");	}
#line 2651 "y.tab.c"
    break;

  case 137:
#line 385 "parser.y"
                                                            {  try("SHR", (yyvsp[-2].string), (yyvsp[0].string)); try("", (yyval.string), "");	}
#line 2657 "y.tab.c"
    break;

  case 141:
#line 389 "parser.y"
                                                        {try("And", (yyvsp[-2].string), (yyvsp[0].string));}
#line 2663 "y.tab.c"
    break;

  case 142:
#line 390 "parser.y"
                                                        {try("Or", (yyvsp[-2].string), (yyvsp[0].string));}
#line 2669 "y.tab.c"
    break;

  case 144:
#line 394 "parser.y"
                                               { try("INC", (yyvsp[0].string), ""); try("", (yyval.string), "");}
#line 2675 "y.tab.c"
    break;

  case 145:
#line 395 "parser.y"
                                                           { try("INC", (yyvsp[-1].string), ""); try("", (yyval.string), "");}
#line 2681 "y.tab.c"
    break;

  case 146:
#line 396 "parser.y"
                                                           { try("DEC", (yyvsp[0].string), ""); try("", (yyval.string), "");}
#line 2687 "y.tab.c"
    break;

  case 147:
#line 397 "parser.y"
                                                           {try("DEC", (yyvsp[-1].string), ""); try("", (yyval.string), "");}
#line 2693 "y.tab.c"
    break;

  case 148:
#line 398 "parser.y"
                                                               {try("NOT", (yyvsp[0].string), ""); try("", (yyval.string), "");}
#line 2699 "y.tab.c"
    break;

  case 149:
#line 399 "parser.y"
                                                           {try("NEG", (yyvsp[0].string), ""); try("", (yyval.string), "");}
#line 2705 "y.tab.c"
    break;

  case 150:
#line 402 "parser.y"
                                                 {(yyval.string) = (yyvsp[-1].string);}
#line 2711 "y.tab.c"
    break;

  case 151:
#line 403 "parser.y"
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
#line 2726 "y.tab.c"
    break;

  case 152:
#line 413 "parser.y"
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
#line 2745 "y.tab.c"
    break;

  case 153:
#line 427 "parser.y"
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
#line 2762 "y.tab.c"
    break;

  case 154:
#line 440 "parser.y"
                                        {

								if(gType == " ")
									gType = "string";
								else if( strcmp("string", gType) != 0){
									yyerror("Different types of operands \n");	printf("Different types of operands  \n");
									return;
								}
								nops += 1;
							}
#line 2777 "y.tab.c"
    break;

  case 155:
#line 451 "parser.y"
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
#line 2792 "y.tab.c"
    break;

  case 156:
#line 461 "parser.y"
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
#line 2807 "y.tab.c"
    break;

  case 157:
#line 472 "parser.y"
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
#line 2824 "y.tab.c"
    break;

  case 160:
#line 494 "parser.y"
                                                                                {try("forloop","","");}
#line 2830 "y.tab.c"
    break;

  case 161:
#line 496 "parser.y"
                                {try("endforloop","","");}
#line 2836 "y.tab.c"
    break;


#line 2840 "y.tab.c"

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp);
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
#line 503 "parser.y"
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
	//char* str = read_input_file(argv[1]);
	//yy_scan_string(str);
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

	for (int i=0;i<idx;++i){
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
			//for loop 
			if(andLabel_for==-1)andLabel_for=label++;
			if(notCond_for && forloopCond==0) fprintf (fp, "jz l%d \n",andLabel_for);
			else if(notCond_for && forloopCond) fprintf (fp, "jz l%d \n",andLabel_for+1);
			else fprintf (fp, "jnz l%d \n",andLabel_for);
			notCond_for=0;
		}
		else if (arr[i]=="OrOr"){
			if(orLabel==-1)orLabel=label++;
			if(notCond && whileCond==0) fprintf (fp, "jnz l%d \n",orLabel);
			else if(notCond && whileCond) fprintf (fp, "jnz l%d \n",orLabel+1);
			else fprintf (fp, "jz l%d \n",orLabel);
			if(notCond && whileCond==0) fprintf (fp, "jnz l%d \n",label);
			else if(notCond && whileCond) fprintf (fp, "jnz l%d \n",label+1);
			//for loop 
			else if(notCond_for && forloopCond) fprintf (fp, "jnz l%d \n",label+1);
			else if(notCond_for && forloopCond==0)  (fp, "jnz l%d \n",label);

			else fprintf (fp, "jz l%d \n",label);
			notCond=0;
			//for loop 
			notCond_for=0;
		}
		else if(arr[i]=="not"){
			notCond=1;
			//for loop
			notCond_for=1;
		}
		else if(arr[i]=="endIf"){
			fprintf (fp, "jmp l%d\n",label-1);
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
		else if(arr[i]=="endforloop"){
			fprintf (fp, "jmp l%d\n",label);
			label+=1;
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
	//fprintf (stderr,"Error: %s at line %d %s", syntax_error_handler(yychar), yylineno, "\n");
	//fprintf (errorFile,"Error: %s at line %d %s", syntax_error_handler(yychar), yylineno, "\n");
	fprintf(stderr, s);
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
		case 258: case 290: return "expecting a ';'!";
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
