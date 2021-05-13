%{
void yyerror (char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
int level = 0;
char* scopes[50];
%}

%union {int int_num; char id; float float_num; char* string;}         /* Yacc definitions */
%start line
%token declare
%token While
%token Do_While
%token logical_OP
%token <int_num> integer
%token <float_num> Float
%token <string> identifier
%token <string> comparison_OP
//%type <int_num> line phrase

%%

/* descriptions of expected inputs corresponding actions (in C) */

line	: phrase 		{;}
	| line phrase		{;}
	| while			{;}
	| line while		{;}
	| dowhile		{;}
	| line dowhile		{;}
//	| block			{;}
//	| line block		{;}
	| start_block		{;}
	| line start_block	{;}
	| end_block		{;}
	| line end_block	{;}
//	| logical_exp';'	{;}
//	| line logical_exp';'	{;}
	;
phrase  : declare';'            {printf("phrase ");}
        ;
//block	: start_block line end_block	{printf("block finished ");}
	;
start_block: '{'		{level += 1; printf("start block %d ", level);}
	;
end_block  : '}'		{
					if (level == 0) yyerror("start scope first!");
				 	else {printf("end block %d ", level); level -= 1;}
				}
	;
	;
term	: integer {;} | Float {;}
	;
logical_exp: identifier comparison_OP term {printf("logical expression ");}
	
	;
while	: While '(' logical_exp ')' start_block {printf("whileLoop "); scopes[level] = "while";}
	;
dowhile	: Do_While start_block line end_block While '(' logical_exp ')'';' {printf("dowhile ");}
	;

%%                     /* C code */
 
int main (void) {
	/* init scopes table */
	for(int i=0; i<52; i++) {
		scopes[0] = "None";
	}
	
	return yyparse ( );
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);} 
