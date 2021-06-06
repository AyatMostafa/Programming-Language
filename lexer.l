%{
#include "y.tab.h"
void yyerror (char *s);
int yylex();
%}
%option yylineno
%%
"int"               {yylval.string = strdup(yytext); return INT;}
"float"             {yylval.string = strdup(yytext); return FLOAT;}
"char"              {yylval.string = strdup(yytext); return CHAR;}
"string"            {yylval.string = strdup(yytext); return STRING;}
"void"              {return VOID;}
"const"             {yylval.string = strdup(yytext); return CONST;}
"bool"              {yylval.string = strdup(yytext); return BOOL;}
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

[0-9]+			                                {yylval.string = atoi(yytext); return integer_value;}
([0-9]*[.])?[0-9]+		                        { yylval.float_num = atof(yytext);return Float_value;}
['][a-zA-Z][']                                      {return Char_value;}
\"[\x23-\x7E =\?!\*()<>+/^%~|&@#;{}.]*\"            {yylval.string = strdup(yytext);return String_value;}
[_a-zA-Z][_a-zA-Z0-9]{0,30}	                        {yylval.string = strdup(yytext); return identifier;}

[;]                 {return SEMICOLON;}
[:]                 {return COLON;}
[,]                 {return COMMA;}
[=]                 {return ASSIGN;}
[(]                 {return OPENBRACKET;}
[)]                 {return CLOSEBRACKET;}

">="            {return GE;}
"<="            {return LE;}
">"             {return G;}
"<"             {return L;}
"=="            {return EE;}
"!="		   {return NE;}

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
