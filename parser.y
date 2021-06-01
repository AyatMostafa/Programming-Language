%{
void yyerror (char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#define BRANCHFACTOR 20
#define NUMVARIABLES 50
#define MAX_STR_LEN 100
char* scopes[50];
int level = 0;
int node_counter;
typedef struct symbol{
	char* symbol_id;
	char* type;
	int initialized;
} symbol;
typedef struct node{
	int id;
	int num_children;
	int num_symbols;
	struct node* children[BRANCHFACTOR];
	struct node* parent;
	struct symbol symbols[NUMVARIABLES];
} node;
node* root;
node* current;

void new_block();
int declare_symbol(char*, char*, int, char*);
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
%token <string> comparison_OP
%token INC
%token DEC
%token SHL
%token SHR

%type<location> '-' '+' '*' '/' '%' '&' '|' '^' '~' 
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
	    | func {;}
		| line func{;}
		| func_call{;}
		| line func_call{;}
	;

//{level += 1;  }
start_block: '{'		{level += 1; new_block(); printf("id %d , childrenNum %d, parentID %d \n", current->id, current->num_children, current->parent->id);}
	;
end_block  : '}'{
					if (level == 0) yyerror("start scope first!\n"); 
					else{
					int parID;
					if(current->id == 1)  parID = -1; else parID = current->parent->id;
				 	level -= 1; unused_symbols(); current = current -> parent; printf("id %d , childrenNum %d, parentID %d \n", current->id, current->num_children, parID);
					}
				}
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
stmtlist:  line 
          | stmtlist line 
		  ;	

func : type identifier OPENBRACKET argList CLOSEBRACKET start_block stmtlist RET expression SEMICOLON end_block{printf("function\n");} 
func_call: identifier OPENBRACKET identifier CLOSEBRACKET SEMICOLON {printf("Function Call\n");}
constant : CONST type identifier ASSIGN expression SEMICOLON {printf("constant and assignment\n");}
variable : type identifier ASSIGN expression SEMICOLON {printf("declaration and assignment\n");}
declaration : type identifier SEMICOLON {declare_symbol($2, $1, 0, "");printf("declaration\n");}
definition : identifier ASSIGN expression SEMICOLON {assign_symbol($1, "int"); printf("definition\n");} | identifier ASSIGN identifier SEMICOLON {assign_symbol($1, get_symbol($3));}
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
	;

expression1:  expression ASSIGN expression
			| expression '+' expression
			| expression '-' expression
			| expression '*' expression
			| expression '/' expression
			| expression '%' expression
			| expression '&' expression
			| expression '|' expression
			| expression '^' expression
			| expression IfFiller expression
			| expression comparison_OP expression
			| expression SHL expression
			| expression SHR expression
    ;

expression2:   INC expression3
			|  expression3 INC
			|  DEC expression3
			|  expression3 DEC
			|  '~' expression
			|  '!' expression
			|  '-' expression
	;

expression3:  OPENBRACKET expression OPENBRACKET
			| term
			| identifier	{get_symbol($1);}	
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
	return 0;
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);}

void new_block(){
	node_counter += 1;
	current->children[current->num_children] = malloc(sizeof (node));
	current->children[current->num_children] -> id = node_counter;
	current->children[current->num_children] -> num_children = 0;
	current->children[current->num_children] -> num_symbols = 0;
	current->children[current->num_children] -> parent = current;
	current->num_children += 1;
	current = current->children[current->num_children - 1];	
}
int declare_symbol(char* id, char* type_id, int init, char* type_value){
	for (int i=0; i<current->num_symbols; i++)
		if(strcmp(current->symbols[i].symbol_id, id) == 0){
			char Output[MAX_STR_LEN];
			sprintf(Output, "%s%s%s", "Identifier ", id, " is already declared in this scope!\n");
			yyerror(Output);
			return 0;
		}
	if(init == 1 && strcmp(type_id, type_value)!=0){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%s", "type mismatch in assigning", id, "!\n");
		yyerror(Output);
		return 0;
	}
	//printf("type %s, id %s", type_id, id);
	current->symbols[current->num_symbols].symbol_id = id;
	current->symbols[current->num_symbols].type = type_id;
	current->symbols[current->num_symbols].initialized = init;
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
	int* index = (int*) malloc (sizeof(int));
	node* symbol_node = find_symbol(id, index);
	//printf("index %d", *index);
	if (symbol_node == NULL){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%s", "Undeclared Identifier ", id, "!\n");
		yyerror(Output);
		return 0;
	}
	else if(strcmp(symbol_node->symbols[*index].type, data_type)!= 0){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%S", "type mismatch while assigning ", id, "!\n");
		yyerror(Output);
		return 0;
	}
	else{
		symbol_node->symbols[*index].initialized = 1;
		return 1;
	}
}
char* get_symbol(char* id){
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
	else{
		return symbol_node->symbols[*index].type;
	}
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
	for (int i=0; i < Node->num_children; i++){
		char Output[10];
		sprintf(Output, "%s.%d", seq, i, "!\n");
		traverse_node(Node->children[i], fp, Output);
	}
	fprintf(fp, "{\n %s \n", seq);
	for(int i=0; i < Node->num_symbols; i++){
		fprintf(fp, "\t %s %s %d\n", Node->symbols[i].symbol_id, Node->symbols[i].type, Node->symbols[i].initialized);
	}
	fprintf(fp, "}\n");
}
void print_symbol_table(){
	FILE * fp;
   	fp = fopen ("symbol_table.txt","w");
	traverse_node(root, fp, "0");	
   	fclose (fp);
}
