#include <stdio.h>
#define BRANCHFACTOR 20
#define NUMVARIABLES 50
#define MAX_STR_LEN 100
#define FUNC_Args 10
char* function_table[BRANCHFACTOR];
char* cur_func_args[FUNC_Args];
char* cur_func_names[FUNC_Args];
int cur_func_args_num = 0;
int arg_size = -2;
int func_call_node = -1;
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
int node_counter;
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
			yyerror_semantic(Output);
			return 0;
			}
	}
	for (int i=0; i<current->num_symbols; i++)
		if(strcmp(current->symbols[i].symbol_id, id) == 0){
			char Output[MAX_STR_LEN];
			sprintf(Output, "%s%s%s", "Identifier ", id, " is already declared in this scope!\n");
			yyerror_semantic(Output);
			return 0;
		}
	if(init == 1 && strcmp(type_id, type_value)!=0){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%s", "Type mismatch while assigning ", id, "!\n");
		yyerror_semantic(Output);
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
		yyerror_semantic(Output);
		return 0;
	}
	else if(symbol_node->symbols[*index].isConst == 1){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%s", "Constant identifier ", id, " can't be re-assigned!\n");
		yyerror_semantic(Output);
		return 0;
	}
	else if(strcmp(symbol_node->symbols[*index].type, data_type)!= 0){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%S", "Type mismatch while assigning ", id, "!\n");
		yyerror_semantic(Output);
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
		yyerror_semantic(Output);
		return "None";
	}
	else if(symbol_node->symbols[*index].initialized != 1){
		char Output[MAX_STR_LEN];
		sprintf(Output, "%s%s%s", "identifier ", id,  " is not yet initialized!\n");
		yyerror_semantic(Output);
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
		yyerror_semantic(Output);
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
	 	yyerror_semantic("Too much arguments!\n");
		return 0;
	}
	if(strcmp(root->children[func_call_node]->argumet_types[arg_size-1], type) != 0){
	  	yyerror_semantic("Invalid argument list!\n");
	  	return 0;
	}
	arg_size -= 1;
	return 1;
}
void func_call_handler(){
	if(arg_size != 0){
		yyerror_semantic("Missing another argument(s)!\n");
		return;
		}
	func_call_node = 0;
	printf("Function Call\n");
}

char* read_input_file(char* filename){
	FILE *fp;
	long lSize;
	char *buffer;
	fp = fopen ( filename , "rb" );
	if( !fp ) perror(filename),exit(1);
	fseek( fp , 0L , SEEK_END);
	lSize = ftell( fp );
	rewind( fp );
	buffer = calloc( 1, lSize+1 );
	if( !buffer ) fclose(fp),fputs("memory alloc fails",stderr),exit(1);
	if( 1!=fread( buffer , lSize, 1 , fp) )
	fclose(fp),free(buffer),fputs("entire read fails",stderr),exit(1);
	fclose(fp);
	return(buffer);
}