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
"const"             {return CONST;}
"bool"              {return BOOL;}
"declare"			{return declare;}
"while"				{return While;}
"do"				{return Do_While;}
"false"             {return FALSE;}
"true"              {return TRUE;}
"return"            {return RET; }
[;]                 {return SEMICOLON;}
[,]                 {return COMMA;}
[=]                 {return ASSIGN;}
[(]                 {return OPENBRACKET;}
[)]                 {return CLOSEBRACKET;}
[+-]?[0-9]+			         {return integer_value;}
[+-]?([0-9]*[.])?[0-9]+		 {return Float_value;}
['][a-zA-Z][']               {return Char_value;}
["][a-zA-Z0-9]*["]           {return String_value;}
[_a-zA-Z][_a-zA-Z0-9]{0,30}	 {return identifier;}
>=|<=|>|<|==|!=			{return comparison_OP;}		   
[ \t\n]                ;
[-+=;{}()!]           	   {return yytext[0];}
.                      {ECHO; yyerror ("unexpected character");}

%%
int yywrap (void) {return 1;}
