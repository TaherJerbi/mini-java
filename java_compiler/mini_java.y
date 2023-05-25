%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "semantic.h"

    extern int yylineno;

    int yyerror(char const * msg);	
    int yylex();

    int level = 0;
		int class_id = -1;
		int method_id = -1;
		char* param_names[5];
		char* param_types[5];
		int param_count = 0;
		int method_call_param_count = 0;

%}
%define parse.error verbose
%define api.value.type {char*}

%token ID
%token INVALID_ID

%token OP_MULTIPLY
%token OP_DIVIDE
%token OP_ADD
%token OP_SUBTRACT
%token OP_MODULO
%token OP_REL

%token AFF
%token CURLY_OPEN
%token CURLY_CLOSE
%token PAREN_OPEN
%token PAREN_CLOSE
%token SEMICOLON
%token COMMA
%token DOT
%token COLON
%token BRACKET_OPEN
%token BRACKET_CLOSE

%token INT_LITERAL
%token FLOAT_LITERAL
%token BOOLEAN_LITERAL
%token CHAR_LITERAL
%token STRING_LITERAL

%token INT_TYPE
%token FLOAT_TYPE
%token BOOLEAN_TYPE
%token CHAR_TYPE
%token STRING_TYPE
%token VOID_TYPE

%token THIS_KEYWORD
%token PUBLIC_KEYWORD
%token PRIVATE_KEYWORD
%token PROTECTED_KEYWORD
%token STATIC_KEYWORD
%token FINAL_KEYWORD
%token ABSTRACT_KEYWORD
%token CLASS_KEYWORD
%token IF_KEYWORD
%token ELSE_KEYWORD
%token WHILE_KEYWORD
%token FOR_KEYWORD
%token RETURN_KEYWORD
%token EXTENDS_KEYWORD
%token IMPLEMENTS_KEYWORD

%%
programme: class_list { print_symtable(); warnings();}
    ;

class_list: class_list class
    | class
    ;


class:   class_header block_open class_body block_close 
    ;

class_header: CLASS_KEYWORD ID { class_id = insert_class($2); }
						;
class_body: class_body class_member
    | class_member
    ;

class_member: field_declaration
    | method_declaration
    ;

field_declaration:  access_modifier type ID AFF expression SEMICOLON { insert_var($3, $2, 1, level, class_id, -1); }  
				| access_modifier type ID SEMICOLON { insert_var($3, $2, 0, level, class_id, -1); }
    ;

id_list: ID
    | id_list COMMA ID
    ;

access_modifier: PUBLIC_KEYWORD
    | PRIVATE_KEYWORD
    | PROTECTED_KEYWORD
    | 
    ;

type: INT_TYPE
    | FLOAT_TYPE
    | BOOLEAN_TYPE
    | CHAR_TYPE
    | STRING_TYPE
    | VOID_TYPE
    | ID
    ;

method_declaration: method_signature block_open method_body block_close { param_count = 0; method_id = -1; }
    ;

method_signature: access_modifier type ID PAREN_OPEN parameter_list PAREN_CLOSE {
								method_id = insert_method($3, $2, param_types, param_names, param_count, level, class_id);		
				}
              ;

parameter_list: parameter
    | parameter_list COMMA parameter
    ;
parameter: type ID { param_names[param_count] = $2; param_types[param_count] = $1; param_count++; }
    ;

method_body: statement_list
    ;

statement_list: statement_list statement
    | statement
    ;

statement: block
    | if_statement
    | while_statement
    | for_statement
    | return_statement
    | expression_statement
    | local_variable_declaration
    | assignment_statement
    ;

assignment_statement: ID AFF expression SEMICOLON
    ;

block: block_open statement_list block_close 
    ;

block_open: CURLY_OPEN { level++; }
    ;
block_close: CURLY_CLOSE { level--; }
    ;
if_statement: IF_KEYWORD PAREN_OPEN expression PAREN_CLOSE statement
    | IF_KEYWORD PAREN_OPEN expression PAREN_CLOSE statement ELSE_KEYWORD statement
    ;

while_statement: WHILE_KEYWORD PAREN_OPEN expression PAREN_CLOSE statement
    ;

for_statement: FOR_KEYWORD PAREN_OPEN for_init_statement SEMICOLON expression SEMICOLON for_update_statement PAREN_CLOSE statement
    ;

for_init_statement: local_variable_declaration
    | expression_statement
    ;

for_update_statement: expression_statement
    ;

return_statement: RETURN_KEYWORD SEMICOLON
    | RETURN_KEYWORD expression SEMICOLON
    ;

expression:  expression OP_ADD expression
    | expression OP_SUBTRACT expression
    | expression OP_MULTIPLY expression
    | expression OP_DIVIDE expression
    | expression OP_MODULO expression
    | expression OP_REL expression
    | ID DOT expression
    | expression DOT ID PAREN_OPEN PAREN_CLOSE
    | ID PAREN_OPEN argument_list PAREN_CLOSE { check_method($1, method_call_param_count, level, class_id); method_call_param_count = 0; } // method call
    | expression PAREN_OPEN PAREN_CLOSE
    | PAREN_OPEN expression PAREN_CLOSE 
    | INT_LITERAL
    | FLOAT_LITERAL
    | BOOLEAN_LITERAL
    | CHAR_LITERAL
    | STRING_LITERAL
    | THIS_KEYWORD
    | ID { check_declaration($1, level, class_id, method_id); }
    | error { yyerror("expression error"); }
    ;

argument_list: expression { method_call_param_count = 1; }
    | argument_list COMMA expression { method_call_param_count++; }
    ;

expression_statement: SEMICOLON
    | expression SEMICOLON
    ;

local_variable_declaration: type ID SEMICOLON { insert_var($2, $1, 0, level, class_id, method_id); }
    | type ID AFF expression SEMICOLON { insert_var($2, $1, 1, level, class_id, method_id); }
    ;

%%

extern FILE *yyin;

int yyerror(char const *msg) {
	printf("---\n%s \nline: %d\n---\n", msg,yylineno);
	return 0;	
}


int main(int argc, char* argv[]) {
  if (argc < 2) {
    printf("Usage: %s filename\n", argv[0]);
    return 1;
  }

  FILE* fp = fopen(argv[1], "r");
  if (fp == NULL) {
    printf("Error: cannot open file '%s'\n", argv[1]);
    return 1;
  }
  yyin = fp;

  yyparse();

  fclose(fp);
  return 0;
}
