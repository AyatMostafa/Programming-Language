%{
#include "y.tab.h"
void yyerror (char *s);
int yylex();
%}
%%
"declare"			{return declare;}
"while"				{return While;}
"do"				{return Do_While;}
[+-]?[0-9]+			{return integer;}
[+-]?([0-9]*[.])?[0-9]+		{return Float;}
[_a-zA-Z][_a-zA-Z0-9]{0,30}	{return identifier;}
>=|<=|>|<|==|!=			{return comparison_OP;}		   
[ \t\n]                ;
[-+=;{}()!]           	   {return yytext[0];}
.                      {ECHO; yyerror ("unexpected character");}

%%
int yywrap (void) {return 1;}
