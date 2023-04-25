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
     BOOLEAN = 258,
     KEY_WORD = 259,
     REAL = 260,
     ID = 261,
     INTEGER_LITERAL = 262,
     OP_REL = 263,
     OP_ARITH = 264,
     AFF = 265,
     SEMICOLON = 266,
     OPEN_PAR = 267,
     CLOSE_PAR = 268,
     OPEN_BRACKET = 269,
     CLOSE_BRACKET = 270,
     OPEN_SQUARE_BRACKET = 271,
     CLOSE_SQUARE_BRACKET = 272,
     DOT = 273,
     DOUBLE_QUOTE = 274,
     CLASS = 275,
     COMMA = 276,
     PRIMITIVE_TYPE = 277,
     VOID = 278,
     IF = 279,
     ELSE = 280,
     WHILE = 281,
     RETURN = 282,
     EXTENDS = 283,
     IMPLEMENTS = 284
   };
#endif
/* Tokens.  */
#define BOOLEAN 258
#define KEY_WORD 259
#define REAL 260
#define ID 261
#define INTEGER_LITERAL 262
#define OP_REL 263
#define OP_ARITH 264
#define AFF 265
#define SEMICOLON 266
#define OPEN_PAR 267
#define CLOSE_PAR 268
#define OPEN_BRACKET 269
#define CLOSE_BRACKET 270
#define OPEN_SQUARE_BRACKET 271
#define CLOSE_SQUARE_BRACKET 272
#define DOT 273
#define DOUBLE_QUOTE 274
#define CLASS 275
#define COMMA 276
#define PRIMITIVE_TYPE 277
#define VOID 278
#define IF 279
#define ELSE 280
#define WHILE 281
#define RETURN 282
#define EXTENDS 283
#define IMPLEMENTS 284




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

