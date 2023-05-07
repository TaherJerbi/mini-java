/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     INVALID_ID = 259,
     OP_MULTIPLY = 260,
     OP_DIVIDE = 261,
     OP_ADD = 262,
     OP_SUBTRACT = 263,
     OP_MODULO = 264,
     OP_REL = 265,
     AFF = 266,
     CURLY_OPEN = 267,
     CURLY_CLOSE = 268,
     PAREN_OPEN = 269,
     PAREN_CLOSE = 270,
     SEMICOLON = 271,
     COMMA = 272,
     DOT = 273,
     COLON = 274,
     BRACKET_OPEN = 275,
     BRACKET_CLOSE = 276,
     INT_LITERAL = 277,
     FLOAT_LITERAL = 278,
     BOOLEAN_LITERAL = 279,
     CHAR_LITERAL = 280,
     STRING_LITERAL = 281,
     INT_TYPE = 282,
     FLOAT_TYPE = 283,
     BOOLEAN_TYPE = 284,
     CHAR_TYPE = 285,
     STRING_TYPE = 286,
     VOID_TYPE = 287,
     THIS_KEYWORD = 288,
     PUBLIC_KEYWORD = 289,
     PRIVATE_KEYWORD = 290,
     PROTECTED_KEYWORD = 291,
     STATIC_KEYWORD = 292,
     FINAL_KEYWORD = 293,
     ABSTRACT_KEYWORD = 294,
     CLASS_KEYWORD = 295,
     IF_KEYWORD = 296,
     ELSE_KEYWORD = 297,
     WHILE_KEYWORD = 298,
     FOR_KEYWORD = 299,
     RETURN_KEYWORD = 300,
     EXTENDS_KEYWORD = 301,
     IMPLEMENTS_KEYWORD = 302
   };
#endif
/* Tokens.  */
#define ID 258
#define INVALID_ID 259
#define OP_MULTIPLY 260
#define OP_DIVIDE 261
#define OP_ADD 262
#define OP_SUBTRACT 263
#define OP_MODULO 264
#define OP_REL 265
#define AFF 266
#define CURLY_OPEN 267
#define CURLY_CLOSE 268
#define PAREN_OPEN 269
#define PAREN_CLOSE 270
#define SEMICOLON 271
#define COMMA 272
#define DOT 273
#define COLON 274
#define BRACKET_OPEN 275
#define BRACKET_CLOSE 276
#define INT_LITERAL 277
#define FLOAT_LITERAL 278
#define BOOLEAN_LITERAL 279
#define CHAR_LITERAL 280
#define STRING_LITERAL 281
#define INT_TYPE 282
#define FLOAT_TYPE 283
#define BOOLEAN_TYPE 284
#define CHAR_TYPE 285
#define STRING_TYPE 286
#define VOID_TYPE 287
#define THIS_KEYWORD 288
#define PUBLIC_KEYWORD 289
#define PRIVATE_KEYWORD 290
#define PROTECTED_KEYWORD 291
#define STATIC_KEYWORD 292
#define FINAL_KEYWORD 293
#define ABSTRACT_KEYWORD 294
#define CLASS_KEYWORD 295
#define IF_KEYWORD 296
#define ELSE_KEYWORD 297
#define WHILE_KEYWORD 298
#define FOR_KEYWORD 299
#define RETURN_KEYWORD 300
#define EXTENDS_KEYWORD 301
#define IMPLEMENTS_KEYWORD 302




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

