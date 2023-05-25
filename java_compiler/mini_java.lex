%option noyywrap
%option yylineno
%{
 #include <stdio.h>	
 #include <stdlib.h>	

 #include "mini_java.tab.h"	                                                                         	
 #include <math.h>	 			
%}

%{
int line = 1;
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
[\n\r]                  { ++line ;}
{START_COMMENT}         { BEGIN(comment); }
<comment>[^*\n]*        /* consume anything that isn't a comment end */
<comment>"*"+[^*/\n]*   /* consume *'s not followed by / or newline */
<comment>\n             { ++line; }
<comment>"*"+"/"        { BEGIN(INITIAL); }


{INT_TYPE}               { yylval = strdup(yytext); return INT_TYPE; }
{FLOAT_TYPE}             { yylval = strdup(yytext); return FLOAT_TYPE; }
{CHAR_TYPE}              { yylval = strdup(yytext); return CHAR_TYPE; }
{STRING_TYPE}            { yylval = strdup(yytext); return STRING_TYPE; }
{BOOLEAN_TYPE}           { yylval = strdup(yytext); return BOOLEAN_TYPE; }
{VOID_TYPE}              { yylval = strdup(yytext); return VOID_TYPE; }

{THIS_KEYWORD}           { yylval = strdup(yytext); return THIS_KEYWORD; }
{PUBLIC_KEYWORD}         { yylval = strdup(yytext); return PUBLIC_KEYWORD; }
{PRIVATE_KEYWORD}        { yylval = strdup(yytext); return PRIVATE_KEYWORD; }
{PROTECTED_KEYWORD}      { yylval = strdup(yytext); return PROTECTED_KEYWORD; }
{STATIC_KEYWORD}         { yylval = strdup(yytext); return STATIC_KEYWORD; }
{FINAL_KEYWORD}          { yylval = strdup(yytext); return FINAL_KEYWORD; }
{ABSTRACT_KEYWORD}       { yylval = strdup(yytext); return ABSTRACT_KEYWORD; }
{CLASS_KEYWORD}          { yylval = strdup(yytext); return CLASS_KEYWORD; }
{IF_KEYWORD}             { yylval = strdup(yytext); return IF_KEYWORD; }
{ELSE_KEYWORD}           { yylval = strdup(yytext); return ELSE_KEYWORD; }
{WHILE_KEYWORD}          { yylval = strdup(yytext); return WHILE_KEYWORD; }
{FOR_KEYWORD}            { yylval = strdup(yytext); return FOR_KEYWORD; }
{RETURN_KEYWORD}         { yylval = strdup(yytext); return RETURN_KEYWORD; }
{EXTENDS_KEYWORD}        { yylval = strdup(yytext); return EXTENDS_KEYWORD; }
{IMPLEMENTS_KEYWORD}     { yylval = strdup(yytext); return IMPLEMENTS_KEYWORD; }


{OP_MULTIPLY}            { yylval = strdup(yytext); return OP_MULTIPLY; }
{OP_DIVIDE}              { yylval = strdup(yytext); return OP_DIVIDE; }
{OP_ADD}                 { yylval = strdup(yytext); return OP_ADD; }
{OP_SUBTRACT}            { yylval = strdup(yytext); return OP_SUBTRACT; }
{OP_MODULO}              { yylval = strdup(yytext); return OP_MODULO; }

{OP_REL}                 { yylval = strdup(yytext); return OP_REL; }


{AFF}                    { yylval = strdup(yytext); return AFF; }
{CURLY_OPEN}             { yylval = strdup(yytext); return CURLY_OPEN; }
{CURLY_CLOSE}            { yylval = strdup(yytext); return CURLY_CLOSE; }
{PAREN_OPEN}             { yylval = strdup(yytext); return PAREN_OPEN; }
{PAREN_CLOSE}            { yylval = strdup(yytext); return PAREN_CLOSE; }
{SEMICOLON}              { yylval = strdup(yytext); return SEMICOLON; }
{COMMA}                  { yylval = strdup(yytext); return COMMA; }
{DOT}                    { yylval = strdup(yytext); return DOT; }
{COLON}                  { yylval = strdup(yytext); return COLON; }
{BRACKET_OPEN}           { yylval = strdup(yytext); return BRACKET_OPEN; }
{BRACKET_CLOSE}          { yylval = strdup(yytext); return BRACKET_CLOSE; }


{BOOLEAN_LITERAL}        { yylval = strdup(yytext); return BOOLEAN_LITERAL; }
{INT_LITERAL}            { yylval = strdup(yytext); return INT_LITERAL; }
{FLOAT_LITERAL}          { yylval = strdup(yytext); return FLOAT_LITERAL; }
{CHAR_LITERAL}           { yylval = strdup(yytext); return CHAR_LITERAL; }
{STRING_LITERAL}         { yylval = strdup(yytext); return STRING_LITERAL; }

{ID}                     { yylval = strdup(yytext); return ID; }
{INVALID_ID}            { printf("illegal_identifier \'%s\' on line :%d\n",yytext,yylineno);}
{SINGLE_QUOTE}({CHARACTER}|{DIGIT}|{LETTER})*{SINGLE_QUOTE} { printf("---\nCan't use single quote from string literal\n %s on line :%d\n---\n",yytext,yylineno);}
.                       { printf("illegal_character \'%s\' on line :%d\n",yytext,yylineno);}

%%
