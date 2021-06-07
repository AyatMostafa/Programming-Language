%{
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

FILE * fp;
int label=0;
char*arr[100000];
int idx = 0;
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
char* gType = " ";
int  nops =0;
char* syntax_error_handler(int);
%}

%locations
%union {int int_num; char id; float float_num; char* string;}         /* Yacc definitions */
%start line
%token <string> INT
%token <string> FLOAT
%token <string> CHAR
%token <string> VOID
%token IF
%token ELSE
%token FOR


%token <string> STRING
%token <string> BOOL
%token <string> CONST
%token <string>FALSE
%token <string>TRUE
%token <string>SEMICOLON
%token COMMA
%token COLON
%token OPENBRACKET
%token CLOSEBRACKET
%token RET
%token BREAK
%token <string>ASSIGN
%token AndAnd
%token OrOr
%token While
%token Do_While
%token logical_OP
%token NOT
%token SWITCH
%token CASE
%token DEFAULT
%token <int_num> integer_value
%token <float_num> Float_value
%token <id> Char_value
%token <string> String_value
%token <string> identifier
%token <string> GE
%token <string> LE
%token <string> G
%token <string> L
%token <string> EE
%token <string> NE
%token INC
%token DEC
%token SHL
%token SHR

%type <string>  expression expression1 expression2 expression3 
%type<string> '-' '+' '*' '/' '%' '&' '|' '^' 
%type <string> type

// Precedence
%right      ASSIGN
%left       EQ NE
%left       GE LE G L
%left       SHR SHL
%left       '-' '+'
%left       '*' '/' '%'
%right      '!' '~'
%right      U_MINUM
%right      PRE_INC PRE_DEC
%left       SUF_INC SUF_DEC

%%

/* descriptions of expected inputs corresponding actions (in C) */

line	: 
		| while			    {;}
		| line while		{;}
		| dowhile		    {;}
		| line dowhile		{;}
		| start_block		{;}
		| line start_block	{;}
		
		|if {;}
		|else {;}
		|elseIf {;}
		|line if {;}
		|line else {;}
		|line elseIf {;} 
		|switch {;}
		|line switch {;}
		| for {;}
		| line for {;}
		| expression {;}
		| line expression{;}
		| single_val {;}
		| line single_val{;}
		| constant{;}
		| line constant{;}
	    | variable{;}
		| line variable{;}
	    | declaration{;}
		| line declaration{;}
	    | definition{;}
		| line definition{;}
	    | func_p1 {;}
		| line func_p1{;}
		| func_p2 {;}
		| line func_p2{;}
		| func_call_p1{;}
		| line func_call_p1{;}
		| func_call_p2{;}
		| line func_call_p2{;}
	;

start_block: '{'{
					level += 1;
					new_block();
				 	printf("id %d , childrenNum %d, parentID %d \n", current->id, current->num_children, current->parent->id);
				}
	;
end_block:	 '}'{
					if(in_function == 1 && current -> parent -> id == 0) 
						in_function = 0; 
					if (level == 0) yyerror_semantic("start scope first!\n"); 
					else{
					int parID;
					if(current->id == 1)  parID = -1; else parID = current->parent->id;
				 	level -= 1; unused_symbols(); 
					current = current -> parent; printf("id %d , childrenNum %d, parentID %d \n", current->id, current->num_children, parID);
					}
				}
	;
term	: integer_value {;}//try("",toArray($1),"");}
		  | Float_value {; char buf[1000];gcvt($1, 6, buf);printf(buf);try("",buf,"");}
		  | Char_value{;printf('%c',$1);/*try("",ptr,""); */}
		  | String_value{;try("",$1,""); }
		  | FALSE{;try("","false","");}
		  | TRUE {;try("","true",""); }
	;

type : CHAR
     | INT
	 | FLOAT
	 | STRING
	 | BOOL
	 | VOID
	 ;
argList: type identifier cont	{try("Args",$2,"");}{
								cur_func_args[cur_func_args_num] = $1;
								cur_func_names[cur_func_args_num] = $2;
								cur_func_args_num += 1;
								}
        |
;
cont: COMMA type identifier cont {try("Args",$3,"");}{
								cur_func_args[cur_func_args_num] = $2;
								cur_func_names[cur_func_args_num] = $3;
								cur_func_args_num += 1;
								}
     |
;
stmtlist:  line 
          | stmtlist line 
		  ;	

func_p1: type identifier OPENBRACKET argList CLOSEBRACKET {try("PROC",$2,"");}
		{
			
			if (current->id != 0){
				yyerror_semantic("Function can only be declared globally!");
				return;
			}
			for(int i=0; i<BRANCHFACTOR; i++)
				if(function_table[i] && strcmp(function_table[i], $2)==0){
					char Output[MAX_STR_LEN];
					sprintf(Output, "%s%s%s", "A function with name ", $2, " is already defined!\n");
					yyerror_semantic(Output);
					return 0;
				}
			function_table[node_counter+1] = $2;
			in_function = 1;
		};
func_p2: func_p1 start_block stmtlist RET expression  SEMICOLON
 {try("RET","",""); printf("function\n");}; 



many_identifiers:
				identifier {
					if(check_func(get_symbol($1))==0) {
						return;
					}
					else {
						try("params",$1,"");
					}
					
				}
				|identifier COMMA many_identifiers {
					if(check_func(get_symbol($1))==0){
						return;
					}
					else{
						try("params",$1,"");
					} 
				}
				|;

func_call_p1: identifier OPENBRACKET 
			{	try("CALL",$1,"");
				int found = 0;
				for(int i=0; i<BRANCHFACTOR; i++)
					if(function_table[i] && strcmp(function_table[i], $1)==0)
						found = 1;
				if (found != 1){
					char Output[MAX_STR_LEN];
					sprintf(Output, "%s%s", $1, " is not a function!\n");
					yyerror_semantic(Output);
					return 0;
				}
				for(int i=0; i<BRANCHFACTOR; i++){
					if(function_table[i] && strcmp(function_table[i], $1)==0){
						for(int j=0; j<root->num_children; j++)
							if(root->children[j]->id == i){
								arg_size = root->children[j] -> num_arguments;
								func_call_node = j;
							}
						}
					}
			}
func_call_p2: func_call_p1 many_identifiers CLOSEBRACKET SEMICOLON {func_call_handler();}
			| func_call_p1 CLOSEBRACKET SEMICOLON {func_call_handler();}
			;
			
constant : CONST type identifier ASSIGN expression SEMICOLON {
				declare_symbol($3, $2, 1, gType, 1); 
				printf("constant and assignment\n");
				if(nops == 1)
				{
					try("Single" , $5, "");
				}	
				try("POP", $3, ""); 
				gType = " ";
				nops = 0;
			}
variable : type identifier ASSIGN expression SEMICOLON 
		  	{	
				declare_symbol($2, $1, 1, gType, 0);
				printf("declaration and assignment\n");
			  	if(nops == 1)
				{
					try("Single" , $4, "");
					// printf("YES \n");
				}	
				try("POP", $2, ""); 
				gType = " ";
				nops = 0;
			}
declaration : type identifier SEMICOLON {declare_symbol($2, $1, 0, "", 0);printf("declaration\n");}

definition 	: identifier ASSIGN expression SEMICOLON 
				{
					int r = assign_symbol($1, gType); 
					printf("definition\n");
					if(nops == 1)
					{
						try("Single" , $3, "");
					}		
					try("POP", $2, ""); 
					gType = " ";
					nops = 0;
				} 
			// | identifier ASSIGN identifier SEMICOLON 
			// 	{
			// 		char* t = get_symbol($3);
			// 		if(strcmp(t, "None") == 0) 
			// 			return;
			// 		else 
			// 			assign_symbol($1, t);
			// 		gType = " ";
			// 		nops = 0;	
			// 	}
logical_exp : identifier comparison_OP term {try("",$1,"");};
comparison_OP : GE {try("GE","","");} | LE {try("LE","","");} | G {try("G","","");} | L {try("L","","");} | EE {try("EE","","");} | NE {try("NE","","");}

if : IF {printf("if condition ");} OPENBRACKET ifExpr CLOSEBRACKET {try("if","","");} start_block  stmtlist end_block {printf("if condition\n");}
ifExpr : cond | cond IfFiller ifExpr {printf("expression\n");}
cond :  identifier comparison_OP identifier {if(get_symbol($1) != get_symbol($3)){yyerror("Different types of operands \n");printf("Different types of operands \n");}else{try("",$1,$3);}} | logical_exp | term | identifier |  bracketBeforeAndAfter | notBefore {printf("condition\n");}
bracketBeforeAndAfter : OPENBRACKET identifier comparison_OP identifier CLOSEBRACKET {if(get_symbol($2) != get_symbol($4)){yyerror("Different types of operands \n");printf("Different types of operands \n");}else{try("",$2,$4);}}| OPENBRACKET logical_exp CLOSEBRACKET | OPENBRACKET term CLOSEBRACKET | OPENBRACKET identifier CLOSEBRACKET {try("",$2,"");}| OPENBRACKET ifExpr CLOSEBRACKET 
notBefore : NOT OPENBRACKET identifier comparison_OP identifier CLOSEBRACKET {if(get_symbol($3) != get_symbol($5)){yyerror("Different types of operands \n");printf("Different types of operands \n");}else{try($3,$5,"not");}}| NOT OPENBRACKET logical_exp CLOSEBRACKET {try("not","","");} | NOT OPENBRACKET term CLOSEBRACKET {try("not","","");} | NOT OPENBRACKET identifier CLOSEBRACKET {try("not",$3,"");}| NOT OPENBRACKET ifExpr CLOSEBRACKET {try("not","","");}
elseIf : ELSE IF OPENBRACKET ifExpr CLOSEBRACKET {try("elseif","","");} start_block stmtlist end_block
else : ELSE start_block stmtlist end_block{printf("else\n");}

IfFiller : AndAnd {try("AndAnd","","");}| OrOr {try("OrOr","","");}

switch : SWITCH OPENBRACKET identifier {try("switch",$3,"");} CLOSEBRACKET start_block cases end_block {try("endSwitch","","");}
cases : DEFAULT {printf("HI2");} COLON stmtlist BREAK SEMICOLON {printf("HI4");} | case cases
case : CASE {try("case","","");} term COLON stmtlist BREAK SEMICOLON {printf("HI1");}
	;

while	: While {try("startWhile","","");} OPENBRACKET ifExpr {try("while","","");} CLOSEBRACKET whileCont1 
whileCont1: '{'stmtlist'}' {try("endWhile","","");printf("whileLoop \n");}  
	;
dowhile	: Do_While '{'stmtlist'}' While OPENBRACKET ifExpr {try("while","endWhile","");} CLOSEBRACKET SEMICOLON {printf("dowhile \n");}
	;

//----------------- mathematical and logical expression -----------
expression: expression1 | expression2 | expression3
	;

expression1:  expression '+' expression     {  try("Add", $1, $3); try("", $$, ""); printf($$);}
			| expression '-' expression     {  try("SUB", $1, $3); try("", $$, ""); printf($$);}
			| expression '*' expression	    {  try("MUL", $1, $3); try("", $$, ""); printf($$);}
			| expression '/' expression	    {  try("DIV", $1, $3); try("", $$, ""); printf($$);}
			| expression '%' expression	    {  try("MOD", $1, $3); try("", $$, "");}
			| expression SHL expression	    {  try("SHL", $1, $3); try("", $$, "");	}												
			| expression SHR expression	    {  try("SHR", $1, $3); try("", $$, "");	}
			| expression '&' expression	   
			| expression '|' expression
			| expression '^' expression
			| expression AndAnd expression  {try("And", $1, $3);}
			| expression OrOr expression    {try("Or", $1, $3);}
			| expression comparison_OP expression
    ;

expression2:   INC expression3 %prec PRE_INC   { try("INC", $2, ""); try("", $$, "");}
			|  expression3 INC %prec SUF_INC   { try("INC", $1, ""); try("", $$, "");} 
			|  DEC expression3 %prec PRE_DEC   { try("DEC", $2, ""); try("", $$, "");}
			|  expression3 DEC %prec SUF_DEC   {try("DEC", $1, ""); try("", $$, "");}   
			|  '!' expression	               {try("NOT", $2, ""); try("", $$, "");}
			|  '-' expression %prec U_MINUM	   {try("NEG", $2, ""); try("", $$, "");}
	;

expression3:  OPENBRACKET expression OPENBRACKET {$$ = $2;}
			| integer_value   { //printf("\ integer value %i \n", $1);
								$$ = toArray($1);
								// printf("\ integer value %s \n", $$);
								if(gType == " ")
									gType = "int";
								else if( strcmp("int", gType) != 0){
									yyerror("Different types of operands \n");	printf("Different types of operands  \n");
									return;
								}
								nops += 1;
							}	
			| Char_value      { 
								char str[2]; 
								str[0] = $1; 
								str[1] = '\0'; 
								$$ = str; 
								// printf("\ char value %s \n", $$);
								if(gType == " ")
									gType = "char";
								else if( strcmp("char", gType) != 0){
									yyerror("Different types of operands \n");	printf("Different types of operands  \n");
									return;
								}
								nops += 1;
								}
			| Float_value     { //printf("floaaaat %f", $1); 
								char buf[1000];
								gcvt($1, 6, buf);
								$$ = buf;
								// printf("$$ %f", $$);
								// printf("\ float value \n");
								if(gType == " ")
									gType = "float";
								else if( strcmp("float", gType) != 0){
									yyerror("Different types of operands \n");	printf("Different types of operands  \n");
									return;
								}
								nops += 1;
							}
			| String_value  {	//printf("\ string value %s \n", $$);
								if(gType == " ")
									gType = "string";
								else if( strcmp("string", gType) != 0){
									yyerror("Different types of operands \n");	printf("Different types of operands  \n");
									return;
								}
								nops += 1;
							}
			| FALSE         { 	$$ = "false";
								//printf("\ bool value %s \n", $$);
								if(gType == " ")
									gType = "bool";
								else if( strcmp("bool", gType) != 0){
									yyerror("Different types of operands \n");	printf("Different types of operands  \n");
									return;
								}
								nops += 1;
							}
			| TRUE         { 	$$ = "true";
								//printf("\ bool value %s \n", $$);
								if(gType == " ")
									gType = "bool";
								else if( strcmp("bool", gType) != 0){
									yyerror("Different types of operands \n");	printf("Different types of operands  \n");
									return;
								}
								nops += 1;
							}
						
			| identifier	  {$$ = $1; 
								// printf("\ identifier name is %s \n",  $1);
							    printf("\ type of variable %s is %s \n", $1 , get_symbol($1));
								if(gType == " ")
									gType = get_symbol($1);
								else if( strcmp(get_symbol($1), gType) != 0){
									yyerror("Different types of operands \n");	printf("Different types of operands  \n");
									return;
								}
								nops += 1;
							}	
	;

single_val: term SEMICOLON | '-' term SEMICOLON
	;


//-------------------- FOR Rule ---------------

for :  FOR OPENBRACKET for_initi_stat SEMICOLON expression SEMICOLON expression CLOSEBRACKET {printf("for loop ");} start_block line end_block
	;
for_initi_stat :  type identifier ASSIGN term
			    | identifier ASSIGN term
	;


%%                     /* C code */

int main (void) {
	fp = fopen ("quad.txt","w");
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
		printf("  ");
	}
	int x;
	scanf("%d",  &x);
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
	int endSwitchCond=0;
	int andLabel=-1;
	int whileCond=0;
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
		else if(arr[i]=="if" || arr[i]=="elseif" || arr[i]=="while"){
			if(arr[i]=="while" && notCond==0){
				notCond=1;
				whileCond=0;
			}
			else if(arr[i]=="while" && notCond) {notCond=0;whileCond=0;}
			jmpNewLabel(notCond);
			notCond=0;
			andLabel=-1;
		}
		else if(arr[i]=="startWhile") whileCond=1;
		else if(arr[i]=="AndAnd")
		{
			if(andLabel==-1)andLabel=label++;
			if(notCond && whileCond==0) fprintf (fp, "jz l%d \n",andLabel);
			else if(notCond && whileCond) fprintf (fp, "jz l%d \n",andLabel+1);
			else fprintf (fp, "jnz l%d \n",andLabel);
			notCond=0;
		}
		else if (arr[i]=="OrOr"){
			if(notCond && whileCond==0) fprintf (fp, "jnz l%d \n",label);
			else if(notCond && whileCond) fprintf (fp, "jnz l%d \n",label+1);
			else fprintf (fp, "jz l%d \n",label);
			notCond=0;
		}
		else if(arr[i]=="not"){
			notCond=1;
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
}
void yyerror_semantic(char *s) {
	fprintf(stderr, s);
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

char* syntax_error_handler(int err){
	printf("yycahr value is %d %s", err, " ");
	switch(err){
		case 258: case 290: return "expecting a ';'!";
		case 270: case 123: return "expecting a closing paranthesis or invalid definition!";
		case 273: return "expecting an opening block {!";
		case 274: return "expecting a logical expression!";
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