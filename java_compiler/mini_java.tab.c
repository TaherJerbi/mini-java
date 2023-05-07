/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 1 "mini_java.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    // #include "semantic.c"

    extern int yylineno;

    int yyerror(char const * msg);	
    int yylex();

    



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 215 "mini_java.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   511

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNRULES -- Number of states.  */
#define YYNSTATES  182

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    15,    21,    27,    33,
      39,    45,    53,    61,    71,    74,    76,    78,    80,    85,
      91,    98,   106,   108,   112,   114,   116,   118,   119,   121,
     123,   125,   127,   129,   131,   133,   138,   145,   153,   159,
     166,   168,   172,   175,   177,   180,   182,   184,   186,   188,
     190,   192,   194,   196,   198,   203,   207,   213,   221,   227,
     237,   239,   241,   243,   246,   250,   254,   258,   262,   266,
     270,   274,   278,   284,   289,   293,   297,   299,   301,   303,
     305,   307,   309,   311,   313,   315,   319,   321,   324,   328
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    50,    -1,    50,    51,    -1,    51,    -1,
      40,     3,    12,    13,    -1,    40,     3,    12,    52,    13,
      -1,     1,     3,    12,    52,    13,    -1,    40,     1,    12,
      52,    13,    -1,    40,     3,     1,    52,    13,    -1,    40,
       3,    12,    52,     1,    -1,    40,     3,    46,     3,    12,
      52,    13,    -1,    40,     3,    47,    55,    12,    52,    13,
      -1,    40,     3,    46,     3,    47,    55,    12,    52,    13,
      -1,    52,    53,    -1,    53,    -1,    54,    -1,    58,    -1,
      56,    57,    55,    16,    -1,    56,    37,    57,    55,    16,
      -1,    56,    57,     3,    11,    73,    16,    -1,    56,    37,
      57,     3,    11,    73,    16,    -1,     3,    -1,    55,    17,
       3,    -1,    34,    -1,    35,    -1,    36,    -1,    -1,    27,
      -1,    28,    -1,    29,    -1,    30,    -1,    31,    -1,    32,
      -1,     3,    -1,    59,    12,    62,    13,    -1,    56,    57,
       3,    14,    60,    15,    -1,    56,    37,    57,     3,    14,
      60,    15,    -1,    56,    57,     3,    14,    15,    -1,    56,
      37,    57,     3,    14,    15,    -1,    61,    -1,    60,    17,
      61,    -1,    57,     3,    -1,    63,    -1,    63,    64,    -1,
      64,    -1,    66,    -1,    67,    -1,    68,    -1,    69,    -1,
      72,    -1,    75,    -1,    76,    -1,    65,    -1,     3,    11,
      73,    16,    -1,    12,    63,    13,    -1,    41,    14,    73,
      15,    64,    -1,    41,    14,    73,    15,    64,    42,    64,
      -1,    43,    14,    73,    15,    64,    -1,    44,    14,    70,
      16,    73,    16,    71,    15,    64,    -1,    76,    -1,    75,
      -1,    75,    -1,    45,    16,    -1,    45,    73,    16,    -1,
      73,     7,    73,    -1,    73,     8,    73,    -1,    73,     5,
      73,    -1,    73,     6,    73,    -1,    73,     9,    73,    -1,
      73,    10,    73,    -1,     3,    18,    73,    -1,    73,    18,
       3,    14,    15,    -1,    73,    14,    74,    15,    -1,    73,
      14,    15,    -1,    14,    73,    15,    -1,    22,    -1,    23,
      -1,    24,    -1,    25,    -1,    26,    -1,    33,    -1,     3,
      -1,     1,    -1,    73,    -1,    74,    17,    73,    -1,    16,
      -1,    73,    16,    -1,    57,     3,    16,    -1,    57,     3,
      11,    73,    16,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    68,    68,    71,    72,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    86,    87,    90,    91,    94,    95,
      96,    97,   100,   101,   104,   105,   106,   107,   110,   111,
     112,   113,   114,   115,   116,   119,   122,   123,   124,   125,
     128,   129,   131,   134,   137,   138,   141,   142,   143,   144,
     145,   146,   147,   148,   151,   154,   157,   158,   161,   164,
     167,   168,   171,   174,   175,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   199,   200,   203,   204,   207,   208
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INVALID_ID", "OP_MULTIPLY",
  "OP_DIVIDE", "OP_ADD", "OP_SUBTRACT", "OP_MODULO", "OP_REL", "AFF",
  "CURLY_OPEN", "CURLY_CLOSE", "PAREN_OPEN", "PAREN_CLOSE", "SEMICOLON",
  "COMMA", "DOT", "COLON", "BRACKET_OPEN", "BRACKET_CLOSE", "INT_LITERAL",
  "FLOAT_LITERAL", "BOOLEAN_LITERAL", "CHAR_LITERAL", "STRING_LITERAL",
  "INT_TYPE", "FLOAT_TYPE", "BOOLEAN_TYPE", "CHAR_TYPE", "STRING_TYPE",
  "VOID_TYPE", "THIS_KEYWORD", "PUBLIC_KEYWORD", "PRIVATE_KEYWORD",
  "PROTECTED_KEYWORD", "STATIC_KEYWORD", "FINAL_KEYWORD",
  "ABSTRACT_KEYWORD", "CLASS_KEYWORD", "IF_KEYWORD", "ELSE_KEYWORD",
  "WHILE_KEYWORD", "FOR_KEYWORD", "RETURN_KEYWORD", "EXTENDS_KEYWORD",
  "IMPLEMENTS_KEYWORD", "$accept", "programme", "class_list", "class",
  "class_body", "class_member", "field_declaration", "id_list",
  "access_modifier", "type", "method_declaration", "method_signature",
  "parameter_list", "parameter", "method_body", "statement_list",
  "statement", "assignment_statement", "block", "if_statement",
  "while_statement", "for_statement", "for_init_statement",
  "for_update_statement", "return_statement", "expression",
  "argument_list", "expression_statement", "local_variable_declaration", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    52,    52,    53,    53,    54,    54,
      54,    54,    55,    55,    56,    56,    56,    56,    57,    57,
      57,    57,    57,    57,    57,    58,    59,    59,    59,    59,
      60,    60,    61,    62,    63,    63,    64,    64,    64,    64,
      64,    64,    64,    64,    65,    66,    67,    67,    68,    69,
      70,    70,    71,    72,    72,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    74,    74,    75,    75,    76,    76
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     4,     5,     5,     5,     5,
       5,     7,     7,     9,     2,     1,     1,     1,     4,     5,
       6,     7,     1,     3,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     4,     6,     7,     5,     6,
       1,     3,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     5,     7,     5,     9,
       1,     1,     1,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     4,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     3,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     4,     0,     0,     0,     1,
       3,    27,    27,    27,    27,     0,     0,    24,    25,    26,
      27,    15,    16,     0,    17,     0,    27,    27,     5,     0,
       0,    22,     0,     7,    14,    34,    28,    29,    30,    31,
      32,    33,     0,     0,     0,     8,     9,    10,     6,    27,
       0,    27,     0,     0,    22,     0,    83,    82,     0,     0,
      86,    76,    77,    78,    79,    80,    81,     0,     0,     0,
       0,     0,     0,     0,    45,    53,    46,    47,    48,    49,
      50,     0,    51,    52,    27,     0,    27,    23,    22,     0,
       0,     0,    18,     0,     0,     0,    82,     0,     0,     0,
       0,    63,     0,     0,    35,    44,     0,     0,     0,     0,
       0,     0,     0,    87,     0,    11,    27,    12,     0,     0,
      19,     0,    38,     0,     0,    40,     0,    71,    55,    75,
       0,     0,    82,     0,    61,    60,    64,     0,    88,    67,
      68,    65,    66,    69,    70,    74,    84,     0,     0,    27,
       0,    39,     0,    20,    42,    36,     0,    54,     0,     0,
       0,     0,    73,     0,     0,    13,    21,    37,    41,    56,
      58,     0,    89,    85,    72,     0,     0,    57,     0,    62,
       0,    59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    20,    21,    22,    32,    23,    71,
      24,    25,   124,   125,    72,    73,    74,    75,    76,    77,
      78,    79,   133,   178,    80,    81,   147,    82,    83
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -98
static const yytype_int16 yypact[] =
{
      21,    46,   131,    16,     5,   -98,    57,    65,    13,   -98,
     -98,    83,    83,    83,    -4,    75,   110,   -98,   -98,   -98,
      49,   -98,   -98,    43,   -98,   108,    76,    88,   -98,    63,
      11,   -98,    30,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   325,   118,   181,   -98,   -98,   -98,   -98,    83,
     110,    83,   125,   128,     6,    12,   -98,    15,   181,   283,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   138,   141,   148,
     247,   163,   155,   113,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   353,   -98,   -98,   151,    69,   185,   -98,    92,    24,
     283,   295,   -98,   283,   283,   147,   165,   367,   283,   283,
     214,   -98,   381,    91,   -98,   -98,   283,   283,   283,   283,
     283,   283,   252,   -98,   178,   -98,    83,   -98,   283,   314,
     -98,   395,   -98,   186,   132,   -98,   409,   493,   -98,   -98,
     423,   437,    18,   180,   -98,   -98,   -98,   283,   -98,   493,
     493,   493,   493,   493,   493,   -98,   493,   136,   187,   222,
     451,   -98,   150,   -98,   -98,   -98,   325,   -98,   181,   181,
     283,   465,   -98,   283,   179,   -98,   -98,   -98,   -98,   157,
     -98,   479,   -98,   493,   -98,   181,   278,   -98,   201,   -98,
     181,   -98
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -98,   -98,   -98,   196,    -1,   -19,   -98,   -16,   -98,   -23,
     -98,   -98,    99,    67,   -98,   144,   -71,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -55,   -98,   -97,   127
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -44
static const yytype_int16 yytable[] =
{
      43,    34,   105,   134,    97,    -2,     1,    34,    34,    28,
      34,    26,    27,    29,    13,   102,     9,    90,   -34,    53,
      91,   -34,     1,    49,   105,    14,    93,    55,    92,    52,
      17,    18,    19,    94,    85,   121,    94,    89,   126,   127,
     120,    52,    51,   130,   131,     2,    35,    52,    84,     6,
      86,   139,   140,   141,   142,   143,   144,   146,    50,    15,
      16,     2,    33,   150,    47,    34,   -27,    34,   123,    11,
      36,    37,    38,    39,    40,    41,    48,    12,    30,   179,
      42,   116,   161,    17,    18,    19,    52,   169,   170,    45,
     -27,   -27,   -27,   -27,   -27,   -27,   123,    17,    18,    19,
     -27,    46,   137,   118,   177,   171,   119,   138,   173,   181,
      17,    18,    19,    31,    56,   149,    57,    17,    18,    19,
      44,    54,    17,    18,    19,    58,   -43,    59,    87,    60,
      34,    88,     7,   123,     8,    61,    62,    63,    64,    65,
      36,    37,    38,    39,    40,    41,    66,   155,    56,   156,
      57,   162,    98,   163,    67,    99,    68,    69,    70,    58,
     128,    59,   100,    60,   115,   167,   103,   156,   104,    61,
      62,    63,    64,    65,    36,    37,    38,    39,    40,    41,
      66,   148,    56,    94,    57,    17,    18,    19,    67,   154,
      68,    69,    70,    58,   174,    59,   160,    60,   117,   175,
      10,   164,    95,    61,    62,    63,    64,    65,    36,    37,
      38,    39,    40,    41,    66,    56,   180,   132,   152,    17,
      18,    19,    67,   168,    68,    69,    70,   135,    59,     0,
      60,     0,     0,     0,     0,   165,    61,    62,    63,    64,
      65,    36,    37,    38,    39,    40,    41,    66,    56,     0,
      96,     0,     0,    56,     0,    96,    17,    18,    19,     0,
       0,    59,     0,   101,     0,     0,    59,   145,     0,    61,
      62,    63,    64,    65,    61,    62,    63,    64,    65,    56,
      66,    96,     0,     0,    56,    66,    96,     0,     0,     0,
       0,     0,    59,     0,    60,     0,     0,    59,    35,     0,
      61,    62,    63,    64,    65,    61,    62,    63,    64,    65,
     122,    66,     0,     0,     0,     0,    66,    35,     0,     0,
       0,     0,    36,    37,    38,    39,    40,    41,    35,   151,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,    37,    38,    39,    40,    41,     0,     0,     0,
       0,     0,    36,    37,    38,    39,    40,    41,   106,   107,
     108,   109,   110,   111,     0,     0,     0,   112,     0,   113,
       0,   114,   106,   107,   108,   109,   110,   111,     0,     0,
       0,   112,   129,     0,     0,   114,   106,   107,   108,   109,
     110,   111,     0,     0,     0,   112,     0,   136,     0,   114,
     106,   107,   108,   109,   110,   111,     0,     0,     0,   112,
       0,   153,     0,   114,   106,   107,   108,   109,   110,   111,
       0,     0,     0,   112,     0,   157,     0,   114,   106,   107,
     108,   109,   110,   111,     0,     0,     0,   112,   158,     0,
       0,   114,   106,   107,   108,   109,   110,   111,     0,     0,
       0,   112,   159,     0,     0,   114,   106,   107,   108,   109,
     110,   111,     0,     0,     0,   112,     0,   166,     0,   114,
     106,   107,   108,   109,   110,   111,     0,     0,     0,   112,
       0,   172,     0,   114,   106,   107,   108,   109,   110,   111,
       0,     0,     0,   112,     0,   176,     0,   114,   106,   107,
     108,   109,   110,   111,     0,     0,     0,   112,     0,     0,
       0,   114
};

static const yytype_int16 yycheck[] =
{
      23,    20,    73,   100,    59,     0,     1,    26,    27,    13,
      29,    12,    13,    14,     1,    70,     0,    11,     3,    42,
      14,     3,     1,    12,    95,    12,    11,    43,    16,    17,
      34,    35,    36,    18,    50,    90,    18,    53,    93,    94,
      16,    17,    12,    98,    99,    40,     3,    17,    49,     3,
      51,   106,   107,   108,   109,   110,   111,   112,    47,    46,
      47,    40,    13,   118,     1,    84,     3,    86,    91,    12,
      27,    28,    29,    30,    31,    32,    13,    12,     3,   176,
      37,    12,   137,    34,    35,    36,    17,   158,   159,    13,
      27,    28,    29,    30,    31,    32,   119,    34,    35,    36,
      37,    13,    11,    11,   175,   160,    14,    16,   163,   180,
      34,    35,    36,     3,     1,   116,     3,    34,    35,    36,
      12,     3,    34,    35,    36,    12,    13,    14,     3,    16,
     149,     3,     1,   156,     3,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    15,     1,    17,
       3,    15,    14,    17,    41,    14,    43,    44,    45,    12,
      13,    14,    14,    16,    13,    15,     3,    17,    13,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,     3,     1,    18,     3,    34,    35,    36,    41,     3,
      43,    44,    45,    12,    15,    14,    16,    16,    13,    42,
       4,    14,    58,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,     1,    15,     3,   119,    34,
      35,    36,    41,   156,    43,    44,    45,   100,    14,    -1,
      16,    -1,    -1,    -1,    -1,    13,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,     1,    -1,
       3,    -1,    -1,     1,    -1,     3,    34,    35,    36,    -1,
      -1,    14,    -1,    16,    -1,    -1,    14,    15,    -1,    22,
      23,    24,    25,    26,    22,    23,    24,    25,    26,     1,
      33,     3,    -1,    -1,     1,    33,     3,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    16,    -1,    -1,    14,     3,    -1,
      22,    23,    24,    25,    26,    22,    23,    24,    25,    26,
      15,    33,    -1,    -1,    -1,    -1,    33,     3,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,     3,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    16,
      -1,    18,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    -1,    -1,    18,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    16,    -1,    18,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    16,    -1,    18,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    16,    -1,    18,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    -1,
      -1,    18,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    -1,    -1,    18,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    16,    -1,    18,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    16,    -1,    18,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    16,    -1,    18,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    18
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    40,    49,    50,    51,     3,     1,     3,     0,
      51,    12,    12,     1,    12,    46,    47,    34,    35,    36,
      52,    53,    54,    56,    58,    59,    52,    52,    13,    52,
       3,     3,    55,    13,    53,     3,    27,    28,    29,    30,
      31,    32,    37,    57,    12,    13,    13,     1,    13,    12,
      47,    12,    17,    57,     3,    55,     1,     3,    12,    14,
      16,    22,    23,    24,    25,    26,    33,    41,    43,    44,
      45,    57,    62,    63,    64,    65,    66,    67,    68,    69,
      72,    73,    75,    76,    52,    55,    52,     3,     3,    55,
      11,    14,    16,    11,    18,    63,     3,    73,    14,    14,
      14,    16,    73,     3,    13,    64,     5,     6,     7,     8,
       9,    10,    14,    16,    18,    13,    12,    13,    11,    14,
      16,    73,    15,    57,    60,    61,    73,    73,    13,    15,
      73,    73,     3,    70,    75,    76,    16,    11,    16,    73,
      73,    73,    73,    73,    73,    15,    73,    74,     3,    52,
      73,    15,    60,    16,     3,    15,    17,    16,    15,    15,
      16,    73,    15,    17,    14,    13,    16,    15,    61,    64,
      64,    73,    16,    73,    15,    42,    16,    64,    71,    75,
      15,    64
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 7:
#line 77 "mini_java.y"
    { yyerror("missing class keyword"); ;}
    break;

  case 8:
#line 78 "mini_java.y"
    { yyerror("missing class name"); ;}
    break;

  case 9:
#line 79 "mini_java.y"
    { yyerror("missing curly open"); ;}
    break;

  case 10:
#line 80 "mini_java.y"
    { yyerror("missing curly close"); ;}
    break;

  case 83:
#line 196 "mini_java.y"
    { yyerror("expression error"); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1669 "mini_java.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 211 "mini_java.y"


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

