#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "semantic.h"

extern int line;
int st_index = 0;

int print_symtable() {
    int i;
    printf("Symbol Table\n");
    printf("id\tName\tType\tInitialized\tLevel\tCategory\tClass\tMethod\n");
    for(i = 0; i < st_index; i++){
        printf("%d\t%s\t%s\t%d\t%d\t%d\t%d\t%d\n",
            i,
            symbol_table[i].name,
			symbol_table[i].type,
			symbol_table[i].initialized,
			symbol_table[i].level,
			symbol_table[i].category,
			symbol_table[i].class_id,
			symbol_table[i].method_id);
        if (symbol_table[i].category == 2) {
            printf("Parameters:\n");
            for (int j = 0; j < symbol_table[i].num_params; j++) {
                printf("%s\t%s\n", symbol_table[i].param_types[j], symbol_table[i].param_names[j]);
            }
        }
    }
    return 0;
}

void warnings() {
    int i;
    for(i = 0; i < st_index; i++){
        if(symbol_table[i].category == 1 && symbol_table[i].initialized == 0){
            printf("WARNING(%d): Variable '%s' is uninitialized\n", symbol_table[i].line, symbol_table[i].name);
            printf("WARNING(%d): Variable '%s' never used\n", symbol_table[i].line, symbol_table[i].name);
        }
    }
}

int check_definition(char* name, int level, int class_id, int method_id){
    int i;
    for(i = 0; i < st_index; i++){
        if(strcmp(symbol_table[i].name, name) == 0){
            if(symbol_table[i].level == level && symbol_table[i].class_id == class_id && symbol_table[i].method_id == method_id){
                printf("ERROR(%d): Symbol '%s' is already defined at this level of scope\n", line, name);
                exit(1);
            }
        }
    }

    return 0;
}

int check_declaration(char* name, int level, int class_id, int method_id){
    // can only use var if it is declared in this scope or a parent scope
    int i;
    for(i = 0; i < st_index; i++){
        if(strcmp(symbol_table[i].name, name) == 0){
            // must be in same class
            if (symbol_table[i].class_id == class_id) {
                if(symbol_table[i].level <= level){
                    if(symbol_table[i].level == level && symbol_table[i].method_id != method_id){
                        continue;
                    }
                    symbol_table[i].used = 1;
                    return i;
                }
            }
        }
    }
    printf("ERROR(%d): Symbol '%s' is not declared\n", line, name);
    exit(1);

}

int check_method(char* name, int param_count, int level, int class_id){
    // must find the method in the symbol table and in this class
    int i;
    for(i = 0; i < st_index; i++){
        if(strcmp(symbol_table[i].name, name) == 0){
            if(symbol_table[i].category == 2 && symbol_table[i].class_id == class_id){
                if(symbol_table[i].num_params == param_count){
                    return i;
                }
                else {
                    printf("ERROR(%d): Method '%s' is not applicable for the given arguments\n", line, name);
                    exit(1);
                }
            }
        }
    }
    printf("ERROR(%d): Symbol '%s' is not declared in this class\n", line, name);
    exit(1);
}

int insert_var(char* name, char* type, int initialized, int level, int class_id, int method_id)
{
    check_definition(name, level, class_id, method_id);	
    // insert variable into symbol table
    symbol_table[st_index].name = name;
    symbol_table[st_index].type = type;
    symbol_table[st_index].initialized = initialized;
    symbol_table[st_index].level = level;
    symbol_table[st_index].category = 1;
    symbol_table[st_index].class_id = class_id;
    symbol_table[st_index].method_id = method_id;
    symbol_table[st_index].line = line;
    st_index++;

    return st_index-1;
}

int insert_method(char* name, char* type, char* param_types[], char* param_names[], int num_params, int level, int class_id){
    check_definition(name, level, class_id, -1);
    // insert function into symbol table
    symbol_table[st_index].name = name;
    symbol_table[st_index].type = type;
    symbol_table[st_index].level = level;
    symbol_table[st_index].category = 2;
    symbol_table[st_index].class_id = class_id;
    symbol_table[st_index].method_id = -1;

    symbol_table[st_index].num_params = num_params;

    for (int i = 0; i < num_params; i++) {
        symbol_table[st_index].param_types[i] = param_types[i];
        symbol_table[st_index].param_names[i] = param_names[i];
    }
    symbol_table[st_index].line = line;
    st_index++;
    return st_index-1;

}

int insert_class(char* name){
    check_definition(name, 0, -1, -1);
    // insert class into symbol table
    symbol_table[st_index].name = name;
    symbol_table[st_index].level = 0;
    symbol_table[st_index].category = 3;
    symbol_table[st_index].class_id = -1;
    symbol_table[st_index].method_id = -1;

    symbol_table[st_index].line = line;
    st_index++;
    return st_index-1;

}

