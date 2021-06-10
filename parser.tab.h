/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 48 "parser.y" /* yacc.c:1909  */
int int_num; char id; float float_num; char* string;

#line 110 "parser.tab.h" /* yacc.c:1909  */
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

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
