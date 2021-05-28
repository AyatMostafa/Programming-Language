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
%token INT
%token FLOAT
%token CHAR
%token VOID
%token IF
%token ELSE
%token FOR


%token STRING
%token BOOL
%token CONST
%token FALSE
%token TRUE
%token SEMICOLON
%token COMMA
%token COLON
%token OPENBRACKET
%token CLOSEBRACKET
%token RET
%token BREAK
%token ASSIGN
%token IfFiller
%token While
%token Do_While
%token logical_OP
%token NOT
%token SWITCH
%token CASE
%token DEFAULT
%token <int_num> integer_value
%token <float_num> Float_value
%token <id>Char_value;
%token <string>String_value;
%token identifier
%token <string> comparison_OP
%token INC
%token DEC


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
	
	|if {;}
	|else {;}
	|elseIf {;}
	|line if {;}
	|line else {;}
	|line elseIf {;} 
	|switch {;}
	|case {;}
	|line switch {;}
	|line case {;}
	| for {;}
	| line for {;}
	|

	;

phrase  :constant{;}
	|variable{;}
	|declaration{;}
	|definition{;}
	| func {;}
        ;
//block	: start_block line end_block	{printf("block finished \n");}
	;
start_block: '{'		{level += 1; printf("start block %d \n", level);}
	;
end_block  : '}'		{
					if (level == 0) yyerror("start scope first!\n");
				 	else {printf("end block %d ", level); level -= 1;}
				}
	;
	;
term	: integer_value {;} 
		  | Float_value {;}
		  | Char_value{;}
		  | String_value{;}
		  | FALSE{;}
		  | TRUE {;}
	;

type : CHAR
     | INT
	 | FLOAT
	 | STRING
	 | BOOL
	 | VOID
	 ;
argList: type identifier cont
        |
;
cont: COMMA type identifier cont
     |
;
stmtlist:  phrase 
          | stmtlist phrase ;	

func : type identifier OPENBRACKET argList CLOSEBRACKET start_block stmtlist RET expression SEMICOLON end_block{printf("function\n");} 
constant : CONST type identifier ASSIGN expression SEMICOLON {printf("constant and assignment\n");}
variable : type identifier ASSIGN expression SEMICOLON {printf("declaration and assignment\n");}
declaration : type identifier SEMICOLON {printf("declaration\n");}
definition : identifier ASSIGN expression SEMICOLON {printf("definition\n");} | identifier ASSIGN identifier SEMICOLON
logical_exp : identifier comparison_OP term {printf("logical expression \n");}



if : IF {printf("if condition ");} OPENBRACKET ifExpr CLOSEBRACKET start_block  {printf("if condition\n");} line end_block
ifExpr : cond | cond IfFiller ifExpr {printf("expression\n");}
cond :  identifier comparison_OP identifier | logical_exp | term | identifier |  bracketBeforeAndAfter | notBefore {printf("condition\n");}
bracketBeforeAndAfter : OPENBRACKET identifier comparison_OP identifier CLOSEBRACKET | OPENBRACKET logical_exp CLOSEBRACKET | OPENBRACKET term CLOSEBRACKET | OPENBRACKET identifier CLOSEBRACKET | OPENBRACKET ifExpr CLOSEBRACKET 
notBefore : NOT OPENBRACKET identifier comparison_OP identifier CLOSEBRACKET | NOT OPENBRACKET logical_exp CLOSEBRACKET | NOT OPENBRACKET term CLOSEBRACKET | NOT OPENBRACKET identifier CLOSEBRACKET | NOT OPENBRACKET ifExpr CLOSEBRACKET
elseIf : ELSE IF OPENBRACKET ifExpr CLOSEBRACKET start_block line end_block {printf("else if condition ");}
else : ELSE start_block line end_block{printf("else\n");}

switch : SWITCH OPENBRACKET identifier CLOSEBRACKET start_block cases end_block
cases : case | case cases
case :  CASE term COLON line BREAK SEMICOLON  | CASE term COLON line  | CASE term COLON BREAK SEMICOLON | DEFAULT COLON line BREAK SEMICOLON | DEFAULT COLON line | DEFAULT COLON BREAK SEMICOLON 


	;
while	: While OPENBRACKET ifExpr CLOSEBRACKET start_block line end_block {printf("whileLoop \n"); scopes[level] = "while";} 
	;
dowhile	: Do_While start_block line end_block While OPENBRACKET ifExpr CLOSEBRACKET SEMICOLON {printf("dowhile \n");}
	;

//----------------- mathematical and logical expression -----------
expression: expression1 | expression2 | expression3

expression1:  expression '=' expression
			| expression '+' expression
			| expression '-' expression
			| expression '*' expression
			| expression '/' expression
			| expression IfFiller expression
			| expression comparison_OP expression
    ;

expression2:   INC expression3
			|  expression3 INC
			|  DEC expression3
			|  expression3 DEC
	;

expression3:  OPENBRACKET expression OPENBRACKET
			| term
			| identifier		
	;

//-------------------- FOR Rule ---------------

for   :  FOR OPENBRACKET for_initi_stat SEMICOLON expression SEMICOLON expression CLOSEBRACKET {printf("for loop ");} start_block line end_block
	;
for_initi_stat :  type identifier ASSIGN term
			    | identifier ASSIGN term
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
