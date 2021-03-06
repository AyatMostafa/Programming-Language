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
int For_loop = 0;
int  nops =0;
int aftEnd = 0;
char* temporary[5];
char* syntax_error_handler(int);
%}

//%define parse.error verbose
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
%right      '!' 
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
		| block				{;}
		| line block			{;}
		
		| if {;}
		| else {;}
		| elseIf {;}
		| line if {;}
		| line else {;}
		| line elseIf {;} 
		| switch {;}
		| line switch {;}
		| for {;}
		| line for {;}
		| expression {;}   {gType = " "; nops = 0;}
		| line expression{;} {gType = " "; nops = 0;}
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
		| typeConversion{;}
		| line typeConversion{;}
	;
block: start_block line end_block {;};
start_block: '{'{
					level += 1;
					new_block();
				 	//printf("id %d , childrenNum %d, parentID %d \n", current->id, current->num_children, current->parent->id);
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
					current = current -> parent; 
					//printf("id %d , childrenNum %d, parentID %d \n", current->id, current->num_children, parID);
					}
				}
	;
term	: integer_value {; printf(toArray($1));try("",toArray($1),"");termType="int";}
		  | Float_value {; char buf[1000];gcvt($1, 6, buf);try("",buf,"");termType="float";}
		  | Char_value{;printf('%c',$1);/*try("",ptr,""); termType="char";*/}
		  | String_value{;try("",$1,""); termType="string";}
		  | FALSE{;try("","false","");termType="false";}
		  | TRUE {;try("","true",""); termType="true";}
	;

type :  CHAR
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
			retType=$1;
			if (current->id != 0){
				yyerror_semantic("Function can only be declared globally!");
				//return;
			}
			for(int i=0; i<BRANCHFACTOR; i++)
				if(function_table[i] && strcmp(function_table[i], $2)==0){
					char Output[MAX_STR_LEN];
					sprintf(Output, "%s%s%s", "A function with name ", $2, " is already defined!\n");
					yyerror_semantic(Output);
					//return 0;
				}
			function_table[node_counter+1] = $2;
			in_function = 1;
			func_type = $1;
		};

func_p2: func_p1 start_block stmtlist RET expression  SEMICOLON end_block
 {
	 if( strcmp(retType, gType) != 0){
		 yyerror_semantic("return value type does not match the function type");
		 printf("return value %s type does not match the function type %s ",retType,gType);
	 }
	 try("RET","",""); 
	 printf("function\n");
	 gType=" ";
	 nops=0;}
	|func_p1 start_block stmtlist end_block; 

many_identifiers:
				expression3 {
					if(check_func(gType)!=0) {
						try("params",$1,"");
					}
					
				}
				|expression3 COMMA many_identifiers {
					if(check_func(gType)!=0){
						try("params",$1,"");
					} 
				}
				|
				;

func_call_p1: identifier OPENBRACKET 
			{	try("CALL",$1,"");
				func_id=$1;
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
								indx_arg = 0;
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
			  	if(nops == 1)
				{
					try("Single" , $4, "");
				}	
				try("POP", $2, ""); 
				gType = " ";
				nops = 0;
			}
			|type identifier ASSIGN func_call_p2 {
				declare_symbol($2, $1, 0, "", 0);
				try("POP",$2,"");
				assign_to_func($2, func_id);

			}
declaration : type identifier SEMICOLON {declare_symbol($2, $1, 0, "", 0);}

typeConversion: type OPENBRACKET identifier CLOSEBRACKET SEMICOLON {
	try("type_conv",$3,"");
	type_conversion($3, $1);
	
}

definition 	: identifier ASSIGN expression SEMICOLON 
				{
					int r = assign_symbol($1, gType);
					if(r==1){ 
						if(nops == 1)
						{
							try("Single" , $3, "");
						}		
						try("POP", $1, ""); 
						gType = " ";
						nops = 0;
					}
				} 

				| identifier ASSIGN func_call_p2 {
				  try("POP",$1,"");
				  assign_to_func($1, func_id);
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

logical_exp : identifier comparison_OP term {if(strcmp(get_symbol($1),termType)!=0){yyerror_semantic("Different types of operands \n");}try("",$1,"");};
comparison_OP : GE {try("GE","","");} | LE {try("LE","","");} | G {try("G","","");} | L {try("L","","");} | EE {try("EE","","");} | NE {try("NE","","");}

if : IF OPENBRACKET ifExpr CLOSEBRACKET {try("if","","");} block {try("endIf","","");}
ifExpr : cond | cond IfFiller ifExpr
cond :  identifier comparison_OP identifier {if(strcmp(get_symbol($1),get_symbol($3))!=0){yyerror_semantic("Different types of operands \n");}try("",$1,$3);} | logical_exp | term | identifier |  bracketBeforeAndAfter | notBefore 
bracketBeforeAndAfter : OPENBRACKET identifier comparison_OP identifier CLOSEBRACKET {if(strcmp(get_symbol($2),get_symbol($4))!=0){yyerror_semantic("Different types of operands \n");}try("",$2,$4);}| OPENBRACKET logical_exp CLOSEBRACKET | OPENBRACKET term CLOSEBRACKET | OPENBRACKET identifier CLOSEBRACKET {try("",$2,"");}| OPENBRACKET ifExpr CLOSEBRACKET 
notBefore : NOT OPENBRACKET identifier comparison_OP identifier CLOSEBRACKET {if(strcmp(get_symbol($3),get_symbol($5))!=0){yyerror_semantic("Different types of operands \n");}try($3,$5,"not");}| NOT OPENBRACKET logical_exp CLOSEBRACKET {try("not","","");} | NOT OPENBRACKET term CLOSEBRACKET {try("not","","");} | NOT OPENBRACKET identifier CLOSEBRACKET {try("not",$3,"");}| NOT OPENBRACKET ifExpr CLOSEBRACKET {try("not","","");}
elseIf : ELSE IF OPENBRACKET ifExpr CLOSEBRACKET {try("elseif","","");} block {try("endIf","","");}
else : ELSE block

IfFiller : AndAnd {try("AndAnd","","");}| OrOr {try("OrOr","","");}

switch : SWITCH OPENBRACKET identifier {switchVariableType=get_symbol($3);try("switch",$3,"");} CLOSEBRACKET start_block cases end_block {try("endSwitch","","");}
cases : DEFAULT COLON stmtlist BREAK SEMICOLON| case cases  
case : CASE {try("case","","");} term {if(strcmp(switchVariableType,termType)!=0){yyerror_semantic("Different types of operands \n");}} COLON stmtlist BREAK SEMICOLON {try("endCase","","");}
	;

while	: While {try("startWhile","","");} OPENBRACKET ifExpr {try("while","","");} CLOSEBRACKET whileCont1 
whileCont1: start_block stmtlist end_block {try("endWhile","","");};
	;
dowhile	: Do_While start_block stmtlist end_block While OPENBRACKET ifExpr {try("while","endWhile","");} CLOSEBRACKET SEMICOLON
	;

//----------------- mathematical and logical expression -----------
expression: expression1 | expression2 | expression3
	;

expression1:     expression '+' expression       {  try("Add", $1, $3); try("", $$, ""); }
			| expression '-' expression       {  try("SUB", $1, $3); try("", $$, ""); }
			| expression '*' expression	    {  try("MUL", $1, $3); try("", $$, ""); }
			| expression '/' expression	    {  try("DIV", $1, $3); try("", $$, ""); }
			| expression '%' expression	    {  try("MOD", $1, $3); try("", $$, ""); }
			| expression SHL expression	    {  try("SHL", $1, $3); try("", $$, ""); }												
			| expression SHR expression	    {  try("SHR", $1, $3); try("", $$, ""); }
			| expression '&' expression	   
			| expression '|' expression
			| expression '^' expression
			| expression AndAnd expression    {try("And", $1, $3);}
			| expression OrOr expression      {try("Or", $1, $3);}
			| expression comparison_OP expression
    ;

expression2:   INC expression3 SEMICOLON %prec PRE_INC    { if(aftEnd == 0) {try("INC", $2, ""); try("", $$, ""); try("POP", $2, "");}
								else{
									temporary[0] = "INC"; temporary[1]= $2; temporary[2]= $$; temporary[3]="POP"; temporary[4]= $2;
								} }
			|  expression3 INC  %prec SUF_INC            { if(aftEnd == 0) {try("INC", $1, ""); try("", $$, ""); try("POP", $1, "");}
								else{
									temporary[0] = "INC"; temporary[1]= $1; temporary[2]= $$; temporary[3]="POP"; temporary[4]= $1;
								}} 
			|  DEC expression3 SEMICOLON %prec PRE_DEC   { try("DEC", $2, ""); try("", $$, ""); try("POP", $2, "");}
			|  expression3 DEC SEMICOLON %prec SUF_DEC   {try("DEC", $1, ""); try("", $$, ""); try("POP", $1, "");}   
			|  '!' expression	                         {try("NOT", $2, ""); try("", $$, "");}
			|  '-' expression %prec U_MINUM	          {try("NEG", $2, ""); try("", $$, "");}
	;

expression3:  OPENBRACKET expression OPENBRACKET {$$ = $2;}
			| integer_value   { //printf("\ integer value %i \n", $1);
								$$ = toArray($1);
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
								if(gType == " ")
									gType = "float";
								else if( strcmp("float", gType) != 0){
									yyerror("Different types of operands \n");	printf("Different types of operands  \n");
									return;
								}
								nops += 1;
							}

			| String_value  {

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
							    // printf("\ type of variable %s is %s \n", $1 , get_symbol($1));
								
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

for :  FOR OPENBRACKET for_initi_stat ifExpr SEMICOLON { aftEnd =1; } expression CLOSEBRACKET  {try("forloop","",""); For_loop=1; gType = " "; nops = 0;} 

 start_block stmtlist end_block {try(temporary[0], temporary[1], temporary[2]); try(temporary[3], temporary[4], ""); try("endforloop","","");For_loop=0;}
	;
for_initi_stat :  variable
			    | definition
	;

%%                     /* C code */

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
	char* str = read_input_file(argv[1]);
	yy_scan_string(str);
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
	int orLabel_for=-1;
	int jmpOutLabel=0;
	for (int i=0;i<idx;++i){
		if(arr[i]=="forloop")For_loop=1;

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
			if(arr[i]=="if")jmpOutLabel++;
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

		}
		else if (arr[i]=="OrOr"){
			if(orLabel==-1)orLabel=label++;
			if(notCond && whileCond==0) fprintf (fp, "jnz l%d \n",orLabel);
			else if(notCond && whileCond) fprintf (fp, "jnz l%d \n",orLabel+1);
			else fprintf (fp, "jz l%d \n",orLabel);
			if(notCond && whileCond==0) fprintf (fp, "jnz l%d \n",label);
			else if(notCond && whileCond) fprintf (fp, "jnz l%d \n",label+1);
		
			else fprintf (fp, "jz l%d \n",label);
			notCond=0;
		}
		else if(arr[i]=="not"){
			notCond=1;
			//for loop
			notCond_for=1;
		}
		else if(arr[i]=="endIf"){
			fprintf (fp, "jmp JOl%d\n",jmpOutLabel);
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
		//for loop
		else if(arr[i]=="forloop"){
			if(notCond_for==0){
					notCond_for=1;
					forloopCond=0;
				}
			else{notCond_for=0;forloopCond=0;}
			jmpNewLabel(notCond_for);
			notCond_for=0;
			andLabel_for=-1;
			orLabel_for=-1;
		}
		else if(arr[i]=="endforloop"){
			fprintf (fp, "jmp l%d\n",label);
			label+=1;
		}
		//for loop 
		else if(For_loop&&arr[i]=="AndAnd")
		{
			//for loop 
			if(andLabel_for==-1)andLabel_for=label++;
			if(notCond_for && forloopCond==0) fprintf (fp, "jz l%d \n",andLabel_for);
			else if(notCond_for && forloopCond) fprintf (fp, "jz l%d \n",andLabel_for+1);
			else fprintf (fp, "jnz l%d \n",andLabel_for);
			notCond_for=0;
		}
		// for loop 
		else if (For_loop&&arr[i]=="OrOr"){
			//for loop 		
			if(orLabel_for==-1)orLabel_for=label++;
			if(notCond_for && forloopCond==0) fprintf (fp, "jnz l%d \n",orLabel_for);
			else if(notCond_for && forloopCond) fprintf (fp, "jnz l%d \n",orLabel_for+1);
			else fprintf (fp, "jz l%d \n",orLabel_for);
			if(notCond_for && forloopCond==0) fprintf (fp, "jnz l%d \n",label);
			else if(notCond_for && forloopCond) fprintf (fp, "jnz l%d \n",label+1);
		
			else fprintf (fp, "jz l%d \n",label);
			notCond_for=0;
		
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
	fprintf (stderr,"Error: %s at line %d %s", syntax_error_handler(yychar), yylineno, "\n");
	fprintf (errorFile,"Error: %s at line %d %s", syntax_error_handler(yychar), yylineno, "\n");
	//fprintf(stderr, s);
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
		case 258: case 290: case 276: case 125: return "expecting a ';'!";
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