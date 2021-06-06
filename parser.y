%{
void yyerror (char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <math.h>     
 
#define BRANCHFACTOR 20
#define NUMVARIABLES 50
#define MAX_STR_LEN 100
#define FUNC_Args 10
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
void printQuadExpress(char* s1, char* s2, char* s3);
void try(char*operation,char* arg1, char*arg2);
int level = 0;
int node_counter;
typedef struct symbol{
	char* symbol_id;
	char* type;
	int initialized;
	int isConst;
} symbol;
typedef struct node{
	int id;
	int num_children;
	int num_symbols;
	struct node* children[BRANCHFACTOR];
	struct node* parent;
	struct symbol symbols[NUMVARIABLES];

	// in case of function only
	int num_arguments;
	char* argumet_types[FUNC_Args];
	char* argumet_names[FUNC_Args];
} node;
node* root;
node* current;
int in_function = 0;
char* function_table[BRANCHFACTOR];
char* cur_func_args[FUNC_Args];
char* cur_func_names[FUNC_Args];
int cur_func_args_num = 0;
int arg_size = -2;
int func_call_node = -1;
void new_block();
int declare_symbol(char*, char*, int, char*, int);
char* get_symbol(char* id);
void unused_symbols();
%}

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

%type <string>    expression expression1 expression2 expression3 
%type<char> '-' '+' '*' '/' '%' '&' '|' '^' '~' 
%type <string> type
%%

/* descriptions of expected inputs corresponding actions (in C) */

line	: 
		| while			    {;}
		| line while		{;}
		| dowhile		    {;}
		| line dowhile		{;}
		| start_block		{;}
		| line start_block	{;}
		| end_block		    {;}
		| line end_block	{;}
		
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
					if(in_function == 1) 
						in_function = 0; 
					if (level == 0) yyerror("start scope first!\n"); 
					else{
					int parID;
					if(current->id == 1)  parID = -1; else parID = current->parent->id;
				 	level -= 1; unused_symbols(); 
					current = current -> parent; printf("id %d , childrenNum %d, parentID %d \n", current->id, current->num_children, parID);
					}
				}
	;
term	: integer_value {;try("",toArray($1),"");} 
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
				yyerror("Function can only be declared globally!");
				return;
			}
			for(int i=0; i<BRANCHFACTOR; i++)
				if(function_table[i] && strcmp(function_table[i], $2)==0){
					char Output[MAX_STR_LEN];
					sprintf(Output, "%s%s%s", "A function with name ", $2, " is already defined!\n");
					yyerror(Output);
					return 0;
				}
			function_table[node_counter+1] = $2;
			in_function = 1;
		};
func_p2: func_p1 start_block stmtlist RET expression  SEMICOLON
 { try("RET","",""); printf("function\n");}; 



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
					yyerror(Output);
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
			
constant : CONST type identifier ASSIGN expression SEMICOLON {declare_symbol($3, $2, 1, "int", 1); printf("constant and assignment\n"); {try("POP", $3, "");}}
variable : type identifier ASSIGN expression SEMICOLON {printf("declaration and assignment\n"); {try("POP", $2, "");}}
declaration : type identifier SEMICOLON {declare_symbol($2, $1, 0, "", 0);printf("declaration\n");}
definition 	: identifier ASSIGN expression SEMICOLON 
				{
					assign_symbol($1, "int"); 
					printf("definition\n");
				} 
			| identifier ASSIGN identifier SEMICOLON 
				{
					char* t = get_symbol($3);
					if(strcmp(t, "None") == 0) 
						return;
					else 
						assign_symbol($1, t);
				}
logical_exp : identifier comparison_OP term {try("",$1,"");printf("logical expression \n");}
comparison_OP : GE {try("GE","","");} | LE {try("LE","","");} | G {try("G","","");} | L {try("L","","");} | EE {try("EE","","");} | NE {try("NE","","");}

if : IF {printf("if condition ");} OPENBRACKET ifExpr CLOSEBRACKET {try("if","","");} start_block  {printf("if condition\n");} line end_block
ifExpr : cond | cond IfFiller ifExpr {printf("expression\n");}
cond :  identifier comparison_OP identifier {try("",$1,$3);} | logical_exp | term | identifier |  bracketBeforeAndAfter | notBefore {printf("condition\n");}
bracketBeforeAndAfter : OPENBRACKET identifier comparison_OP identifier CLOSEBRACKET {try("",$2,$4);}| OPENBRACKET logical_exp CLOSEBRACKET | OPENBRACKET term CLOSEBRACKET | OPENBRACKET identifier CLOSEBRACKET {try("",$2,"");}| OPENBRACKET ifExpr CLOSEBRACKET 
notBefore : NOT OPENBRACKET identifier comparison_OP identifier CLOSEBRACKET {try($3,$5,"not");}| NOT OPENBRACKET logical_exp CLOSEBRACKET {try("not","","");} | NOT OPENBRACKET term CLOSEBRACKET {try("not","","");} | NOT OPENBRACKET identifier CLOSEBRACKET {try("not",$3,"");}| NOT OPENBRACKET ifExpr CLOSEBRACKET {try("not","","");}
elseIf : ELSE IF OPENBRACKET ifExpr CLOSEBRACKET start_block line end_block {try("elseif","","");printf("else if condition ");}
else : ELSE start_block line end_block{try("elseif","","");printf("else\n");}

switch : SWITCH OPENBRACKET identifier {try("switch",$3,"");} CLOSEBRACKET start_block cases end_block {try("endSwitch","","");}
cases : case | case cases
case :  CASE {try("case","","");} term COLON line BREAK SEMICOLON | CASE {try("case","","");} term COLON line | CASE {try("case","","");} term COLON BREAK SEMICOLON | DEFAULT COLON line BREAK SEMICOLON | DEFAULT COLON line | DEFAULT COLON BREAK SEMICOLON 
	;

while	: While OPENBRACKET ifExpr CLOSEBRACKET start_block line end_block {printf("whileLoop \n");} 
	;
dowhile	: Do_While start_block line end_block While OPENBRACKET ifExpr CLOSEBRACKET SEMICOLON {printf("dowhile \n");}
	;

//----------------- mathematical and logical expression -----------
expression: expression1 | expression2 | expression3
	;

expression1:  expression '+' expression     {try("Add", $1, $3); }
			| expression '-' expression     {try("SUB", $1, $3);}
			| expression '*' expression	    {try("MUL", $1, $3);}
			| expression '/' expression	    {try("DIV", $1, $3);}
			| expression '%' expression	    {try("MOD", $1, $3);}
			| expression '&' expression	   
			| expression '|' expression
			| expression '^' expression
			| expression IfFiller expression
			| expression comparison_OP expression
			| expression SHL expression	  {try("SHL", $1, $3);}
			| expression SHR expression	  {try("SHR", $1, $3);}
    ;

expression2:   INC expression3     {try("INC", "1", $2);}
			|  expression3 INC	   
			|  DEC expression3	   {try("DEC", "1", $2); }
			|  expression3 DEC	  
			|  '~' expression
			|  '!' expression	   {try("NOT", "$2", "");}
			|  '-' expression	   {try("NEG", "$2", "");}
	;

expression3:  OPENBRACKET expression OPENBRACKET
			| term			
			| identifier	{get_symbol($1);  $$ = $1; }	
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
	}
	// int x;
	// scanf("%d", &x);
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

void printQuadExpress(char* s1, char* s2, char* s3){
	if(s1 == "POP")
		fprintf (fp, "Pop %s\n",s2);
	else{
		fprintf (fp, "push %s\n",s2);
		if(s3 != NULL)
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
	for (int i=0;i<idx;++i){
		if(arr[i] == "EE" || arr[i] == "NE" || arr[i] == "GE"|| arr[i] == "LE"|| arr[i] == "G"|| arr[i] == "L"){
			printQuadComp(arr[i],arr[i+1],arr[i+2]);
			i+=2;
		}
		else if(arr[i] == "Add" || arr[i] == "SUB" || arr[i] == "MUL" || arr[i] == "DIV" || arr[i] == "MOD" || arr[i] == "SHL" || arr[i] == "SHR"){
			printQuadExpress(arr[i],arr[i+1],arr[i+2]);
			i += 2;
		}
		else if(arr[i] == "INC" || arr[i] == "DEC" || arr[i] == "NOT" || arr[i] == "NEG" || arr[i] == "POP"){
			printQuadExpress(arr[i], arr[i+1], NULL);
			i += 1;
		}
		else if(arr[i]=="if" || arr[i]=="elseif"){
			jmpNewLabel(notCond);
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

void yyerror (char *s) {fprintf (stderr, "%s\n", s);}

void new_block(){
	node_counter += 1;
	current->children[current->num_children] = malloc(sizeof (node));
	current->children[current->num_children] -> id = node_counter;
	current->children[current->num_children] -> num_children = 0;
	current->children[current->num_children] -> num_symbols = 0;
	current->children[current->num_children] -> parent = current;
	if(in_function == 1){
		current->children[current->num_children] -> num_arguments = cur_func_args_num;
		for (int i=0; i< cur_func_args_num; i++){
			current->children[current->num_children] -> argumet_types[i] = cur_func_args[i];
			current->children[current->num_children] -> argumet_names[i] = cur_func_names[i];
		}
		cur_func_args_num = 0;
	}
	current->num_children += 1;
	current = current->children[current->num_children - 1];	
}
int declare_symbol(char* id, char* type_id, int init, char* type_value, int isConstant){
	if(in_function){
		node* temp = current;
		while(temp->parent->id != 0) temp = temp->parent;
		for(int i=0; i< temp->num_arguments; i++)
			if(strcmp(temp->argumet_names[i], id) == 0){
			char Output[MAX_STR_LEN];
			sprintf(Output, "%s%s%s", "can't declare ", id, " (Formal Parameter) !\n");
			yyerror(Output);
			return 0;
			}
	}
	for (int i=0; i<current->num_symbols; i++)
		if(strcmp(current->symbols[i].symbol_id, id) == 0){
			char Output[MAX_STR_LEN];
			sprintf(Output, "%s%s%s", "Identifier ", id, " is already declared in this scope!\n");
			yyerror(Output);
			return 0;
		}
	if(init == 1 && strcmp(type_id, type_value)!=0){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%s", "Type mismatch while assigning ", id, "!\n");
		yyerror(Output);
		return 0;
	}
	//printf("type %s, id %s", type_id, id);
	current->symbols[current->num_symbols].symbol_id = id;
	current->symbols[current->num_symbols].type = type_id;
	current->symbols[current->num_symbols].initialized = init;
	current->symbols[current->num_symbols].isConst = isConstant;
	current->num_symbols += 1;
	return 1;
}
node* find_symbol(char* id, int* index){
	*index = -1;
	node* search_node = current;
	while(1){
		for (int i=0; i<search_node->num_symbols; i++){
			if (strcmp(search_node->symbols[i].symbol_id, id) == 0){
				*index = i;
				return search_node;
			}
		}
		if (search_node->id == 0)
			return NULL;
		search_node = search_node->parent;
	}
}
int assign_symbol(char* id, char* data_type){
	if(in_function){
		node* temp = current;
		while(temp->parent->id != 0) temp = temp->parent;
		for(int i=0; i< temp->num_arguments; i++)
			if(strcmp(temp->argumet_names[i], id) == 0)
				return 1;
	}
	int* index = (int*) malloc (sizeof(int));
	node* symbol_node = find_symbol(id, index);
	if (symbol_node == NULL){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%s", "Undeclared Identifier ", id, "!\n");
		yyerror(Output);
		return 0;
	}
	else if(symbol_node->symbols[*index].isConst == 1){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%s", "Constant identifier ", id, " can't be re-assigned!\n");
		yyerror(Output);
		return 0;
	}
	else if(strcmp(symbol_node->symbols[*index].type, data_type)!= 0){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%S", "Type mismatch while assigning ", id, "!\n");
		yyerror(Output);
		return 0;
	}
	else{
		symbol_node->symbols[*index].initialized = 1;
		return 1;
	}
}
char* get_symbol(char* id){
	if(in_function){
		node* temp = current;
		while(temp->parent->id != 0) temp = temp->parent;
		for(int i=0; i< temp->num_arguments; i++)
			if(strcmp(temp->argumet_names[i], id) == 0)
				return temp->argumet_types[i];
	}
	int* index = (int*) malloc (sizeof(int));
	node* symbol_node = find_symbol(id, index);
	if (symbol_node == NULL){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%s", "Undeclared Identifier ", id, "!\n");
		yyerror(Output);
		return "None";
	}
	else if(symbol_node->symbols[*index].initialized != 1){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%s", "identifier ", id,  " is not yet initialized!\n");
		yyerror(Output);
		return "None";
	}
	else
		return symbol_node->symbols[*index].type;
}
void unused_symbols(){
	for (int i=0; i<current->num_symbols; i++){
		if (current->symbols[i].initialized != 1)
			printf("Warning: Variable %s is declared but never used!\n", current->symbols[i].symbol_id);
	}
}
int type_conversion(char* id, char* new_type){
	int* index = (int*) malloc (sizeof(int));
	node* symbol_node = find_symbol(id, index);
	if (symbol_node == NULL){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%s", "Undeclared Identifier ", id, "!\n");
		yyerror(Output);
		return 0;
	}
	else{
		symbol_node->symbols[*index].type = new_type;
		return 1;
	}
}
void traverse_node(node* Node, FILE* fp, char* seq){
	fprintf(fp, "{\n %s \n", seq);
	for(int i=0; i < Node->num_symbols; i++){
		fprintf(fp, "\t %s %s %d\n", Node->symbols[i].symbol_id, Node->symbols[i].type, Node->symbols[i].initialized);
	}
	fprintf(fp, "}\n");
	for (int i=0; i < Node->num_children; i++){
		char Output[10];
		sprintf(Output, "%s.%d", seq, i, "!\n");
		traverse_node(Node->children[i], fp, Output);
	}
}
void print_symbol_table(){
	FILE * fp;
   	fp = fopen ("symbol_table.txt","w");
	traverse_node(root, fp, "0");	
   	fclose (fp);
}

int check_func(char* type){
	if(arg_size <= 0){
	 	yyerror("Too much arguments!\n");
		return 0;
	}
	if(strcmp(root->children[func_call_node]->argumet_types[arg_size-1], type) != 0){
	  	yyerror("Invalid argument list!\n");
	  	return 0;
	}
	arg_size -= 1;
	return 1;
}
void func_call_handler(){
	if(arg_size != 0){
		yyerror("Missing another argument(s)!\n");
		return;
		}
	func_call_node = 0;
	printf("Function Call\n");
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






/*
void new_define(){
	if(arg_size != 0){
		yyerror("Missing another argument(s)!\n");
		return;
		}
	func_call_node = 0;
	printf("Function Call\n");
}*/