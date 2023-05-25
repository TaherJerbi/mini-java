#ifndef SYMTAB_H
#define SYMTAB_H

#define PARAM_NUMBER   5

static char *symbol_kinds[] = { "VARIABLE", "METHOD", "CLASS"};
static char *symbol_functions[] = { "DECLARATION", "PARAMETER", "INSTANTIATION","USE","ASSIGNMENT"};

extern int line;

typedef struct node {
				char* name;                                             // variable name
				char* type;                                             // variable type or method return type
				int initialized;                                        // if variable is initialized
				int used;					       // if variable is used
				int level;                                              // variable level
				char* param_types[PARAM_NUMBER];                      // agrs type if function
				char* param_names[PARAM_NUMBER];                      // params if function
				int num_params;                                       // number of params if function
				int params_init[PARAM_NUMBER] ;                         // agrs init if function
				int class_id;                                           // class id
				int method_id;
				int line;
				int category; // 1 = variable, 2 = method, 3 = class
} NODE;

#define SYMBOL_TABLE_LENGTH 300

NODE symbol_table[SYMBOL_TABLE_LENGTH];

void warnings();
int check_declaration(char* name, int level, int class_id, int method_id);
int check_method(char* name, int param_count, int level, int class_id);
int check_definition(char* name, int level, int class_id, int method_id);
int print_symtable();
int insert_var(char* name, char* type, int initialized, int level, int class_id, int method_id);

int insert_method(char* name, char* type, char* param_types[], char* param_names[], int num_params, int level, int class_id);

int insert_class(char* name);
#endif
