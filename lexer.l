%{
#include "y.tab.h"
void yyerror (char *s);
int yylex();
%}
%%
"int"               {return INT;}
"float"             {return FLOAT;}
"char"              {return CHAR;}
"string"            {return STRING;}
"void"              {return VOID;}
"const"             {return CONST;}
"bool"              {return BOOL;}
"while"				{return While;}
"do"				{return Do_While;}
"false"             {return FALSE;}
"true"              {return TRUE;}
"return"            {return RET; }
"if"                {return IF;}
"else"	            {return ELSE;}
"switch"	        {return SWITCH;}
"case"	            {return CASE;}
"default"	        {return DEFAULT;}
"break"             {return BREAK;}
"for"            	{return FOR;}

[0-9]+			                                {return integer_value;}
([0-9]*[.])?[0-9]+		                        {return Float_value;}
['][a-zA-Z][']                                      {return Char_value;}
\"[\x23-\x7E =\?!\*()<>+/^%~|&@#;{}.]*\"            {return String_value;}
[_a-zA-Z][_a-zA-Z0-9]{0,30}	                        {return identifier;}

[;]                 {return SEMICOLON;}
[:]                 {return COLON;}
[,]                 {return COMMA;}
[=]                 {return ASSIGN;}
[(]                 {return OPENBRACKET;}
[)]                 {return CLOSEBRACKET;}

">="|"<="|">"|"<"|"=="|"!="		   {return comparison_OP;}
"&&" | "||"                        {return IfFiller;}
"++"                         {return INC;}
"--" 			             {return DEC;}
"<<"                         {return SHL;}
">>"                         {return SHR;}
!	                         {return NOT;}
[-+*/{}~^&|]           	     {return yytext[0];}

[ \t\n]              ;
.                            {ECHO; yyerror ("unexpected character");}

%%
int yywrap (void) {return 1;}
