%option noyywrap
%option yylineno
%{
 #include <stdio.h>	
 #include <stdlib.h>	

 #include "mini_java.tab.h"	                                                                         	
 #include <math.h>	 			
%}

%{
int line_nb = 1;
%}

%x comment 

DELIM [ \t]
WS {DELIM}+
NONZERODIGIT [1-9]
DIGIT 0|{NONZERODIGIT}
LETTER [a-zA-Z]
SPECIAL_CHAR [!@#$%^&*()_+|~=`{}\[\]:";'<>?,.\/]
CHARACTER {LETTER}|{DIGIT}|{SPECIAL_CHAR}

INT_TYPE "int"
FLOAT_TYPE "float"
CHAR_TYPE "char"
STRING_TYPE "String"
BOOLEAN_TYPE "boolean"
VOID_TYPE "void"

THIS_KEYWORD "this"
PUBLIC_KEYWORD "public"
PRIVATE_KEYWORD "private"
PROTECTED_KEYWORD "protected"
STATIC_KEYWORD "static"
FINAL_KEYWORD "final"
ABSTRACT_KEYWORD "abstract"
CLASS_KEYWORD "class"
IF_KEYWORD "if"
ELSE_KEYWORD "else"
WHILE_KEYWORD "while"
FOR_KEYWORD "for"
RETURN_KEYWORD "return"
EXTENDS_KEYWORD "extends"
IMPLEMENTS_KEYWORD "implements"

ID {LETTER}({LETTER}|{DIGIT}|_)*
INVALID_ID {DIGIT}+({LETTER}|_)+({LETTER}|{DIGIT}|_)*

OP_MULTIPLY "*"
OP_DIVIDE "/"
OP_ADD "+"
OP_SUBTRACT "-"
OP_MODULO "%"

OP_REL "<"|">"|"=="|"<="|">=" 

AFF "="
CURLY_OPEN "{"
CURLY_CLOSE "}"
PAREN_OPEN "("
PAREN_CLOSE ")"
SEMICOLON ";"
COMMA ","
DOT "."
COLON ":"
BRACKET_OPEN "["
BRACKET_CLOSE "]"

INT_LITERAL  ({NONZERODIGIT}{DIGIT}+)|{DIGIT}
FLOAT_LITERAL ("-")?INT("."{DIGIT}+)(("E"|"e")"-"?{DIGIT}+)?
BOOLEAN_LITERAL "true"|"false" 
SINGLE_QUOTE "'"
CHAR_LITERAL {SINGLE_QUOTE}({CHARACTER}|{DIGIT}|{LETTER}){SINGLE_QUOTE}

DOUBLE_QUOTE "\""
STRING_LITERAL {DOUBLE_QUOTE}({CHARACTER}|{DIGIT}|{LETTER})*{DOUBLE_QUOTE}


START_COMMENT "/\*"


%%
{WS}+                   /* ignore whitespace */
[\n\r]                  { ++line_nb ;}
{START_COMMENT}         { BEGIN(comment); }
<comment>[^*\n]*        /* consume anything that isn't a comment end */
<comment>"*"+[^*/\n]*   /* consume *'s not followed by / or newline */
<comment>\n             { ++line_nb; }
<comment>"*"+"/"        { BEGIN(INITIAL); }


{INT_TYPE}              return INT_TYPE;
{FLOAT_TYPE}            return FLOAT_TYPE;
{CHAR_TYPE}             return CHAR_TYPE;
{STRING_TYPE}           return STRING_TYPE;
{BOOLEAN_TYPE}          return BOOLEAN_TYPE;
{VOID_TYPE}             return VOID_TYPE;

{THIS_KEYWORD}          return THIS_KEYWORD;
{PUBLIC_KEYWORD}        return PUBLIC_KEYWORD;
{PRIVATE_KEYWORD}       return PRIVATE_KEYWORD;
{PROTECTED_KEYWORD}     return PROTECTED_KEYWORD;
{STATIC_KEYWORD}        return STATIC_KEYWORD;
{FINAL_KEYWORD}         return FINAL_KEYWORD;
{ABSTRACT_KEYWORD}      return ABSTRACT_KEYWORD;
{CLASS_KEYWORD}         return CLASS_KEYWORD;
{IF_KEYWORD}            return IF_KEYWORD;
{ELSE_KEYWORD}          return ELSE_KEYWORD;
{WHILE_KEYWORD}         return WHILE_KEYWORD;
{FOR_KEYWORD}           return FOR_KEYWORD;
{RETURN_KEYWORD}        return RETURN_KEYWORD;
{EXTENDS_KEYWORD}       return EXTENDS_KEYWORD;
{IMPLEMENTS_KEYWORD}    return IMPLEMENTS_KEYWORD;


{OP_MULTIPLY}           return OP_MULTIPLY;
{OP_DIVIDE}             return OP_DIVIDE;
{OP_ADD}                return OP_ADD;
{OP_SUBTRACT}           return OP_SUBTRACT;
{OP_MODULO}             return OP_MODULO;

{OP_REL}                return OP_REL;


{AFF}                   return AFF;
{CURLY_OPEN}            return CURLY_OPEN;
{CURLY_CLOSE}           return CURLY_CLOSE;
{PAREN_OPEN}            return PAREN_OPEN;
{PAREN_CLOSE}           return PAREN_CLOSE;
{SEMICOLON}             return SEMICOLON;
{COMMA}                 return COMMA;
{DOT}                   return DOT;
{COLON}                 return COLON;
{BRACKET_OPEN}          return BRACKET_OPEN;
{BRACKET_CLOSE}         return BRACKET_CLOSE;


{BOOLEAN_LITERAL}       return BOOLEAN_LITERAL;
{INT_LITERAL}           return INT_LITERAL;
{FLOAT_LITERAL}         return FLOAT_LITERAL;
{CHAR_LITERAL}          return CHAR_LITERAL;
{STRING_LITERAL}        return STRING_LITERAL;

{ID}                    return ID;
{INVALID_ID}            {printf("illegal_identifier \'%s\' on line :%d\n",yytext,yylineno);}
{SINGLE_QUOTE}({CHARACTER}|{DIGIT}|{LETTER})*{SINGLE_QUOTE} {printf("---\nCan't use single quote from string literal\n %s on line :%d\n---\n",yytext,yylineno);}
.                       {printf("illegal_character \'%s\' on line :%d\n",yytext,yylineno);}

%%
