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
     IDENTIFIER = 258,
     CONSTANT = 259,
     STRING_LITERAL = 260,
     SIZEOF = 261,
     PTR_OP = 262,
     INC_OP = 263,
     DEC_OP = 264,
     LEFT_OP = 265,
     RIGHT_OP = 266,
     LE_OP = 267,
     GE_OP = 268,
     EQ_OP = 269,
     NE_OP = 270,
     AND_OP = 271,
     OR_OP = 272,
     MUL_ASSIGN = 273,
     DIV_ASSIGN = 274,
     MOD_ASSIGN = 275,
     ADD_ASSIGN = 276,
     SUB_ASSIGN = 277,
     LEFT_ASSIGN = 278,
     RIGHT_ASSIGN = 279,
     AND_ASSIGN = 280,
     XOR_ASSIGN = 281,
     OR_ASSIGN = 282,
     TYPE_NAME = 283,
     TYPEDEF = 284,
     EXTERN = 285,
     STATIC = 286,
     AUTO = 287,
     REGISTER = 288,
     INLINE = 289,
     RESTRICT = 290,
     CHAR = 291,
     SHORT = 292,
     INT = 293,
     LONG = 294,
     SIGNED = 295,
     UNSIGNED = 296,
     FLOAT = 297,
     DOUBLE = 298,
     CONST = 299,
     VOLATILE = 300,
     VOID = 301,
     BOOL = 302,
     COMPLEX = 303,
     IMAGINARY = 304,
     STRUCT = 305,
     UNION = 306,
     ENUM = 307,
     ELLIPSIS = 308,
     CASE = 309,
     DEFAULT = 310,
     IF = 311,
     ELSE = 312,
     SWITCH = 313,
     WHILE = 314,
     DO = 315,
     FOR = 316,
     GOTO = 317,
     CONTINUE = 318,
     BREAK = 319,
     RETURN = 320
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define PTR_OP 262
#define INC_OP 263
#define DEC_OP 264
#define LEFT_OP 265
#define RIGHT_OP 266
#define LE_OP 267
#define GE_OP 268
#define EQ_OP 269
#define NE_OP 270
#define AND_OP 271
#define OR_OP 272
#define MUL_ASSIGN 273
#define DIV_ASSIGN 274
#define MOD_ASSIGN 275
#define ADD_ASSIGN 276
#define SUB_ASSIGN 277
#define LEFT_ASSIGN 278
#define RIGHT_ASSIGN 279
#define AND_ASSIGN 280
#define XOR_ASSIGN 281
#define OR_ASSIGN 282
#define TYPE_NAME 283
#define TYPEDEF 284
#define EXTERN 285
#define STATIC 286
#define AUTO 287
#define REGISTER 288
#define INLINE 289
#define RESTRICT 290
#define CHAR 291
#define SHORT 292
#define INT 293
#define LONG 294
#define SIGNED 295
#define UNSIGNED 296
#define FLOAT 297
#define DOUBLE 298
#define CONST 299
#define VOLATILE 300
#define VOID 301
#define BOOL 302
#define COMPLEX 303
#define IMAGINARY 304
#define STRUCT 305
#define UNION 306
#define ENUM 307
#define ELLIPSIS 308
#define CASE 309
#define DEFAULT 310
#define IF 311
#define ELSE 312
#define SWITCH 313
#define WHILE 314
#define DO 315
#define FOR 316
#define GOTO 317
#define CONTINUE 318
#define BREAK 319
#define RETURN 320




/* Copy the first part of user declarations.  */


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
#line 237 "parser.cpp"

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
#define YYFINAL  41
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1294

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  238
/* YYNRULES -- Number of states.  */
#define YYNSTATES  404

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   322

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    79,     2,     2,     2,    81,    74,     2,
      66,    67,    75,    76,    73,    77,    70,    80,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    87,    90,
      82,    88,    83,    86,    89,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,    69,    84,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,    85,    72,    78,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    93,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    91,    92
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    20,    24,
      29,    33,    37,    40,    43,    50,    58,    60,    64,    66,
      69,    72,    75,    78,    83,    85,    87,    89,    91,    93,
      95,    97,   102,   104,   108,   112,   116,   118,   122,   126,
     128,   132,   136,   138,   142,   146,   150,   154,   156,   160,
     164,   166,   170,   172,   176,   178,   182,   184,   188,   190,
     194,   196,   202,   204,   208,   210,   212,   214,   216,   218,
     220,   222,   224,   226,   228,   230,   232,   236,   238,   242,
     247,   249,   252,   254,   257,   259,   262,   264,   267,   269,
     273,   275,   279,   281,   283,   285,   287,   289,   291,   293,
     295,   297,   299,   301,   303,   305,   307,   309,   311,   313,
     315,   317,   319,   325,   330,   333,   335,   337,   339,   342,
     346,   349,   351,   354,   356,   358,   362,   364,   367,   371,
     376,   382,   388,   395,   398,   400,   404,   406,   410,   412,
     414,   416,   418,   421,   423,   425,   429,   435,   440,   445,
     452,   459,   465,   470,   474,   479,   484,   488,   490,   493,
     496,   500,   502,   505,   507,   511,   513,   517,   520,   523,
     525,   527,   531,   533,   536,   538,   540,   543,   547,   550,
     554,   558,   563,   567,   572,   575,   579,   583,   588,   590,
     594,   599,   601,   604,   608,   613,   616,   618,   621,   625,
     628,   630,   632,   634,   636,   638,   640,   644,   649,   653,
     656,   660,   662,   665,   667,   669,   671,   674,   681,   690,
     696,   703,   712,   720,   729,   737,   746,   750,   753,   756,
     759,   763,   765,   768,   770,   772,   778,   783,   785
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     159,     0,    -1,     3,    -1,     4,    -1,     5,    -1,    66,
     114,    67,    -1,    95,    -1,    96,    68,   114,    69,    -1,
      96,    66,    67,    -1,    96,    66,    97,    67,    -1,    96,
      70,     3,    -1,    96,     7,     3,    -1,    96,     8,    -1,
      96,     9,    -1,    66,   142,    67,    71,   146,    72,    -1,
      66,   142,    67,    71,   146,    73,    72,    -1,   112,    -1,
      97,    73,   112,    -1,    96,    -1,     8,    98,    -1,     9,
      98,    -1,    99,   100,    -1,     6,    98,    -1,     6,    66,
     142,    67,    -1,    74,    -1,    75,    -1,    76,    -1,    77,
      -1,    78,    -1,    79,    -1,    98,    -1,    66,   142,    67,
     100,    -1,   100,    -1,   101,    75,   100,    -1,   101,    80,
     100,    -1,   101,    81,   100,    -1,   101,    -1,   102,    76,
     101,    -1,   102,    77,   101,    -1,   102,    -1,   103,    10,
     102,    -1,   103,    11,   102,    -1,   103,    -1,   104,    82,
     103,    -1,   104,    83,   103,    -1,   104,    12,   103,    -1,
     104,    13,   103,    -1,   104,    -1,   105,    14,   104,    -1,
     105,    15,   104,    -1,   105,    -1,   106,    74,   105,    -1,
     106,    -1,   107,    84,   106,    -1,   107,    -1,   108,    85,
     107,    -1,   108,    -1,   109,    16,   108,    -1,   109,    -1,
     110,    17,   109,    -1,   110,    -1,   110,    86,   114,    87,
     111,    -1,   111,    -1,    98,   113,   112,    -1,    88,    -1,
      18,    -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,
     112,    -1,   114,    73,   112,    -1,   111,    -1,    89,   117,
      90,    -1,    89,   117,   118,    90,    -1,   120,    -1,   120,
     117,    -1,   121,    -1,   121,   117,    -1,   132,    -1,   132,
     117,    -1,   133,    -1,   133,   117,    -1,   119,    -1,   118,
      73,   119,    -1,   134,    -1,   134,    88,   145,    -1,    29,
      -1,    30,    -1,    31,    -1,    32,    -1,    33,    -1,    46,
      -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,    42,
      -1,    43,    -1,    40,    -1,    41,    -1,    47,    -1,    48,
      -1,    49,    -1,   122,    -1,   129,    -1,    28,    -1,   123,
       3,    71,   124,    72,    -1,   123,    71,   124,    72,    -1,
     123,     3,    -1,    50,    -1,    51,    -1,   125,    -1,   124,
     125,    -1,   126,   127,    90,    -1,   121,   126,    -1,   121,
      -1,   132,   126,    -1,   132,    -1,   128,    -1,   127,    73,
     128,    -1,   134,    -1,    87,   115,    -1,   134,    87,   115,
      -1,    52,    71,   130,    72,    -1,    52,     3,    71,   130,
      72,    -1,    52,    71,   130,    73,    72,    -1,    52,     3,
      71,   130,    73,    72,    -1,    52,     3,    -1,   131,    -1,
     130,    73,   131,    -1,     3,    -1,     3,    88,   115,    -1,
      44,    -1,    35,    -1,    45,    -1,    34,    -1,   136,   135,
      -1,   135,    -1,     3,    -1,    66,   134,    67,    -1,   135,
      68,   137,   112,    69,    -1,   135,    68,   137,    69,    -1,
     135,    68,   112,    69,    -1,   135,    68,    31,   137,   112,
      69,    -1,   135,    68,   137,    31,   112,    69,    -1,   135,
      68,   137,    75,    69,    -1,   135,    68,    75,    69,    -1,
     135,    68,    69,    -1,   135,    66,   138,    67,    -1,   135,
      66,   141,    67,    -1,   135,    66,    67,    -1,    75,    -1,
      75,   137,    -1,    75,   136,    -1,    75,   137,   136,    -1,
     132,    -1,   137,   132,    -1,   139,    -1,   139,    73,    53,
      -1,   140,    -1,   139,    73,   140,    -1,   117,   134,    -1,
     117,   143,    -1,   117,    -1,     3,    -1,   141,    73,     3,
      -1,   126,    -1,   126,   143,    -1,   136,    -1,   144,    -1,
     136,   144,    -1,    66,   143,    67,    -1,    68,    69,    -1,
      68,   112,    69,    -1,   144,    68,    69,    -1,   144,    68,
     112,    69,    -1,    68,    75,    69,    -1,   144,    68,    75,
      69,    -1,    66,    67,    -1,    66,   138,    67,    -1,   144,
      66,    67,    -1,   144,    66,   138,    67,    -1,   112,    -1,
      71,   146,    72,    -1,    71,   146,    73,    72,    -1,   145,
      -1,   147,   145,    -1,   146,    73,   145,    -1,   146,    73,
     147,   145,    -1,   148,    88,    -1,   149,    -1,   148,   149,
      -1,    68,   115,    69,    -1,    70,     3,    -1,   151,    -1,
     152,    -1,   155,    -1,   156,    -1,   157,    -1,   158,    -1,
       3,    87,   150,    -1,    54,   115,    87,   150,    -1,    55,
      87,   150,    -1,    71,    72,    -1,    71,   153,    72,    -1,
     154,    -1,   153,   154,    -1,   116,    -1,   150,    -1,    90,
      -1,   114,    90,    -1,    91,    56,    66,   114,    67,   150,
      -1,    91,    56,    66,   114,    67,   150,    57,   150,    -1,
      58,    66,   114,    67,   150,    -1,    92,    59,    66,   114,
      67,   150,    -1,    92,    60,   150,    59,    66,   114,    67,
      90,    -1,    92,    61,    66,   155,   155,    67,   150,    -1,
      92,    61,    66,   155,   155,   114,    67,   150,    -1,    92,
      61,    66,   116,   155,    67,   150,    -1,    92,    61,    66,
     116,   155,   114,    67,   150,    -1,    62,     3,    90,    -1,
      63,    90,    -1,    64,    90,    -1,    65,    90,    -1,    65,
     114,    90,    -1,   160,    -1,   159,   160,    -1,   161,    -1,
     116,    -1,    93,   117,   134,   162,   152,    -1,    93,   117,
     134,   152,    -1,   116,    -1,   162,   116,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    18,    18,    19,    20,    21,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    38,    39,    43,    44,
      45,    46,    47,    48,    52,    53,    54,    55,    56,    57,
      61,    62,    66,    67,    68,    69,    73,    74,    75,    79,
      80,    81,    85,    86,    87,    88,    89,    93,    94,    95,
      99,   100,   104,   105,   109,   110,   114,   115,   119,   120,
     124,   125,   129,   130,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   148,   149,   153,   157,   158,
     162,   163,   164,   165,   166,   167,   168,   169,   173,   174,
     178,   179,   183,   184,   185,   186,   187,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   209,   210,   211,   215,   216,   220,   221,   225,
     229,   230,   231,   232,   236,   237,   241,   242,   243,   247,
     248,   249,   250,   251,   255,   256,   260,   261,   265,   266,
     267,   271,   275,   276,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   297,   298,   299,
     300,   304,   305,   310,   311,   315,   316,   320,   321,   322,
     326,   327,   331,   332,   336,   337,   338,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   356,   357,
     358,   362,   363,   364,   365,   369,   373,   374,   378,   379,
     383,   384,   385,   386,   387,   388,   392,   393,   394,   398,
     399,   403,   404,   408,   409,   413,   414,   418,   419,   420,
     424,   425,   426,   427,   428,   429,   433,   434,   435,   436,
     437,   441,   442,   446,   447,   451,   452,   456,   457
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "INLINE",
  "RESTRICT", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "BOOL", "COMPLEX",
  "IMAGINARY", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE", "DEFAULT",
  "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE",
  "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "'{'", "'}'",
  "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'",
  "'>'", "'^'", "'|'", "'?'", "':'", "'='", "'@'", "';'", "\"#\"", "\"$\"",
  "'ˆ'", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,    40,    41,    91,    93,
      46,   123,   125,    44,    38,    42,    43,    45,   126,    33,
      47,    37,    60,    62,    94,   124,    63,    58,    61,    64,
      59,   321,   322,   203
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    95,    95,    95,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    97,    97,    98,    98,
      98,    98,    98,    98,    99,    99,    99,    99,    99,    99,
     100,   100,   101,   101,   101,   101,   102,   102,   102,   103,
     103,   103,   104,   104,   104,   104,   104,   105,   105,   105,
     106,   106,   107,   107,   108,   108,   109,   109,   110,   110,
     111,   111,   112,   112,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   114,   114,   115,   116,   116,
     117,   117,   117,   117,   117,   117,   117,   117,   118,   118,
     119,   119,   120,   120,   120,   120,   120,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   122,   122,   122,   123,   123,   124,   124,   125,
     126,   126,   126,   126,   127,   127,   128,   128,   128,   129,
     129,   129,   129,   129,   130,   130,   131,   131,   132,   132,
     132,   133,   134,   134,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   136,   136,   136,
     136,   137,   137,   138,   138,   139,   139,   140,   140,   140,
     141,   141,   142,   142,   143,   143,   143,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   145,   145,
     145,   146,   146,   146,   146,   147,   148,   148,   149,   149,
     150,   150,   150,   150,   150,   150,   151,   151,   151,   152,
     152,   153,   153,   154,   154,   155,   155,   156,   156,   156,
     157,   157,   157,   157,   157,   157,   158,   158,   158,   158,
     158,   159,   159,   160,   160,   161,   161,   162,   162
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     6,     7,     1,     3,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     4,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     4,     2,     1,     1,     1,     2,     3,
       2,     1,     2,     1,     1,     3,     1,     2,     3,     4,
       5,     5,     6,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     2,     1,     1,     3,     5,     4,     4,     6,
       6,     5,     4,     3,     4,     4,     3,     1,     2,     2,
       3,     1,     2,     1,     3,     1,     3,     2,     2,     1,
       1,     3,     1,     2,     1,     1,     2,     3,     2,     3,
       3,     4,     3,     4,     2,     3,     3,     4,     1,     3,
       4,     1,     2,     3,     4,     2,     1,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     1,     2,     1,     1,     1,     2,     6,     8,     5,
       6,     8,     7,     8,     7,     8,     3,     2,     2,     2,
       3,     1,     2,     1,     1,     5,     4,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,   234,     0,   231,   233,   111,    92,    93,
      94,    95,    96,   141,   139,    98,    99,   100,   101,   104,
     105,   102,   103,   138,   140,    97,   106,   107,   108,   115,
     116,     0,     0,    80,    82,   109,     0,   110,    84,    86,
       0,     1,   232,   133,     0,   144,     0,   157,    78,     0,
      88,    90,   143,     0,    81,    83,   114,     0,    85,    87,
       0,     0,   136,     0,   134,     0,   161,   159,   158,     0,
      79,     0,     0,     0,   142,     0,   121,     0,   117,     0,
     123,     0,   237,   236,     0,     0,     0,   129,     0,   145,
     162,   160,    89,     2,     3,     4,     0,     0,     0,     0,
       0,    24,    25,    26,    27,    28,    29,     6,    18,    30,
       0,    32,    36,    39,    42,    47,    50,    52,    54,    56,
      58,    60,    62,   188,    91,   170,   156,   169,     0,   163,
     165,     0,     0,   153,    25,     0,     0,     0,   120,   113,
     118,     0,     0,   124,   126,   122,     2,     0,     0,     0,
       0,     0,     0,     0,   209,   215,     0,     0,    75,     0,
     213,   214,   200,   201,     0,   211,   202,   203,   204,   205,
     238,   235,   130,     0,    30,    77,   137,   131,   135,     0,
      22,     0,    19,    20,     0,   172,     0,     0,     0,   191,
       0,     0,     0,   196,     0,    12,    13,     0,     0,     0,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      64,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   167,   174,   168,   175,   154,     0,
     155,     0,     0,   152,   148,     0,   147,    25,     0,   112,
     127,     0,   119,     0,     0,     0,     0,     0,     0,   227,
     228,   229,     0,     0,     0,     0,     0,     0,   216,   210,
     212,   132,     0,     0,     5,     0,   174,   173,     0,     0,
     199,   189,     0,   192,   195,   197,    11,     8,     0,    16,
       0,    10,    63,    33,    34,    35,    37,    38,    40,    41,
      45,    46,    43,    44,    48,    49,    51,    53,    55,    57,
      59,     0,   184,     0,     0,   178,    25,     0,   176,     0,
       0,   164,   166,   171,     0,     0,   151,   146,   125,   128,
     206,     0,   208,     0,   226,   230,     0,     0,     0,     0,
      76,    23,     0,     0,    31,   198,   190,   193,     0,     9,
       0,     7,     0,   185,   177,   182,   179,   186,     0,   180,
      25,     0,   149,   150,   207,     0,     0,     0,     0,     0,
       0,     0,   194,    17,    61,   187,   183,   181,   219,     0,
       0,     0,     0,     0,    14,     0,   217,   220,     0,     0,
       0,     0,     0,    15,     0,     0,   224,     0,   222,     0,
     218,   221,   225,   223
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   107,   108,   288,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   158,   211,
     159,   176,     3,   127,    49,    50,    33,    34,    35,    36,
      77,    78,    79,   142,   143,    37,    63,    64,    38,    39,
      51,    52,    53,    68,   313,   129,   130,   131,   186,   314,
     237,   189,   190,   191,   192,   193,   161,   162,   163,   164,
     165,   166,   167,   168,   169,     4,     5,     6,    84
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -274
static const yytype_int16 yypact[] =
{
      76,  1217,  1217,  -274,    21,  -274,  -274,  -274,  -274,  -274,
    -274,  -274,  -274,  -274,  -274,  -274,  -274,  -274,  -274,  -274,
    -274,  -274,  -274,  -274,  -274,  -274,  -274,  -274,  -274,  -274,
    -274,    24,    11,  1217,  1217,  -274,    46,  -274,  1217,  1217,
      40,  -274,  -274,   -30,    75,  -274,    40,    88,  -274,   -35,
    -274,    69,   140,    27,  -274,  -274,    97,  1242,  -274,  -274,
     -13,    75,   110,   143,  -274,    67,  -274,  -274,    88,    40,
    -274,   707,   917,   546,   140,  1242,  1242,  1068,  -274,    41,
    1242,   255,  -274,  -274,   -13,   225,   849,  -274,    15,  -274,
    -274,  -274,  -274,  -274,  -274,  -274,   913,   927,   927,   496,
     672,  -274,  -274,  -274,  -274,  -274,  -274,  -274,   137,   201,
     849,  -274,   154,   235,   338,    60,   328,   158,   160,   172,
     239,     3,  -274,  -274,  -274,  -274,  -274,    13,   199,   203,
    -274,   -25,   165,  -274,   211,   215,   595,  1106,  -274,  -274,
    -274,   849,   -26,  -274,   208,  -274,   213,   849,   219,   259,
     325,   249,   262,   396,  -274,  -274,   304,   263,  -274,   -22,
    -274,  -274,  -274,  -274,   299,  -274,  -274,  -274,  -274,  -274,
    -274,  -274,  -274,    20,  -274,  -274,  -274,  -274,  -274,   496,
    -274,   496,  -274,  -274,    57,    98,   305,   849,   380,  -274,
     278,   707,    84,  -274,   383,  -274,  -274,   722,   849,   384,
    -274,  -274,  -274,  -274,  -274,  -274,  -274,  -274,  -274,  -274,
    -274,   849,  -274,   849,   849,   849,   849,   849,   849,   849,
     849,   849,   849,   849,   849,   849,   849,   849,   849,   849,
     849,   849,   979,   756,  -274,    63,  -274,   207,  -274,  1191,
    -274,   389,   679,  -274,  -274,   849,  -274,   324,   326,  -274,
    -274,    41,  -274,   849,   376,   307,   376,   849,   306,  -274,
    -274,  -274,    -6,   331,   337,   376,   346,   849,  -274,  -274,
    -274,  -274,   347,   348,  -274,  1027,   222,  -274,   771,   344,
    -274,  -274,   579,  -274,  -274,  -274,  -274,  -274,    80,  -274,
     170,  -274,  -274,  -274,  -274,  -274,   154,   154,   235,   235,
     338,   338,   338,   338,    60,    60,   328,   158,   160,   172,
     239,   -34,  -274,   349,   350,  -274,   351,   354,   207,  1151,
     799,  -274,  -274,  -274,   355,   356,  -274,  -274,  -274,  -274,
    -274,   376,  -274,   103,  -274,  -274,   849,   849,   359,   332,
    -274,   357,   357,   672,  -274,  -274,  -274,  -274,   707,  -274,
     849,  -274,   849,  -274,  -274,  -274,  -274,  -274,   352,  -274,
     358,   360,  -274,  -274,  -274,   376,   163,   164,   366,   440,
     440,   283,  -274,  -274,  -274,  -274,  -274,  -274,  -274,   376,
     376,   849,   815,   835,  -274,   628,   369,  -274,   180,   376,
     181,   376,   189,  -274,   376,   343,  -274,   376,  -274,   376,
    -274,  -274,  -274,  -274
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -274,  -274,  -274,  -274,   -36,  -274,   -77,   142,   148,    48,
     144,   209,   210,   228,   229,   206,  -274,   -78,   -71,  -274,
     -96,  -135,   -56,   212,  -274,   388,  -274,   -40,  -274,  -274,
     385,   -66,   -54,  -274,   214,  -274,   398,   -69,    23,  -274,
     -33,   -38,   -37,   -19,   -67,  -274,   224,  -274,   113,  -103,
    -201,   -70,   118,  -273,  -274,   272,   -98,  -274,   -28,  -274,
     312,  -220,  -274,  -274,  -274,  -274,   465,  -274,  -274
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     123,   124,   135,   184,    82,   128,   250,    60,   175,   348,
      67,   140,   255,    65,    45,    74,    45,    76,    62,   178,
     230,    41,   138,    62,   236,   160,   145,    43,   170,   123,
      45,    91,    83,   212,   318,    76,    76,    76,    69,   267,
      76,    61,   240,    45,    45,   185,   144,   251,   241,    56,
     174,   267,   279,   352,   136,    70,   171,   262,    81,    76,
     180,   182,   183,   175,   252,   248,    45,   267,   268,   175,
      66,   140,   220,   221,   174,   318,     1,    46,    62,   232,
      80,   233,   277,   184,   335,   184,    47,   177,    47,   231,
     235,    90,   271,    46,   234,    44,    66,    76,    80,    80,
      80,    48,   290,    80,   178,   174,    46,    46,   160,   175,
       1,   174,   348,   242,     2,    47,    47,    57,   329,   370,
     123,   283,    80,    14,   274,   185,   289,   185,   141,   232,
     267,   233,    23,    24,    89,   311,   293,   294,   295,    76,
     292,    76,   222,   223,   194,   195,   196,   349,   276,   382,
     383,   174,   187,   350,   188,    66,   330,    71,   332,    90,
      80,   333,   317,    47,   275,     1,   233,   338,    75,     2,
     365,   324,   284,    47,   325,   175,   267,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   235,   340,    74,    86,    65,
      14,   344,    80,   197,    80,   198,    72,   199,    73,    23,
      24,   123,   347,    32,    40,    87,    88,   174,   144,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   213,
     379,   380,   226,   364,   214,   215,   267,   267,   276,   351,
     366,   367,   174,   267,   227,    54,    55,   395,   397,   361,
      58,    59,   358,   267,   267,   229,   399,   228,   146,    94,
      95,    96,   267,    97,    98,    90,   238,   378,   300,   301,
     302,   303,   123,   319,   374,   320,   239,   123,   372,   373,
     243,   386,   387,   369,   244,   388,   390,   392,   275,   210,
     233,   396,   272,   398,   273,   253,   400,   172,   173,   402,
     254,   403,   146,    94,    95,    96,   256,    97,    98,   147,
     148,   216,   217,   149,   123,   347,   174,   150,   151,   152,
     153,    99,   264,   265,   266,   257,    81,   154,   258,   101,
     102,   103,   104,   105,   106,    93,    94,    95,    96,   259,
      97,    98,   224,   225,     1,   155,   156,   157,   218,   219,
     281,   282,   260,   147,   148,   384,   385,   149,   296,   297,
     263,   150,   151,   152,   153,    99,   298,   299,   304,   305,
      81,   269,   278,   101,   102,   103,   104,   105,   106,   146,
      94,    95,    96,   280,    97,    98,   286,   291,     1,   155,
     156,   157,   323,   326,   331,   327,   334,   336,    99,    93,
      94,    95,    96,   337,    97,    98,   101,   102,   103,   104,
     105,   106,   339,   345,   341,   342,   353,   354,   368,   375,
     355,     1,   155,   356,   362,   363,   394,   376,   343,   377,
     147,   148,   381,   401,   149,   306,   310,   307,   150,   151,
     152,   153,    99,    93,    94,    95,    96,    81,    97,    98,
     101,   102,   103,   104,   105,   106,   308,    92,   309,    85,
     137,   371,    99,   322,   285,   328,   155,   156,   157,    42,
     101,   102,   103,   104,   105,   106,   270,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   261,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
      94,    95,    96,     0,    97,    98,    99,     0,     0,     0,
       0,     0,     0,     0,   101,   102,   103,   104,   105,   106,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     0,
     155,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    93,
      94,    95,    96,     0,    97,    98,     0,     0,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
     101,   102,   103,   104,   105,   106,     0,   132,     0,     0,
       0,    14,    93,    94,    95,    96,     0,    97,    98,     0,
      23,    24,     0,     0,     0,     0,     0,     0,    93,    94,
      95,    96,     0,    97,    98,     0,     0,     0,     0,     0,
       0,     0,    99,     0,     0,   133,     0,     0,     0,     0,
     101,   134,   103,   104,   105,   106,   245,     0,     0,     0,
      14,    93,    94,    95,    96,     0,    97,    98,     0,    23,
      24,     0,     0,     0,     0,    99,     0,   187,     0,   188,
     100,   346,     0,   101,   102,   103,   104,   105,   106,     0,
       0,    99,     0,     0,   246,     0,     0,     0,     0,   101,
     247,   103,   104,   105,   106,    93,    94,    95,    96,     0,
      97,    98,    93,    94,    95,    96,     0,    97,    98,     0,
       0,     0,     0,     0,    99,     0,   187,     0,   188,   100,
     393,     0,   101,   102,   103,   104,   105,   106,     0,     0,
      93,    94,    95,    96,    14,    97,    98,     0,     0,     0,
       0,     0,     0,    23,    24,    93,    94,    95,    96,     0,
      97,    98,     0,     0,     0,     0,     0,     0,    99,     0,
     187,     0,   188,   100,     0,    99,   101,   102,   103,   104,
     105,   106,     0,   101,   102,   103,   104,   105,   106,    93,
      94,    95,    96,     0,    97,    98,     0,     0,     0,     0,
       0,     0,     0,    99,    93,    94,    95,    96,   100,    97,
      98,   101,   102,   103,   104,   105,   106,     0,    99,   287,
       0,     0,     0,     0,     0,     0,   101,   102,   103,   104,
     105,   106,    93,    94,    95,    96,     0,    97,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,    94,
      95,    96,    99,    97,    98,   315,     0,     0,     0,     0,
     101,   316,   103,   104,   105,   106,     0,    99,    93,    94,
      95,    96,   343,    97,    98,   101,   102,   103,   104,   105,
     106,     0,    93,    94,    95,    96,     0,    97,    98,     0,
       0,     0,     0,     0,     0,    99,     0,     0,   359,     0,
       0,     0,     0,   101,   360,   103,   104,   105,   106,     0,
       0,    99,   389,     0,     0,     0,     0,     0,     0,   101,
     102,   103,   104,   105,   106,     0,     0,     0,     0,     0,
       0,    99,   391,     0,     0,     0,     0,     0,     0,   101,
     102,   103,   104,   105,   106,    99,    93,    94,    95,    96,
     125,    97,    98,   101,   102,   103,   104,   105,   106,     0,
      93,    94,    95,    96,     0,    97,    98,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   179,
       0,     0,    45,     0,   126,     0,     0,   101,   102,   103,
     104,   105,   106,   181,     0,     0,     0,     0,     0,     0,
       0,   101,   102,   103,   104,   105,   106,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   232,   312,   233,     0,     0,
       0,     0,     0,     0,    47,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   275,   312,   233,     7,     0,     0,     0,
       0,     0,    47,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     0,
     139,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   249,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   357,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,   321,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
       7,     0,     0,     0,     0,     0,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31
};

static const yytype_int16 yycheck[] =
{
      71,    71,    73,    99,    60,    72,   141,    40,    86,   282,
      47,    77,   147,    46,     3,    53,     3,    57,     3,    88,
      17,     0,    76,     3,   127,    81,    80,     3,    84,   100,
       3,    68,    60,   110,   235,    75,    76,    77,    73,    73,
      80,    71,    67,     3,     3,    99,    79,    73,    73,     3,
      86,    73,   187,    87,    73,    90,    84,   153,    71,    99,
      96,    97,    98,   141,    90,   136,     3,    73,    90,   147,
      47,   137,    12,    13,   110,   276,    89,    66,     3,    66,
      57,    68,   185,   179,    90,   181,    75,    72,    75,    86,
     127,    68,    72,    66,   127,    71,    73,   137,    75,    76,
      77,    90,   198,    80,   173,   141,    66,    66,   164,   187,
      89,   147,   385,   132,    93,    75,    75,    71,   253,   339,
     191,   191,    99,    35,    67,   179,   197,   181,    87,    66,
      73,    68,    44,    45,    67,   231,   213,   214,   215,   179,
     211,   181,    82,    83,     7,     8,     9,    67,   185,   369,
     370,   187,    68,    73,    70,   132,   254,    88,   256,   136,
     137,   257,   233,    75,    66,    89,    68,   265,    71,    93,
      67,   242,    88,    75,   245,   253,    73,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   232,   267,   235,    88,   232,
      35,   278,   179,    66,   181,    68,    66,    70,    68,    44,
      45,   282,   282,     1,     2,    72,    73,   253,   251,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    75,
      67,    67,    74,   331,    80,    81,    73,    73,   275,    69,
     336,   337,   278,    73,    84,    33,    34,    67,    67,   320,
      38,    39,   319,    73,    73,    16,    67,    85,     3,     4,
       5,     6,    73,     8,     9,   242,    67,   365,   220,   221,
     222,   223,   343,    66,   352,    68,    73,   348,   348,   350,
      69,   379,   380,   339,    69,   381,   382,   383,    66,    88,
      68,   389,   179,   391,   181,    87,   394,    72,    73,   397,
      87,   399,     3,     4,     5,     6,    87,     8,     9,    54,
      55,    76,    77,    58,   385,   385,   352,    62,    63,    64,
      65,    66,    59,    60,    61,    66,    71,    72,     3,    74,
      75,    76,    77,    78,    79,     3,     4,     5,     6,    90,
       8,     9,    14,    15,    89,    90,    91,    92,    10,    11,
      72,    73,    90,    54,    55,    72,    73,    58,   216,   217,
      56,    62,    63,    64,    65,    66,   218,   219,   224,   225,
      71,    72,    67,    74,    75,    76,    77,    78,    79,     3,
       4,     5,     6,     3,     8,     9,     3,     3,    89,    90,
      91,    92,     3,    69,    87,    69,    90,    66,    66,     3,
       4,     5,     6,    66,     8,     9,    74,    75,    76,    77,
      78,    79,    66,    69,    67,    67,    67,    67,    59,    67,
      69,    89,    90,    69,    69,    69,    57,    69,    71,    69,
      54,    55,    66,    90,    58,   226,   230,   227,    62,    63,
      64,    65,    66,     3,     4,     5,     6,    71,     8,     9,
      74,    75,    76,    77,    78,    79,   228,    69,   229,    61,
      75,   343,    66,   239,   192,   251,    90,    91,    92,     4,
      74,    75,    76,    77,    78,    79,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      90,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    -1,    31,    -1,    -1,
      -1,    35,     3,     4,     5,     6,    -1,     8,     9,    -1,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    31,    -1,    -1,    -1,
      35,     3,     4,     5,     6,    -1,     8,     9,    -1,    44,
      45,    -1,    -1,    -1,    -1,    66,    -1,    68,    -1,    70,
      71,    72,    -1,    74,    75,    76,    77,    78,    79,    -1,
      -1,    66,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    78,    79,     3,     4,     5,     6,    -1,
       8,     9,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    68,    -1,    70,    71,
      72,    -1,    74,    75,    76,    77,    78,    79,    -1,    -1,
       3,     4,     5,     6,    35,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      68,    -1,    70,    71,    -1,    66,    74,    75,    76,    77,
      78,    79,    -1,    74,    75,    76,    77,    78,    79,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,     3,     4,     5,     6,    71,     8,
       9,    74,    75,    76,    77,    78,    79,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    66,     8,     9,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    -1,    66,     3,     4,
       5,     6,    71,     8,     9,    74,    75,    76,    77,    78,
      79,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    78,    79,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    78,    79,    66,     3,     4,     5,     6,
       3,     8,     9,    74,    75,    76,    77,    78,    79,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,     3,    -1,    67,    -1,    -1,    74,    75,    76,
      77,    78,    79,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    78,    79,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    28,    -1,    -1,    -1,
      -1,    -1,    75,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      72,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    89,    93,   116,   159,   160,   161,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,   117,   120,   121,   122,   123,   129,   132,   133,
     117,     0,   160,     3,    71,     3,    66,    75,    90,   118,
     119,   134,   135,   136,   117,   117,     3,    71,   117,   117,
     134,    71,     3,   130,   131,   134,   132,   136,   137,    73,
      90,    88,    66,    68,   135,    71,   121,   124,   125,   126,
     132,    71,   116,   152,   162,   130,    88,    72,    73,    67,
     132,   136,   119,     3,     4,     5,     6,     8,     9,    66,
      71,    74,    75,    76,    77,    78,    79,    95,    96,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   145,     3,    67,   117,   138,   139,
     140,   141,    31,    69,    75,   112,   137,   124,   126,    72,
     125,    87,   127,   128,   134,   126,     3,    54,    55,    58,
      62,    63,    64,    65,    72,    90,    91,    92,   112,   114,
     116,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     116,   152,    72,    73,    98,   111,   115,    72,   131,    66,
      98,    66,    98,    98,   114,   126,   142,    68,    70,   145,
     146,   147,   148,   149,     7,     8,     9,    66,    68,    70,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      88,   113,   100,    75,    80,    81,    76,    77,    10,    11,
      12,    13,    82,    83,    14,    15,    74,    84,    85,    16,
      17,    86,    66,    68,   134,   136,   143,   144,    67,    73,
      67,    73,   137,    69,    69,    31,    69,    75,   112,    72,
     115,    73,    90,    87,    87,   115,    87,    66,     3,    90,
      90,    90,   114,    56,    59,    60,    61,    73,    90,    72,
     154,    72,   142,   142,    67,    66,   136,   143,    67,   115,
       3,    72,    73,   145,    88,   149,     3,    67,    97,   112,
     114,     3,   112,   100,   100,   100,   101,   101,   102,   102,
     103,   103,   103,   103,   104,   104,   105,   106,   107,   108,
     109,   114,    67,   138,   143,    69,    75,   112,   144,    66,
      68,    53,   140,     3,   112,   112,    69,    69,   128,   115,
     150,    87,   150,   114,    90,    90,    66,    66,   150,    66,
     112,    67,    67,    71,   100,    69,    72,   145,   147,    67,
      73,    69,    87,    67,    67,    69,    69,    67,   138,    69,
      75,   112,    69,    69,   150,    67,   114,   114,    59,   116,
     155,   146,   145,   112,   111,    67,    69,    69,   150,    67,
      67,    66,   155,   155,    72,    73,   150,   150,   114,    67,
     114,    67,   114,    72,    57,    67,   150,    67,   150,    67,
     150,    90,   150,   150
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
      
/* Line 1267 of yacc.c.  */
#line 2026 "parser.cpp"
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


#line 461 "idjl.y"

#include <stdio.h>
extern char yytext[];
extern int column;
void yyerror(char const *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}
