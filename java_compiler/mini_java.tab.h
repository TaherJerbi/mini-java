/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_MINI_JAVA_TAB_H_INCLUDED
# define YY_YY_MINI_JAVA_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    INVALID_ID = 259,              /* INVALID_ID  */
    OP_MULTIPLY = 260,             /* OP_MULTIPLY  */
    OP_DIVIDE = 261,               /* OP_DIVIDE  */
    OP_ADD = 262,                  /* OP_ADD  */
    OP_SUBTRACT = 263,             /* OP_SUBTRACT  */
    OP_MODULO = 264,               /* OP_MODULO  */
    OP_REL = 265,                  /* OP_REL  */
    AFF = 266,                     /* AFF  */
    CURLY_OPEN = 267,              /* CURLY_OPEN  */
    CURLY_CLOSE = 268,             /* CURLY_CLOSE  */
    PAREN_OPEN = 269,              /* PAREN_OPEN  */
    PAREN_CLOSE = 270,             /* PAREN_CLOSE  */
    SEMICOLON = 271,               /* SEMICOLON  */
    COMMA = 272,                   /* COMMA  */
    DOT = 273,                     /* DOT  */
    COLON = 274,                   /* COLON  */
    BRACKET_OPEN = 275,            /* BRACKET_OPEN  */
    BRACKET_CLOSE = 276,           /* BRACKET_CLOSE  */
    INT_LITERAL = 277,             /* INT_LITERAL  */
    FLOAT_LITERAL = 278,           /* FLOAT_LITERAL  */
    BOOLEAN_LITERAL = 279,         /* BOOLEAN_LITERAL  */
    CHAR_LITERAL = 280,            /* CHAR_LITERAL  */
    STRING_LITERAL = 281,          /* STRING_LITERAL  */
    INT_TYPE = 282,                /* INT_TYPE  */
    FLOAT_TYPE = 283,              /* FLOAT_TYPE  */
    BOOLEAN_TYPE = 284,            /* BOOLEAN_TYPE  */
    CHAR_TYPE = 285,               /* CHAR_TYPE  */
    STRING_TYPE = 286,             /* STRING_TYPE  */
    VOID_TYPE = 287,               /* VOID_TYPE  */
    THIS_KEYWORD = 288,            /* THIS_KEYWORD  */
    PUBLIC_KEYWORD = 289,          /* PUBLIC_KEYWORD  */
    PRIVATE_KEYWORD = 290,         /* PRIVATE_KEYWORD  */
    PROTECTED_KEYWORD = 291,       /* PROTECTED_KEYWORD  */
    STATIC_KEYWORD = 292,          /* STATIC_KEYWORD  */
    FINAL_KEYWORD = 293,           /* FINAL_KEYWORD  */
    ABSTRACT_KEYWORD = 294,        /* ABSTRACT_KEYWORD  */
    CLASS_KEYWORD = 295,           /* CLASS_KEYWORD  */
    IF_KEYWORD = 296,              /* IF_KEYWORD  */
    ELSE_KEYWORD = 297,            /* ELSE_KEYWORD  */
    WHILE_KEYWORD = 298,           /* WHILE_KEYWORD  */
    FOR_KEYWORD = 299,             /* FOR_KEYWORD  */
    RETURN_KEYWORD = 300,          /* RETURN_KEYWORD  */
    EXTENDS_KEYWORD = 301,         /* EXTENDS_KEYWORD  */
    IMPLEMENTS_KEYWORD = 302       /* IMPLEMENTS_KEYWORD  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef char* YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_MINI_JAVA_TAB_H_INCLUDED  */
