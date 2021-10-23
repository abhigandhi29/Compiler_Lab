/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "ass5_19CS10031_19CS10051.y"
 /* C Declarations and Definitions */
	
	#include <iostream>              
	#include <cstdlib>
	#include <sstream>
	#include <string.h>
	#include <stdio.h>

	#include "ass5_19CS10031_19CS10051_translator.h"
	extern int yylex();
	void yyerror(string s);
	extern string var_type;
	
	using namespace std;

#line 86 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    FLOAT_CONSTANT = 259,
    CHAR_CONSTANT = 260,
    STRING_LITERAL = 261,
    INTEGER_CONSTANT = 262,
    COMMENT = 263,
    AUTO = 264,
    ENUM = 265,
    RESTRICT = 266,
    UNSIGNED = 267,
    BREAK = 268,
    EXTERN = 269,
    RETURN = 270,
    VOID = 271,
    CASE = 272,
    FLOAT = 273,
    SHORT = 274,
    VOLATILE = 275,
    CHAR = 276,
    FOR = 277,
    SIGNED = 278,
    WHILE = 279,
    CONST = 280,
    GOTO = 281,
    SIZEOF = 282,
    _BOOL = 283,
    CONTINUE = 284,
    IF = 285,
    STATIC = 286,
    _COMPLEX = 287,
    DEFAULT = 288,
    INLINE = 289,
    STRUCT = 290,
    _IMAGINARY = 291,
    DO = 292,
    INT = 293,
    SWITCH = 294,
    DOUBLE = 295,
    LONG = 296,
    TYPEDEF = 297,
    ELSE = 298,
    REGISTER = 299,
    UNION = 300,
    TDOT = 301,
    EQUAL = 302,
    MODEQ = 303,
    ADDEQ = 304,
    MULEQ = 305,
    DIVEQ = 306,
    SUBEQ = 307,
    SHLEQ = 308,
    SHREQ = 309,
    SQROPEN = 310,
    SQRCLOSE = 311,
    CIROPEN = 312,
    CIRCLOSE = 313,
    CUROPEN = 314,
    CURCLOSE = 315,
    DOT = 316,
    ARROW = 317,
    INCRE = 318,
    DECRE = 319,
    AND = 320,
    MUL = 321,
    ADD = 322,
    SUB = 323,
    NEQ = 324,
    EXCL = 325,
    DIV = 326,
    MOD = 327,
    LESH = 328,
    RISH = 329,
    LST = 330,
    GRT = 331,
    LSE = 332,
    GRE = 333,
    EQUATE = 334,
    NEQE = 335,
    XOR = 336,
    OR = 337,
    ANDNUM = 338,
    ORNUM = 339,
    QUESTION = 340,
    COLON = 341,
    LINEEND = 342,
    ANDE = 343,
    XORE = 344,
    ORE = 345,
    COMMA = 346,
    HASH = 347,
    THEN = 348
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define FLOAT_CONSTANT 259
#define CHAR_CONSTANT 260
#define STRING_LITERAL 261
#define INTEGER_CONSTANT 262
#define COMMENT 263
#define AUTO 264
#define ENUM 265
#define RESTRICT 266
#define UNSIGNED 267
#define BREAK 268
#define EXTERN 269
#define RETURN 270
#define VOID 271
#define CASE 272
#define FLOAT 273
#define SHORT 274
#define VOLATILE 275
#define CHAR 276
#define FOR 277
#define SIGNED 278
#define WHILE 279
#define CONST 280
#define GOTO 281
#define SIZEOF 282
#define _BOOL 283
#define CONTINUE 284
#define IF 285
#define STATIC 286
#define _COMPLEX 287
#define DEFAULT 288
#define INLINE 289
#define STRUCT 290
#define _IMAGINARY 291
#define DO 292
#define INT 293
#define SWITCH 294
#define DOUBLE 295
#define LONG 296
#define TYPEDEF 297
#define ELSE 298
#define REGISTER 299
#define UNION 300
#define TDOT 301
#define EQUAL 302
#define MODEQ 303
#define ADDEQ 304
#define MULEQ 305
#define DIVEQ 306
#define SUBEQ 307
#define SHLEQ 308
#define SHREQ 309
#define SQROPEN 310
#define SQRCLOSE 311
#define CIROPEN 312
#define CIRCLOSE 313
#define CUROPEN 314
#define CURCLOSE 315
#define DOT 316
#define ARROW 317
#define INCRE 318
#define DECRE 319
#define AND 320
#define MUL 321
#define ADD 322
#define SUB 323
#define NEQ 324
#define EXCL 325
#define DIV 326
#define MOD 327
#define LESH 328
#define RISH 329
#define LST 330
#define GRT 331
#define LSE 332
#define GRE 333
#define EQUATE 334
#define NEQE 335
#define XOR 336
#define OR 337
#define ANDNUM 338
#define ORNUM 339
#define QUESTION 340
#define COLON 341
#define LINEEND 342
#define ANDE 343
#define XORE 344
#define ORE 345
#define COMMA 346
#define HASH 347
#define THEN 348

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "ass5_19CS10031_19CS10051.y"

	char unaryOp;	//unaryoperator		
	int intval;
    float floatval;
    char charval;
    char *stringval;

	int instr_number;		//instruction number: for backpatching	
	int num_params;			//number of parameters
	struct Expression *expr;		//expression
	struct Statement *stat;		//statement		
	class symboltype *sym_type;	//symbol type  
	class sym *symp;		//symbol
	struct Array *A;  //Array type

#line 340 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   998

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  197
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  341

#define YYUNDEFTOK  2
#define YYMAXUTOK   349


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   189,   189,   197,   206,   213,   220,   231,   237,   241,
     247,   253,   262,   289,   299,   300,   301,   311,   321,   322,
     325,   330,   337,   338,   341,   345,   350,   356,   400,   402,
     406,   408,   410,   412,   414,   416,   421,   425,   432,   449,
     460,   471,   484,   488,   499,   513,   514,   525,   540,   541,
     559,   576,   594,   613,   614,   635,   656,   657,   675,   676,
     694,   695,   713,   714,   729,   730,   744,   745,   772,   773,
     793,   795,   797,   799,   801,   803,   805,   807,   809,   811,
     813,   817,   819,   823,   827,   831,   832,   835,   837,   839,
     841,   845,   846,   849,   851,   857,   861,   868,   870,   872,
     874,   878,   880,   882,   884,   886,   888,   890,   894,   896,
     900,   901,   905,   907,   909,   913,   917,   924,   929,   936,
     937,   938,   939,   971,  1001,  1002,  1003,  1004,  1005,  1020,
    1021,  1039,  1040,  1044,  1066,  1068,  1072,  1074,  1079,  1081,
    1085,  1087,  1091,  1093,  1097,  1099,  1103,  1107,  1109,  1111,
    1115,  1117,  1121,  1122,  1125,  1129,  1131,  1135,  1137,  1141,
    1143,  1145,  1150,  1152,  1154,  1158,  1160,  1162,  1166,  1170,
    1171,  1174,  1175,  1182,  1183,  1187,  1188,  1192,  1203,  1215,
    1218,  1232,  1242,  1255,  1271,  1273,  1275,  1277,  1282,  1289,
    1291,  1295,  1297,  1301,  1309,  1311,  1315,  1316
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "FLOAT_CONSTANT",
  "CHAR_CONSTANT", "STRING_LITERAL", "INTEGER_CONSTANT", "COMMENT", "AUTO",
  "ENUM", "RESTRICT", "UNSIGNED", "BREAK", "EXTERN", "RETURN", "VOID",
  "CASE", "FLOAT", "SHORT", "VOLATILE", "CHAR", "FOR", "SIGNED", "WHILE",
  "CONST", "GOTO", "SIZEOF", "_BOOL", "CONTINUE", "IF", "STATIC",
  "_COMPLEX", "DEFAULT", "INLINE", "STRUCT", "_IMAGINARY", "DO", "INT",
  "SWITCH", "DOUBLE", "LONG", "TYPEDEF", "ELSE", "REGISTER", "UNION",
  "TDOT", "EQUAL", "MODEQ", "ADDEQ", "MULEQ", "DIVEQ", "SUBEQ", "SHLEQ",
  "SHREQ", "SQROPEN", "SQRCLOSE", "CIROPEN", "CIRCLOSE", "CUROPEN",
  "CURCLOSE", "DOT", "ARROW", "INCRE", "DECRE", "AND", "MUL", "ADD", "SUB",
  "NEQ", "EXCL", "DIV", "MOD", "LESH", "RISH", "LST", "GRT", "LSE", "GRE",
  "EQUATE", "NEQE", "XOR", "OR", "ANDNUM", "ORNUM", "QUESTION", "COLON",
  "LINEEND", "ANDE", "XORE", "ORE", "COMMA", "HASH", "THEN", "\"then\"",
  "$accept", "M", "N", "constant", "primary_expression",
  "postfix_expression", "argument_expression_list",
  "argument_expression_list_opt", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "type_qualifier", "function_specifier",
  "declarator", "direct_declarator", "type_qualifier_list_opt",
  "changetable", "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "initializer", "initializer_list", "designation_opt",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list_opt",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", "declaration_list_opt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349
};
# endif

#define YYPACT_NINF (-247)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-197)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     954,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,     7,   954,   954,
     954,   954,   886,  -247,  -247,  -247,     7,    12,   -35,   -49,
    -247,   813,   -28,    11,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,     4,  -247,    34,    12,  -247,     7,   638,  -247,     7,
     954,  -247,   501,   116,   -28,  -247,  -247,  -247,  -247,    76,
    -247,  -247,  -247,  -247,  -247,   682,   476,    17,   707,   707,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,    44,   369,
     751,  -247,   -36,     3,     6,    67,    60,    66,    53,    68,
      63,    64,  -247,  -247,  -247,  -247,   100,   594,  -247,   110,
     114,   569,  -247,   850,   -42,   476,  -247,  -247,   -34,   566,
    -247,   566,   118,   751,   171,   -45,   638,  -247,    57,  -247,
     476,  -247,  -247,   751,   751,   174,   175,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
     751,  -247,  -247,   751,   751,   751,   751,   751,   751,   751,
     751,   751,   751,   751,   751,   751,   751,   751,   751,    99,
      73,   269,  -247,   127,   594,  -247,  -247,  -247,   128,   129,
    -247,     7,   130,    95,  -247,  -247,   184,   131,  -247,   751,
    -247,  -247,  -247,   663,  -247,   135,  -247,  -247,   -16,  -247,
    -247,  -247,   134,   -37,   102,   136,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,   -36,   -36,     3,     3,     6,     6,     6,
       6,    67,    67,    60,    66,    53,  -247,  -247,  -247,   109,
     111,   381,   751,   139,  -247,   194,   112,   148,   120,  -247,
     150,  -247,   -44,  -247,  -247,  -247,  -247,   152,   154,  -247,
    -247,  -247,  -247,  -247,  -247,   159,  -247,  -247,  -247,  -247,
     920,  -247,   157,  -247,    17,  -247,  -247,  -247,   638,   157,
    -247,   751,  -247,   751,   751,   751,   337,  -247,  -247,    29,
     132,   406,   160,   133,  -247,   751,   337,   337,   751,  -247,
    -247,   269,  -247,  -247,  -247,   -22,  -247,  -247,    68,    63,
     138,  -247,  -247,   337,  -247,   751,  -247,   138,  -247,  -247,
     -30,  -247,  -247,    69,   140,  -247,   406,   -25,   161,   201,
     337,  -247,  -247,   169,  -247,  -247,   176,  -247,   751,  -247,
     751,   337,   337,   751,  -247,   337,   138,  -247,  -247,   -24,
    -247,   173,   189,   149,  -247,  -247,  -247,   337,   337,  -247,
    -247
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    99,   114,    97,   101,   106,   103,   113,   102,   112,
      98,   115,   104,   107,   105,   100,   192,    86,    92,    92,
      92,    92,     0,   189,   191,   118,     0,   132,     0,    85,
      93,    95,   117,     0,    91,    87,    88,    89,    90,     1,
     190,     0,   136,   134,   131,    84,     0,     0,   194,    86,
     197,   133,     0,   133,   116,   119,   135,   137,    94,    95,
       7,     5,     6,     9,     4,     0,     0,   153,     0,     0,
      30,    31,    32,    33,    34,    35,     8,    11,    24,    36,
       0,    38,    42,    45,    48,    53,    56,    58,    60,    62,
      64,    66,    68,   147,    96,   195,     0,     0,   123,    31,
       0,     0,   144,     0,     0,     0,    28,    81,     0,   111,
     146,   111,     0,     0,     0,     0,     0,   152,     0,   155,
       0,    25,    26,     0,    23,     0,     0,    16,    17,    70,
      73,    74,    71,    72,    75,    76,    77,    78,    79,    80,
       0,    36,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   169,   193,     0,     0,   127,   122,   121,    31,     0,
     130,   143,     0,   138,   140,   129,     0,     0,    10,     0,
     110,   108,   109,     0,    83,     0,   158,   148,   153,   150,
     154,   156,     0,     0,    22,     0,    20,    14,    15,    69,
      39,    40,    41,    43,    44,    46,    47,    49,    50,    51,
      52,    54,    55,    57,    59,    61,     2,     2,     2,     7,
       0,     0,     0,     0,     2,     0,     0,     0,     0,     2,
       0,   176,     0,   173,   174,   159,   160,     0,     2,   171,
     161,   162,   163,   164,   125,     0,   126,   120,   142,   128,
       0,   145,    29,    82,   153,    37,   157,   149,     0,     0,
      12,     0,    13,     0,     0,     0,     0,   186,   188,     0,
       0,     0,     0,     0,   185,     0,     0,     0,     0,   175,
     168,     0,   124,   139,   141,     0,   151,    21,    63,    65,
       3,   165,   187,     0,     2,     0,   184,     3,   167,     2,
       0,   172,    18,   153,     0,   166,     0,     0,     0,     0,
       0,    19,     2,     2,     2,     2,     0,   179,     0,     2,
       0,     0,     0,     0,    67,     0,     3,   180,     3,     0,
     182,     0,   177,     0,     2,     2,   181,     0,     0,   183,
     178
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -247,   -91,   -86,  -247,  -247,  -247,  -247,  -247,   -62,  -247,
     -68,    22,    15,     2,    18,    79,    80,    81,   -18,   -26,
    -247,  -109,     1,  -247,   -65,    19,   -29,  -247,     0,    90,
    -247,   200,  -247,   -46,    26,   137,    70,  -247,    -9,   214,
    -247,   196,   208,   -41,  -247,  -247,    10,  -247,   -79,  -107,
      -1,  -175,  -247,  -247,   143,   105,  -247,   158,  -247,  -247,
     -17,  -246,  -247,  -247,  -247,  -247,   235,  -247,  -247,  -247
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   263,   159,    76,    77,    78,   194,   195,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,   107,   140,   232,   185,    16,    28,    34,    35,
      29,    30,    18,    19,   110,   181,    20,    21,    59,    32,
      43,    96,    33,    44,   172,   173,   174,   104,   112,    94,
     115,   116,   117,   118,   119,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,    22,    23,    24,    50,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      17,   108,    48,   106,   184,   160,   121,   122,    31,   189,
      25,   101,   142,   258,    25,   187,   175,    41,   141,   260,
     109,    95,    17,     2,   178,   294,   177,    52,   310,    53,
     143,    49,     7,   314,   333,   144,   145,     9,   302,   113,
     108,   192,    46,   279,   257,   114,   188,   179,    93,   176,
      49,   141,    45,   100,   179,   108,   164,   179,   193,   109,
     313,   179,    55,   109,    26,   109,   179,   179,    26,   303,
     146,   147,   113,    27,   109,   200,   201,   202,   114,   148,
     149,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,    42,   163,   123,
      27,   124,   169,   171,   190,   125,   126,   127,   128,    36,
      37,    38,   113,   184,    57,   255,   292,    93,   114,   102,
     179,   141,    42,    47,   113,   196,   264,   265,   258,   311,
     114,   156,   233,   272,   157,   180,   111,   180,   277,   154,
     155,   199,   150,   151,   152,   153,    -3,   281,    -3,    -3,
     158,   286,   207,   208,   209,   210,   269,   217,   218,   161,
     141,    49,   248,   205,   206,   245,   165,    42,   203,   204,
     166,    57,   211,   212,   186,   111,   183,   197,   198,   111,
     253,   111,   216,   244,   246,   247,   250,   251,   249,   252,
     111,   256,   259,   261,   262,   266,   271,   273,   267,   274,
     290,   141,   141,   306,   304,   275,   276,   278,   309,   324,
     297,   308,   280,   300,  -170,   282,   254,   295,   293,   315,
     296,   318,   320,   321,   322,   316,   312,   319,   325,   179,
     307,   334,   335,   323,    57,   213,   336,   214,   289,   215,
     331,   270,   332,   337,   338,   288,    58,    54,   182,   103,
     171,    56,   233,   285,   162,   326,   141,    40,   329,    93,
     284,   191,   287,     0,   301,     0,     0,     0,     0,     0,
       0,     0,   219,    61,    62,    63,    64,     0,     1,     0,
       2,    49,   220,     3,   221,     4,   222,     5,     6,     7,
       8,   223,     0,   224,     9,   225,    65,     0,   226,   227,
      10,     0,   228,    11,     0,     0,   229,    12,   230,    13,
      14,     0,     0,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    66,     0,   161,     0,
       0,     0,    68,    69,    70,    71,    72,    73,    74,    75,
     219,    61,    62,    63,    64,     0,     0,     0,     0,     0,
     220,     0,   221,     0,   222,     0,   231,     0,     0,   223,
       0,   224,     0,   225,    65,     0,   226,   227,     0,     0,
     228,   291,     0,     0,   229,     0,   230,     0,     0,     0,
       0,   298,   299,     0,    60,    61,    62,    63,    64,     0,
       0,     0,     0,     0,    66,     0,   161,     0,   305,     0,
      68,    69,    70,    71,    72,    73,    74,    75,    65,    60,
      61,    62,    63,    64,     0,   317,   129,   130,   131,   132,
     133,   134,   135,   136,   231,     0,   327,   328,     0,     0,
     330,     0,     0,    65,     0,     0,     0,     0,    66,     0,
       0,     0,   339,   340,    68,    69,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,   137,   138,   139,
       0,     0,     0,    66,     0,     0,     0,     0,   268,    68,
      69,    70,    71,    72,    73,    74,    75,     0,     0,    60,
      61,    62,    63,    64,     0,     0,     0,     2,     0,     0,
       0,     0,     4,   231,     5,     6,     7,     8,     0,     0,
       0,     9,     0,    65,    60,    61,    62,    63,    64,     0,
       0,     0,     2,     0,    12,     0,    13,    14,     0,     0,
       0,     7,     0,     0,     0,     0,     9,     0,    65,     0,
       0,     0,    97,    66,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,    73,    74,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,    66,     0,
       0,     0,     0,     0,    68,    69,    70,    99,    72,    73,
      74,    75,    60,    61,    62,    63,    64,     2,     0,     0,
       2,     0,     4,     0,     5,     6,     7,     8,     0,     7,
       0,     9,     0,     0,     9,     0,    65,    60,    61,    62,
      63,    64,     0,     0,    12,     2,    13,    14,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     9,
       0,    65,     0,     0,     0,   167,    66,     0,     0,     0,
       0,     0,    68,    69,    70,   168,    72,    73,    74,    75,
       0,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,    66,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,    73,    74,    75,    65,    60,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,    61,    62,    63,    64,
      65,     0,     0,     0,     0,    66,     0,    67,     0,     0,
       0,    68,    69,    70,    71,    72,    73,    74,    75,    65,
      60,    61,    62,    63,    64,     0,     0,     0,     0,     0,
      66,     0,   254,     0,     0,     0,    68,    69,    70,    71,
      72,    73,    74,    75,    65,     0,     0,     0,     0,   105,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
      73,    74,    75,     0,    60,    61,    62,    63,    64,     0,
       0,     0,     0,     0,   120,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,    73,    74,    75,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    66,     0,
       0,     0,     0,     0,    68,    69,    70,    71,    72,    73,
      74,    75,     1,     0,     2,     0,     0,     3,     0,     4,
       0,     5,     6,     7,     8,     0,     0,     0,     9,     0,
       0,     0,     0,     0,    10,     0,     0,    11,     0,     0,
       0,    12,     0,    13,    14,     0,     0,    15,     0,     1,
      47,     2,     0,     0,     3,     0,     4,     0,     5,     6,
       7,     8,  -196,     0,     0,     9,     0,     0,     0,     0,
       0,    10,     0,     0,    11,     0,    39,     0,    12,     0,
      13,    14,     0,     0,    15,     1,     0,     2,     0,     0,
       3,     0,     4,     0,     5,     6,     7,     8,   170,     0,
       0,     9,     0,     0,     0,     0,     0,    10,     0,     0,
      11,     0,     0,     0,    12,     0,    13,    14,     0,     1,
      15,     2,     0,     0,     3,     0,     4,     0,     5,     6,
       7,     8,     0,     0,     0,     9,     0,     0,     0,     0,
       0,    10,     0,     0,    11,     0,     0,     0,    12,     0,
      13,    14,     0,     1,    15,     2,   283,     0,     3,     0,
       4,     0,     5,     6,     7,     8,     0,     0,     0,     9,
       0,     0,     0,     0,     0,    10,     0,     0,    11,     0,
       0,     0,    12,     0,    13,    14,     0,     0,    15
};

static const yytype_int16 yycheck[] =
{
       0,    66,    31,    65,   113,    91,    68,    69,    17,   116,
       3,    52,    80,   188,     3,    60,    58,    26,    80,    56,
      66,    50,    22,    11,    58,   271,   105,    55,    58,    57,
      66,    31,    20,    58,    58,    71,    72,    25,    60,    55,
     105,   120,    91,    87,    60,    61,    91,    91,    47,    91,
      50,   113,    87,    52,    91,   120,    97,    91,   123,   105,
     306,    91,    58,   109,    57,   111,    91,    91,    57,    91,
      67,    68,    55,    66,   120,   143,   144,   145,    61,    73,
      74,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,    27,    97,    55,
      66,    57,   101,   103,    47,    61,    62,    63,    64,    19,
      20,    21,    55,   222,    44,   183,    87,   116,    61,     3,
      91,   183,    52,    47,    55,   124,   217,   218,   303,    60,
      61,    65,   161,   224,    81,   109,    66,   111,   229,    79,
      80,   140,    75,    76,    77,    78,    83,   238,    84,    85,
      82,   258,   150,   151,   152,   153,   221,    84,    85,    59,
     222,   161,   171,   148,   149,   164,    56,    97,   146,   147,
      56,   101,   154,   155,     3,   105,    58,     3,     3,   109,
     179,   111,    83,    56,    56,    56,    91,     3,    58,    58,
     120,    56,    58,    91,    58,    86,    57,     3,    87,    87,
     265,   263,   264,   294,   290,    57,    86,    57,   299,   318,
     275,   297,    60,   278,    60,    56,    59,    57,    86,    58,
      87,   312,   313,   314,   315,    24,    86,    58,   319,    91,
     295,    58,    43,    57,   164,   156,    87,   157,   264,   158,
     326,   222,   328,   334,   335,   263,    46,    33,   111,    53,
     250,    43,   281,   254,    96,   320,   318,    22,   323,   258,
     250,   118,   261,    -1,   281,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,     9,    -1,
      11,   281,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    24,    25,    26,    27,    -1,    29,    30,
      31,    -1,    33,    34,    -1,    -1,    37,    38,    39,    40,
      41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    59,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    15,    -1,    17,    -1,    87,    -1,    -1,    22,
      -1,    24,    -1,    26,    27,    -1,    29,    30,    -1,    -1,
      33,   266,    -1,    -1,    37,    -1,    39,    -1,    -1,    -1,
      -1,   276,   277,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    59,    -1,   293,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    27,     3,
       4,     5,     6,     7,    -1,   310,    47,    48,    49,    50,
      51,    52,    53,    54,    87,    -1,   321,   322,    -1,    -1,
     325,    -1,    -1,    27,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,   337,   338,    63,    64,    65,    66,    67,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    87,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    16,    87,    18,    19,    20,    21,    -1,    -1,
      -1,    25,    -1,    27,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    11,    -1,    38,    -1,    40,    41,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    25,    -1,    27,    -1,
      -1,    -1,    31,    57,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,     3,     4,     5,     6,     7,    11,    -1,    -1,
      11,    -1,    16,    -1,    18,    19,    20,    21,    -1,    20,
      -1,    25,    -1,    -1,    25,    -1,    27,     3,     4,     5,
       6,     7,    -1,    -1,    38,    11,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    25,
      -1,    27,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    27,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      27,    -1,    -1,    -1,    -1,    57,    -1,    59,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    27,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    59,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    27,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,     9,    -1,    11,    -1,    -1,    14,    -1,    16,
      -1,    18,    19,    20,    21,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,
      -1,    38,    -1,    40,    41,    -1,    -1,    44,    -1,     9,
      47,    11,    -1,    -1,    14,    -1,    16,    -1,    18,    19,
      20,    21,    59,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    34,    -1,     0,    -1,    38,    -1,
      40,    41,    -1,    -1,    44,     9,    -1,    11,    -1,    -1,
      14,    -1,    16,    -1,    18,    19,    20,    21,    58,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      34,    -1,    -1,    -1,    38,    -1,    40,    41,    -1,     9,
      44,    11,    -1,    -1,    14,    -1,    16,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    38,    -1,
      40,    41,    -1,     9,    44,    11,    46,    -1,    14,    -1,
      16,    -1,    18,    19,    20,    21,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,
      -1,    -1,    38,    -1,    40,    41,    -1,    -1,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    11,    14,    16,    18,    19,    20,    21,    25,
      31,    34,    38,    40,    41,    44,   121,   123,   127,   128,
     131,   132,   160,   161,   162,     3,    57,    66,   122,   125,
     126,   133,   134,   137,   123,   124,   124,   124,   124,     0,
     161,   133,   131,   135,   138,    87,    91,    47,   121,   123,
     163,   164,    55,    57,   134,    58,   137,   131,   126,   133,
       3,     4,     5,     6,     7,    27,    57,    59,    63,    64,
      65,    66,    67,    68,    69,    70,    98,    99,   100,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   144,   121,   136,    31,    56,    66,
     117,   138,     3,   136,   142,    57,   103,   117,   119,   128,
     129,   131,   143,    55,    61,   145,   146,   147,   148,   149,
      57,   103,   103,    55,    57,    61,    62,    63,    64,    47,
      48,    49,    50,    51,    52,    53,    54,    88,    89,    90,
     118,   103,   105,    66,    71,    72,    67,    68,    73,    74,
      75,    76,    77,    78,    79,    80,    65,    81,    82,    97,
      97,    59,   152,   117,   138,    56,    56,    56,    66,   117,
      58,   123,   139,   140,   141,    58,    91,   143,    58,    91,
     129,   130,   130,    58,   116,   120,     3,    60,    91,   144,
      47,   149,   143,   119,   101,   102,   117,     3,     3,   117,
     105,   105,   105,   106,   106,   107,   107,   108,   108,   108,
     108,   109,   109,   110,   111,   112,    83,    84,    85,     3,
      13,    15,    17,    22,    24,    26,    29,    30,    33,    37,
      39,    87,   119,   121,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,    56,   117,    56,    56,   133,    58,
      91,     3,    58,   117,    59,   105,    56,    60,   146,    58,
      56,    91,    58,    96,    96,    96,    86,    87,    87,   119,
     120,    57,    96,     3,    87,    57,    86,    96,    57,    87,
      60,    96,    56,    46,   141,   145,   144,   117,   113,   114,
     119,   150,    87,    86,   156,    57,    87,   119,   150,   150,
     119,   155,    60,    91,    97,   150,    96,   119,    97,    96,
      58,    60,    86,   156,    58,    58,    24,   150,    96,    58,
      96,    96,    96,    57,   116,    96,   119,   150,   150,   119,
     150,    97,    97,    58,    58,    43,    87,    96,    96,   150,
     150
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    97,    98,    98,    98,    99,    99,    99,
      99,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     101,   101,   102,   102,   103,   103,   103,   103,   103,   103,
     104,   104,   104,   104,   104,   104,   105,   105,   106,   106,
     106,   106,   107,   107,   107,   108,   108,   108,   109,   109,
     109,   109,   109,   110,   110,   110,   111,   111,   112,   112,
     113,   113,   114,   114,   115,   115,   116,   116,   117,   117,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   119,   119,   120,   121,   122,   122,   123,   123,   123,
     123,   124,   124,   125,   125,   126,   126,   127,   127,   127,
     127,   128,   128,   128,   128,   128,   128,   128,   129,   129,
     130,   130,   131,   131,   131,   132,   133,   133,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   135,   135,   136,   137,   137,   138,   138,   139,   139,
     140,   140,   141,   141,   142,   142,   143,   144,   144,   144,
     145,   145,   146,   146,   147,   148,   148,   149,   149,   150,
     150,   150,   150,   150,   150,   151,   151,   151,   152,   153,
     153,   154,   154,   155,   155,   156,   156,   157,   157,   157,
     158,   158,   158,   158,   159,   159,   159,   159,   159,   160,
     160,   161,   161,   162,   163,   163,   164,   164
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     1,     1,     1,     1,     1,     1,
       3,     1,     4,     4,     3,     3,     2,     2,     6,     7,
       1,     3,     1,     0,     1,     2,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     5,     1,     9,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     0,     2,     2,     2,
       2,     1,     0,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     0,     1,     1,     1,     1,     2,     1,     1,     3,
       5,     4,     4,     3,     6,     5,     5,     4,     5,     4,
       4,     1,     0,     0,     2,     3,     1,     2,     1,     3,
       1,     3,     2,     1,     1,     3,     1,     1,     3,     4,
       2,     4,     1,     0,     2,     1,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     3,     0,
       1,     1,     3,     1,     1,     2,     1,     8,    11,     5,
       7,     9,     8,    11,     3,     2,     2,     3,     2,     1,
       2,     1,     1,     5,     1,     2,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 190 "ass5_19CS10031_19CS10051.y"
        {
		// backpatching,stores the index of the next quad to be generated
		// Used in various control statements
		(yyval.instr_number)=nextinstr();
	}
#line 1927 "y.tab.c"
    break;

  case 3:
#line 198 "ass5_19CS10031_19CS10051.y"
        {
		// backpatching,inserts a goto and stores the index of the next goto statement to guard against fallthrough
		(yyval.stat) =new Statement();            //N->nextlist=makelist(nextinstr) we have defined nextlist for Statements
		(yyval.stat)->nextlist=makelist(nextinstr());
		emit("goto","");
	}
#line 1938 "y.tab.c"
    break;

  case 4:
#line 207 "ass5_19CS10031_19CS10051.y"
        {
		(yyval.expr) =  new Expression();	
		string p=convertIntToString((yyvsp[0].intval));
		(yyval.expr)->loc=gentemp(new symboltype("int"),p);
		emit("=",(yyval.expr)->loc->name,p);
	}
#line 1949 "y.tab.c"
    break;

  case 5:
#line 214 "ass5_19CS10031_19CS10051.y"
        {
		(yyval.expr)=new Expression();
		string p=convertFloatToString((yyvsp[0].floatval));
		(yyval.expr)->loc=gentemp(new symboltype("float"),p);
		emit("=",(yyval.expr)->loc->name,p);
	}
#line 1960 "y.tab.c"
    break;

  case 6:
#line 221 "ass5_19CS10031_19CS10051.y"
        {
		(yyval.expr)=new Expression();
		string p=string(1,(yyvsp[0].charval));
		(yyval.expr)->loc=gentemp(new symboltype("char"),p);
		emit("=",(yyval.expr)->loc->name,p);
	}
#line 1971 "y.tab.c"
    break;

  case 7:
#line 232 "ass5_19CS10031_19CS10051.y"
        {	
		(yyval.expr)=new Expression();                      //create new expression and store pointer to ST entry in the location					 
		(yyval.expr)->loc=(yyvsp[0].symp);
		(yyval.expr)->type="not-boolean";
	}
#line 1981 "y.tab.c"
    break;

  case 8:
#line 238 "ass5_19CS10031_19CS10051.y"
        {
		(yyval.expr) = (yyvsp[0].expr);
	}
#line 1989 "y.tab.c"
    break;

  case 9:
#line 242 "ass5_19CS10031_19CS10051.y"
        {
		(yyval.expr)=new Expression();
		(yyval.expr)->loc=gentemp(new symboltype("ptr"),(yyvsp[0].stringval));
		(yyval.expr)->loc->type->arrtype=new symboltype("char");
	}
#line 1999 "y.tab.c"
    break;

  case 10:
#line 248 "ass5_19CS10031_19CS10051.y"
        {
		(yyval.expr) = (yyvsp[-1].expr);
	}
#line 2007 "y.tab.c"
    break;

  case 11:
#line 254 "ass5_19CS10031_19CS10051.y"
        { 

		(yyval.A)=new Array();
		(yyval.A)->Array=(yyvsp[0].expr)->loc;	
		(yyval.A)->type=(yyvsp[0].expr)->loc->type;	
		(yyval.A)->loc=(yyval.A)->Array;

	}
#line 2020 "y.tab.c"
    break;

  case 12:
#line 263 "ass5_19CS10031_19CS10051.y"
        { 	

		(yyval.A)=new Array();
		(yyval.A)->type=(yyvsp[-3].A)->type->arrtype;				// type=type of element				
		(yyval.A)->Array=(yyvsp[-3].A)->Array;						// copy the base
		(yyval.A)->loc=gentemp(new symboltype("int"));		// store computed address
		(yyval.A)->array_type="arr";						//array_type is arr.
		if((yyvsp[-3].A)->array_type=="arr") 
		{		
			sym* t=gentemp(new symboltype("int"));
			int p=computeSize((yyval.A)->type);
			string str=convertIntToString(p);
			emit("*",t->name,(yyvsp[-1].expr)->loc->name,str);
			emit("+",(yyval.A)->loc->name,(yyvsp[-3].A)->loc->name,t->name);
		}
		else 
		{                        //if a 1D Array, simply calculate size
			int p = computeSize((yyval.A)->type);

			string str=convertIntToString(p);

			emit("*",(yyval.A)->loc->name,(yyvsp[-1].expr)->loc->name,str);

	
		}
	}
#line 2051 "y.tab.c"
    break;

  case 13:
#line 291 "ass5_19CS10031_19CS10051.y"
        {

		(yyval.A)=new Array();	
		(yyval.A)->Array=gentemp((yyvsp[-3].A)->type);
		string str=convertIntToString((yyvsp[-1].num_params));
		emit("call",(yyval.A)->Array->name,(yyvsp[-3].A)->Array->name,str);

	}
#line 2064 "y.tab.c"
    break;

  case 14:
#line 299 "ass5_19CS10031_19CS10051.y"
                                            { }
#line 2070 "y.tab.c"
    break;

  case 15:
#line 300 "ass5_19CS10031_19CS10051.y"
                                              { }
#line 2076 "y.tab.c"
    break;

  case 16:
#line 302 "ass5_19CS10031_19CS10051.y"
        { 

		(yyval.A)=new Array();
		(yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);	
		emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);

		emit("+",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");

	}
#line 2090 "y.tab.c"
    break;

  case 17:
#line 312 "ass5_19CS10031_19CS10051.y"
        {

		(yyval.A)=new Array();	
		(yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);
		emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);

		emit("-",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");

	}
#line 2104 "y.tab.c"
    break;

  case 18:
#line 321 "ass5_19CS10031_19CS10051.y"
                                                                       {  }
#line 2110 "y.tab.c"
    break;

  case 19:
#line 322 "ass5_19CS10031_19CS10051.y"
                                                                             {  }
#line 2116 "y.tab.c"
    break;

  case 20:
#line 326 "ass5_19CS10031_19CS10051.y"
        {
	    (yyval.num_params)=1;                                      //one argument and emit param
		emit("param",(yyvsp[0].expr)->loc->name);	
	}
#line 2125 "y.tab.c"
    break;

  case 21:
#line 331 "ass5_19CS10031_19CS10051.y"
        {
		(yyval.num_params)=(yyvsp[-2].num_params)+1;                                  //one more argument and emit param		 
		emit("param",(yyvsp[0].expr)->loc->name);
	}
#line 2134 "y.tab.c"
    break;

  case 22:
#line 337 "ass5_19CS10031_19CS10051.y"
                                                       {(yyval.num_params) = (yyvsp[0].num_params);}
#line 2140 "y.tab.c"
    break;

  case 23:
#line 338 "ass5_19CS10031_19CS10051.y"
                 {(yyval.num_params) = 0;}
#line 2146 "y.tab.c"
    break;

  case 24:
#line 342 "ass5_19CS10031_19CS10051.y"
        { 
		(yyval.A) = (yyvsp[0].A);
	}
#line 2154 "y.tab.c"
    break;

  case 25:
#line 346 "ass5_19CS10031_19CS10051.y"
        {
		emit("+",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");
		(yyval.A)=(yyvsp[0].A);
	}
#line 2163 "y.tab.c"
    break;

  case 26:
#line 351 "ass5_19CS10031_19CS10051.y"
        {
		emit("-",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");

		(yyval.A)=(yyvsp[0].A);
	}
#line 2173 "y.tab.c"
    break;

  case 27:
#line 357 "ass5_19CS10031_19CS10051.y"
        {
		(yyval.A)=new Array();
		switch((yyvsp[-1].unaryOp))
		{	  
			case '&':                                       //address of something, then generate a pointer temporary and emit the quad
				
				(yyval.A)->Array=gentemp((new symboltype("ptr")));
				(yyval.A)->Array->type->arrtype=(yyvsp[0].A)->Array->type; 
				emit("=&",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
				break;
			case '*':                          //value of something, then generate a temporary of the corresponding type and emit the quad	
				(yyval.A)->array_type="ptr";
				(yyval.A)->loc=gentemp((yyvsp[0].A)->Array->type->arrtype);
				(yyval.A)->Array=(yyvsp[0].A)->Array;
				emit("=*",(yyval.A)->loc->name,(yyvsp[0].A)->Array->name);
				break;
			case '+':  
				(yyval.A)=(yyvsp[0].A);
		
				break;                    //unary plus, do nothing
			case '-':				   //unary minus, generate new temporary of the same base type and make it negative of current one
				(yyval.A)->Array=gentemp(new symboltype((yyvsp[0].A)->Array->type->type));
	
				emit("uminus",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
	
		
				break;
			case '~':                   //bitwise not, generate new temporary of the same base type and make it negative of current one
				(yyval.A)->Array=gentemp(new symboltype((yyvsp[0].A)->Array->type->type));
	
				emit("~",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
	
		
				break;
			case '!':				//logical not, generate new temporary of the same base type and make it negative of current one
				(yyval.A)->Array=gentemp(new symboltype((yyvsp[0].A)->Array->type->type));
	
				emit("!",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
	
		
				break;
		}
	}
#line 2221 "y.tab.c"
    break;

  case 28:
#line 401 "ass5_19CS10031_19CS10051.y"
        { }
#line 2227 "y.tab.c"
    break;

  case 29:
#line 403 "ass5_19CS10031_19CS10051.y"
        { }
#line 2233 "y.tab.c"
    break;

  case 30:
#line 407 "ass5_19CS10031_19CS10051.y"
        { (yyval.unaryOp) = '&';}
#line 2239 "y.tab.c"
    break;

  case 31:
#line 409 "ass5_19CS10031_19CS10051.y"
        { (yyval.unaryOp) = '*';}
#line 2245 "y.tab.c"
    break;

  case 32:
#line 411 "ass5_19CS10031_19CS10051.y"
        { (yyval.unaryOp) = '+';}
#line 2251 "y.tab.c"
    break;

  case 33:
#line 413 "ass5_19CS10031_19CS10051.y"
        { (yyval.unaryOp) = '-';}
#line 2257 "y.tab.c"
    break;

  case 34:
#line 415 "ass5_19CS10031_19CS10051.y"
        { (yyval.unaryOp) = '~';}
#line 2263 "y.tab.c"
    break;

  case 35:
#line 417 "ass5_19CS10031_19CS10051.y"
        { (yyval.unaryOp) = '!';}
#line 2269 "y.tab.c"
    break;

  case 36:
#line 422 "ass5_19CS10031_19CS10051.y"
        {
		(yyval.A) = (yyvsp[0].A);
	}
#line 2277 "y.tab.c"
    break;

  case 37:
#line 426 "ass5_19CS10031_19CS10051.y"
        {
		(yyval.A)=new Array();	
		(yyval.A)->Array=convertType((yyvsp[0].A)->Array,var_type);             //generate a new symbol of the given type
	}
#line 2286 "y.tab.c"
    break;

  case 38:
#line 433 "ass5_19CS10031_19CS10051.y"
        {
		(yyval.expr) = new Expression();             //generate new expression							    
		if((yyvsp[0].A)->array_type=="arr") 			   //if it is of type arr
		{
			(yyval.expr)->loc = gentemp((yyvsp[0].A)->loc->type);	
			emit("=[]", (yyval.expr)->loc->name, (yyvsp[0].A)->Array->name, (yyvsp[0].A)->loc->name);     //emit with Array right
		}
		else if((yyvsp[0].A)->array_type=="ptr")         //if it is of type ptr
		{ 
			(yyval.expr)->loc = (yyvsp[0].A)->loc;        //equate the locs
		}
		else
		{
			(yyval.expr)->loc = (yyvsp[0].A)->Array;
		}
	}
#line 2307 "y.tab.c"
    break;

  case 39:
#line 450 "ass5_19CS10031_19CS10051.y"
        { 
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array))         
			cout<<"Type Error in Program"<< endl;	// error
		else 								 //if types are compatible, generate new temporary and equate to the product
		{
			(yyval.expr) = new Expression();	
			(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
			emit("*", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);
		}
	}
#line 2322 "y.tab.c"
    break;

  case 40:
#line 461 "ass5_19CS10031_19CS10051.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array))
			cout << "Type Error in Program"<< endl;
		else    //if types are compatible, generate new temporary and equate to the quotient
		{
			(yyval.expr) = new Expression();
			(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
			emit("/", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);						
		}
	}
#line 2337 "y.tab.c"
    break;

  case 41:
#line 472 "ass5_19CS10031_19CS10051.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array))
			cout << "Type Error in Program"<< endl;		
		else 		 //if types are compatible, generate new temporary and equate to the quotient
		{
			(yyval.expr) = new Expression();
			(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
			emit("%", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);		
		}
	}
#line 2352 "y.tab.c"
    break;

  case 42:
#line 485 "ass5_19CS10031_19CS10051.y"
        { 
		(yyval.expr)=(yyvsp[0].expr); 
	}
#line 2360 "y.tab.c"
    break;

  case 43:
#line 489 "ass5_19CS10031_19CS10051.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
			cout << "Type Error in Program"<< endl;
		else    	//if types are compatible, generate new temporary and equate to the sum
		{
			(yyval.expr) = new Expression();	
			(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
			emit("+", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
		}
	}
#line 2375 "y.tab.c"
    break;

  case 44:
#line 500 "ass5_19CS10031_19CS10051.y"
        {

		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
			cout << "Type Error in Program"<< endl;		
		else        //if types are compatible, generate new temporary and equate to the difference
		{	
			(yyval.expr) = new Expression();	
			(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
			emit("-", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
		}
	}
#line 2391 "y.tab.c"
    break;

  case 45:
#line 513 "ass5_19CS10031_19CS10051.y"
                                        { (yyval.expr)=(yyvsp[0].expr); }
#line 2397 "y.tab.c"
    break;

  case 46:
#line 515 "ass5_19CS10031_19CS10051.y"
        { 
		if(!((yyvsp[0].expr)->loc->type->type == "int"))
			cout << "Type Error in Program"<< endl; 		
		else            //if base type is int, generate new temporary and equate to the shifted value
		{		
			(yyval.expr) = new Expression();	
			(yyval.expr)->loc = gentemp(new symboltype("int"));
			emit("<<", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
		}
	}
#line 2412 "y.tab.c"
    break;

  case 47:
#line 526 "ass5_19CS10031_19CS10051.y"
        { 	
		if(!((yyvsp[0].expr)->loc->type->type == "int"))
		{
			cout << "Type Error in Program"<< endl; 		
		}
		else  		//if base type is int, generate new temporary and equate to the shifted value
		{		
			(yyval.expr) = new Expression();	
			(yyval.expr)->loc = gentemp(new symboltype("int"));
			emit(">>", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
		}
	}
#line 2429 "y.tab.c"
    break;

  case 48:
#line 540 "ass5_19CS10031_19CS10051.y"
                                          { (yyval.expr)=(yyvsp[0].expr); }
#line 2435 "y.tab.c"
    break;

  case 49:
#line 542 "ass5_19CS10031_19CS10051.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
		{
	
			cout << "Type Error in Program"<< endl;
		}
		else 
		{      //check compatible types		
								
			(yyval.expr) = new Expression();
			(yyval.expr)->type = "bool";                         //new type is boolean
			(yyval.expr)->truelist = makelist(nextinstr());     //makelist for truelist and falselist
			(yyval.expr)->falselist = makelist(nextinstr()+1);
			emit("<", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);     //emit statement if a<b goto .. 
			emit("goto", "");	//emit statement goto ..
		}
	}
#line 2457 "y.tab.c"
    break;

  case 50:
#line 560 "ass5_19CS10031_19CS10051.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
		{
	
			cout << "Type Error in Program"<< endl;
		}
		else 
		{
			(yyval.expr) = new Expression();	
			(yyval.expr)->type = "bool";
			(yyval.expr)->truelist = makelist(nextinstr());
			(yyval.expr)->falselist = makelist(nextinstr()+1);
			emit(">", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
			emit("goto", "");
		}	
	}
#line 2478 "y.tab.c"
    break;

  case 51:
#line 577 "ass5_19CS10031_19CS10051.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
		{
	
			cout << "Type Error in Program"<< endl;
		}
		else 
		{		
	
			(yyval.expr) = new Expression();		
			(yyval.expr)->type = "bool";
			(yyval.expr)->truelist = makelist(nextinstr());
			(yyval.expr)->falselist = makelist(nextinstr()+1);
			emit("<=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
			emit("goto", "");
		}		
	}
#line 2500 "y.tab.c"
    break;

  case 52:
#line 595 "ass5_19CS10031_19CS10051.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
		{
			cout << "Type Error in Program"<< endl;
		}
		else 
		{
	
			(yyval.expr) = new Expression();
			(yyval.expr)->type = "bool";
			(yyval.expr)->truelist = makelist(nextinstr());
			(yyval.expr)->falselist = makelist(nextinstr()+1);
			emit(">=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
			emit("goto", "");
		}
	}
#line 2521 "y.tab.c"
    break;

  case 53:
#line 613 "ass5_19CS10031_19CS10051.y"
                                            { (yyval.expr)=(yyvsp[0].expr); }
#line 2527 "y.tab.c"
    break;

  case 54:
#line 615 "ass5_19CS10031_19CS10051.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))                //check compatible types
		{
	
			cout << "Type Error in Program"<< endl;
		}
		else 
		{
			convertBoolToInt((yyvsp[-2].expr));                  //convert bool to int
			convertBoolToInt((yyvsp[0].expr));
			(yyval.expr) = new Expression();
			(yyval.expr)->type = "bool";
			(yyval.expr)->truelist = makelist(nextinstr());            //make lists for new expression
			(yyval.expr)->falselist = makelist(nextinstr()+1); 
			emit("==", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);      //emit if a==b goto ..
			emit("goto", "");				//emit goto ..	
		}
		
	}
#line 2551 "y.tab.c"
    break;

  case 55:
#line 636 "ass5_19CS10031_19CS10051.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
		{
	
			cout << "Type Error in Program"<< endl;
		}
		else 
		{			
			convertBoolToInt((yyvsp[-2].expr));	
			convertBoolToInt((yyvsp[0].expr));
			(yyval.expr) = new Expression();                 //result is boolean
			(yyval.expr)->type = "bool";
			(yyval.expr)->truelist = makelist(nextinstr());
			(yyval.expr)->falselist = makelist(nextinstr()+1);
			emit("!=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
			emit("goto", "");
		}
	}
#line 2574 "y.tab.c"
    break;

  case 56:
#line 656 "ass5_19CS10031_19CS10051.y"
                                     { (yyval.expr)=(yyvsp[0].expr); }
#line 2580 "y.tab.c"
    break;

  case 57:
#line 658 "ass5_19CS10031_19CS10051.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))         //check compatible types 
		{
			cout << "Type Error in Program"<< endl;
		}
		else 
		{      
			convertBoolToInt((yyvsp[-2].expr));                             //convert bool to int
			convertBoolToInt((yyvsp[0].expr));
			(yyval.expr) = new Expression();
			(yyval.expr)->type = "not-boolean";                   //result is not boolean
			(yyval.expr)->loc = gentemp(new symboltype("int"));
			emit("&", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);               //emit the quad
		}
	}
#line 2600 "y.tab.c"
    break;

  case 58:
#line 675 "ass5_19CS10031_19CS10051.y"
                                         { (yyval.expr)=(yyvsp[0].expr); }
#line 2606 "y.tab.c"
    break;

  case 59:
#line 677 "ass5_19CS10031_19CS10051.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))    //same as and_expression: check compatible types, make non-boolean expression and convert bool to int and emit
		{
			cout << "Type Error in Program"<< endl;
		}
		else 
		{
			convertBoolToInt((yyvsp[-2].expr));	
			convertBoolToInt((yyvsp[0].expr));
			(yyval.expr) = new Expression();
			(yyval.expr)->type = "not-boolean";
			(yyval.expr)->loc = gentemp(new symboltype("int"));
			emit("^", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
		}
	}
#line 2626 "y.tab.c"
    break;

  case 60:
#line 694 "ass5_19CS10031_19CS10051.y"
                                                 { (yyval.expr)=(yyvsp[0].expr); }
#line 2632 "y.tab.c"
    break;

  case 61:
#line 696 "ass5_19CS10031_19CS10051.y"
        { 
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))   //same as and_expression: check compatible types, make non-boolean expression and convert bool to int and emit
		{
			cout << "Type Error in Program"<< endl;
		}
		else 
		{
			convertBoolToInt((yyvsp[-2].expr));		
			convertBoolToInt((yyvsp[0].expr));
			(yyval.expr) = new Expression();
			(yyval.expr)->type = "not-boolean";
			(yyval.expr)->loc = gentemp(new symboltype("int"));
			emit("|", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
		} 
	}
#line 2652 "y.tab.c"
    break;

  case 62:
#line 713 "ass5_19CS10031_19CS10051.y"
                                                 { (yyval.expr)=(yyvsp[0].expr); }
#line 2658 "y.tab.c"
    break;

  case 63:
#line 715 "ass5_19CS10031_19CS10051.y"
        { 

		convertIntToBool((yyvsp[0].expr));         //convert inclusive_or_expression int to bool
		backpatch((yyvsp[-3].stat)->nextlist, nextinstr());        //$2->nextlist goes to next instruction
		convertIntToBool((yyvsp[-4].expr));                  //convert logical_and_expression to bool
		(yyval.expr) = new Expression();     //make new boolean expression 
		(yyval.expr)->type = "bool";
		backpatch((yyvsp[-4].expr)->truelist, (yyvsp[-1].instr_number));        //if $1 is true, we move to $5
		(yyval.expr)->truelist = (yyvsp[0].expr)->truelist;        //if $5 is also true, we get truelist for $$
		(yyval.expr)->falselist = merge((yyvsp[-4].expr)->falselist, (yyvsp[0].expr)->falselist);    //merge their falselists

	}
#line 2675 "y.tab.c"
    break;

  case 64:
#line 729 "ass5_19CS10031_19CS10051.y"
                                                { (yyval.expr)=(yyvsp[0].expr); }
#line 2681 "y.tab.c"
    break;

  case 65:
#line 731 "ass5_19CS10031_19CS10051.y"
        { 

		convertIntToBool((yyvsp[0].expr));			 //convert logical_and_expression int to bool
		backpatch((yyvsp[-3].stat)->nextlist, nextinstr());	//$2->nextlist goes to next instruction
		convertIntToBool((yyvsp[-4].expr));			//convert logical_or_expression to bool
		(yyval.expr) = new Expression();			//make new boolean expression
		(yyval.expr)->type = "bool";
		backpatch((yyvsp[-4].expr)->falselist, (yyvsp[-1].instr_number));		//if $1 is true, we move to $5
		(yyval.expr)->truelist = merge((yyvsp[-4].expr)->truelist, (yyvsp[0].expr)->truelist);		//merge their truelists
		(yyval.expr)->falselist = (yyvsp[0].expr)->falselist;		 	//if $5 is also false, we get falselist for $$

	}
#line 2698 "y.tab.c"
    break;

  case 66:
#line 744 "ass5_19CS10031_19CS10051.y"
                                              {(yyval.expr)=(yyvsp[0].expr);}
#line 2704 "y.tab.c"
    break;

  case 67:
#line 746 "ass5_19CS10031_19CS10051.y"
        {

		//normal conversion method to get conditional expressions
		(yyval.expr)->loc = gentemp((yyvsp[-4].expr)->loc->type);       //generate temporary for expression
		(yyval.expr)->loc->update((yyvsp[-4].expr)->loc->type);
		emit("=", (yyval.expr)->loc->name, (yyvsp[0].expr)->loc->name);      //make it equal to sconditional_expression

		list<int> l = makelist(nextinstr());        //makelist next instruction
		emit("goto", "");              //prevent fallthrough

		backpatch((yyvsp[-3].stat)->nextlist, nextinstr());        //after N, go to next instruction
		emit("=", (yyval.expr)->loc->name, (yyvsp[-4].expr)->loc->name);

		list<int> m = makelist(nextinstr());         //makelist next instruction
		l = merge(l, m);						//merge the two lists
		emit("goto", "");						//prevent fallthrough

		backpatch((yyvsp[-7].stat)->nextlist, nextinstr());   //backpatching
		convertIntToBool((yyvsp[-8].expr));                   //convert expression to boolean
		backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr_number));           //$1 true goes to expression
		backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr_number));          //$1 false goes to conditional_expression
		backpatch(l, nextinstr());

	}
#line 2733 "y.tab.c"
    break;

  case 68:
#line 772 "ass5_19CS10031_19CS10051.y"
                                              {(yyval.expr)=(yyvsp[0].expr);}
#line 2739 "y.tab.c"
    break;

  case 69:
#line 774 "ass5_19CS10031_19CS10051.y"
         {
		if((yyvsp[-2].A)->array_type=="arr")       //if type is arr, simply check if we need to convert and emit
		{
			(yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].A)->type->type);
			emit("[]=", (yyvsp[-2].A)->Array->name, (yyvsp[-2].A)->loc->name, (yyvsp[0].expr)->loc->name);		
		}
		else if((yyvsp[-2].A)->array_type=="ptr")     //if type is ptr, simply emit
		{
			emit("*=", (yyvsp[-2].A)->Array->name, (yyvsp[0].expr)->loc->name);		
		}
		else                              //otherwise assignment
		{
			(yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].A)->Array->type->type);
			emit("=", (yyvsp[-2].A)->Array->name, (yyvsp[0].expr)->loc->name);
		}	
		(yyval.expr) = (yyvsp[0].expr);	
	}
#line 2761 "y.tab.c"
    break;

  case 70:
#line 794 "ass5_19CS10031_19CS10051.y"
        { }
#line 2767 "y.tab.c"
    break;

  case 71:
#line 796 "ass5_19CS10031_19CS10051.y"
        { }
#line 2773 "y.tab.c"
    break;

  case 72:
#line 798 "ass5_19CS10031_19CS10051.y"
        { }
#line 2779 "y.tab.c"
    break;

  case 73:
#line 800 "ass5_19CS10031_19CS10051.y"
        { }
#line 2785 "y.tab.c"
    break;

  case 74:
#line 802 "ass5_19CS10031_19CS10051.y"
        { }
#line 2791 "y.tab.c"
    break;

  case 75:
#line 804 "ass5_19CS10031_19CS10051.y"
        { }
#line 2797 "y.tab.c"
    break;

  case 76:
#line 806 "ass5_19CS10031_19CS10051.y"
        { }
#line 2803 "y.tab.c"
    break;

  case 77:
#line 808 "ass5_19CS10031_19CS10051.y"
        { }
#line 2809 "y.tab.c"
    break;

  case 78:
#line 810 "ass5_19CS10031_19CS10051.y"
        { }
#line 2815 "y.tab.c"
    break;

  case 79:
#line 812 "ass5_19CS10031_19CS10051.y"
        { }
#line 2821 "y.tab.c"
    break;

  case 80:
#line 814 "ass5_19CS10031_19CS10051.y"
        { }
#line 2827 "y.tab.c"
    break;

  case 81:
#line 818 "ass5_19CS10031_19CS10051.y"
        { (yyval.expr) = (yyvsp[0].expr); }
#line 2833 "y.tab.c"
    break;

  case 82:
#line 820 "ass5_19CS10031_19CS10051.y"
        {}
#line 2839 "y.tab.c"
    break;

  case 83:
#line 824 "ass5_19CS10031_19CS10051.y"
        {}
#line 2845 "y.tab.c"
    break;

  case 84:
#line 828 "ass5_19CS10031_19CS10051.y"
        { }
#line 2851 "y.tab.c"
    break;

  case 87:
#line 836 "ass5_19CS10031_19CS10051.y"
        { }
#line 2857 "y.tab.c"
    break;

  case 88:
#line 838 "ass5_19CS10031_19CS10051.y"
        { }
#line 2863 "y.tab.c"
    break;

  case 89:
#line 840 "ass5_19CS10031_19CS10051.y"
        { }
#line 2869 "y.tab.c"
    break;

  case 90:
#line 842 "ass5_19CS10031_19CS10051.y"
        { }
#line 2875 "y.tab.c"
    break;

  case 93:
#line 850 "ass5_19CS10031_19CS10051.y"
        { }
#line 2881 "y.tab.c"
    break;

  case 94:
#line 852 "ass5_19CS10031_19CS10051.y"
        { }
#line 2887 "y.tab.c"
    break;

  case 95:
#line 858 "ass5_19CS10031_19CS10051.y"
        {
		(yyval.symp) = (yyvsp[0].symp);
	}
#line 2895 "y.tab.c"
    break;

  case 96:
#line 862 "ass5_19CS10031_19CS10051.y"
        {		
		if((yyvsp[0].symp)->val!="") (yyvsp[-2].symp)->val=(yyvsp[0].symp)->val;        //get the initial value and  emit it
		emit("=", (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);
	}
#line 2904 "y.tab.c"
    break;

  case 97:
#line 869 "ass5_19CS10031_19CS10051.y"
        { }
#line 2910 "y.tab.c"
    break;

  case 98:
#line 871 "ass5_19CS10031_19CS10051.y"
        { }
#line 2916 "y.tab.c"
    break;

  case 99:
#line 873 "ass5_19CS10031_19CS10051.y"
        { }
#line 2922 "y.tab.c"
    break;

  case 100:
#line 875 "ass5_19CS10031_19CS10051.y"
        { }
#line 2928 "y.tab.c"
    break;

  case 101:
#line 879 "ass5_19CS10031_19CS10051.y"
        { var_type="void"; }
#line 2934 "y.tab.c"
    break;

  case 102:
#line 881 "ass5_19CS10031_19CS10051.y"
        { var_type="char"; }
#line 2940 "y.tab.c"
    break;

  case 103:
#line 883 "ass5_19CS10031_19CS10051.y"
        { }
#line 2946 "y.tab.c"
    break;

  case 104:
#line 885 "ass5_19CS10031_19CS10051.y"
        { var_type="int"; }
#line 2952 "y.tab.c"
    break;

  case 105:
#line 887 "ass5_19CS10031_19CS10051.y"
        { }
#line 2958 "y.tab.c"
    break;

  case 106:
#line 889 "ass5_19CS10031_19CS10051.y"
        { var_type="float"; }
#line 2964 "y.tab.c"
    break;

  case 107:
#line 891 "ass5_19CS10031_19CS10051.y"
        { }
#line 2970 "y.tab.c"
    break;

  case 108:
#line 895 "ass5_19CS10031_19CS10051.y"
        { }
#line 2976 "y.tab.c"
    break;

  case 109:
#line 897 "ass5_19CS10031_19CS10051.y"
        { }
#line 2982 "y.tab.c"
    break;

  case 112:
#line 906 "ass5_19CS10031_19CS10051.y"
        { }
#line 2988 "y.tab.c"
    break;

  case 113:
#line 908 "ass5_19CS10031_19CS10051.y"
        { }
#line 2994 "y.tab.c"
    break;

  case 114:
#line 910 "ass5_19CS10031_19CS10051.y"
        { }
#line 3000 "y.tab.c"
    break;

  case 115:
#line 914 "ass5_19CS10031_19CS10051.y"
        { }
#line 3006 "y.tab.c"
    break;

  case 116:
#line 918 "ass5_19CS10031_19CS10051.y"
        { 
		symboltype *t = (yyvsp[-1].sym_type);
		while(t->arrtype!=NULL) t = t->arrtype; //for multidimensional arr1s, move in depth till you get the base type
		t->arrtype = (yyvsp[0].symp)->type;                  //add the base type 
		(yyval.symp) = (yyvsp[0].symp)->update((yyvsp[-1].sym_type));                    //update
	}
#line 3017 "y.tab.c"
    break;

  case 117:
#line 925 "ass5_19CS10031_19CS10051.y"
        { }
#line 3023 "y.tab.c"
    break;

  case 118:
#line 930 "ass5_19CS10031_19CS10051.y"
        {

		(yyval.symp) = (yyvsp[0].symp)->update(new symboltype(var_type));
		currSymPtr = (yyval.symp);

	}
#line 3034 "y.tab.c"
    break;

  case 119:
#line 936 "ass5_19CS10031_19CS10051.y"
                                      {(yyval.symp)=(yyvsp[-1].symp);}
#line 3040 "y.tab.c"
    break;

  case 120:
#line 937 "ass5_19CS10031_19CS10051.y"
                                                                                       {	}
#line 3046 "y.tab.c"
    break;

  case 121:
#line 938 "ass5_19CS10031_19CS10051.y"
                                                                 {	}
#line 3052 "y.tab.c"
    break;

  case 122:
#line 940 "ass5_19CS10031_19CS10051.y"
        {

		symboltype *t = (yyvsp[-3].symp) -> type;
		symboltype *prev = NULL;
		while(t->type == "arr") 
		{
			prev = t;	
			t = t->arrtype;      //keep moving recursively to get basetype

		}
		if(prev==NULL) 
		{
	
			int temp = atoi((yyvsp[-1].expr)->loc->val.c_str());      //get initial value

			symboltype* s = new symboltype("arr", (yyvsp[-3].symp)->type, temp);        //create new symbol with that initial value

			(yyval.symp) = (yyvsp[-3].symp)->update(s);   //update the symbol table

	
		}
		else 
		{
	
			prev->arrtype =  new symboltype("arr", t, atoi((yyvsp[-1].expr)->loc->val.c_str()));     //similar arguments as above		

			(yyval.symp) = (yyvsp[-3].symp)->update((yyvsp[-3].symp)->type);

	
		}
	}
#line 3088 "y.tab.c"
    break;

  case 123:
#line 972 "ass5_19CS10031_19CS10051.y"
        {

		symboltype *t = (yyvsp[-2].symp) -> type;
		symboltype *prev = NULL;
		while(t->type == "arr") 
		{
			prev = t;	
			t = t->arrtype;         //keep moving recursively to base type

		}
		if(prev==NULL) 
		{
	
			symboltype* s = new symboltype("arr", (yyvsp[-2].symp)->type, 0);    //no initial values, simply keep 0

			(yyval.symp) = (yyvsp[-2].symp)->update(s);

		
		}
		else 
		{
	
			prev->arrtype =  new symboltype("arr", t, 0);

			(yyval.symp) = (yyvsp[-2].symp)->update((yyvsp[-2].symp)->type);

	
		}
	}
#line 3122 "y.tab.c"
    break;

  case 124:
#line 1001 "ass5_19CS10031_19CS10051.y"
                                                                                              {	}
#line 3128 "y.tab.c"
    break;

  case 125:
#line 1002 "ass5_19CS10031_19CS10051.y"
                                                                          {	}
#line 3134 "y.tab.c"
    break;

  case 126:
#line 1003 "ass5_19CS10031_19CS10051.y"
                                                                     {	}
#line 3140 "y.tab.c"
    break;

  case 127:
#line 1004 "ass5_19CS10031_19CS10051.y"
                                                 {	}
#line 3146 "y.tab.c"
    break;

  case 128:
#line 1006 "ass5_19CS10031_19CS10051.y"
        {

		ST->name = (yyvsp[-4].symp)->name;
		if((yyvsp[-4].symp)->type->type !="void") 
		{
			sym *s = ST->lookup("return");         //lookup for return value	
			s->update((yyvsp[-4].symp)->type);	
		}
		(yyvsp[-4].symp)->nested = ST;       	
		ST->parent = globalST;
		changeTable(globalST);				// Come back to globalsymbol table
		currSymPtr = (yyval.symp);

	}
#line 3165 "y.tab.c"
    break;

  case 129:
#line 1020 "ass5_19CS10031_19CS10051.y"
                                                             {	}
#line 3171 "y.tab.c"
    break;

  case 130:
#line 1022 "ass5_19CS10031_19CS10051.y"
        {        //similar as above

		ST->name = (yyvsp[-3].symp)->name;
			if((yyvsp[-3].symp)->type->type !="void") 
		{
			sym *s = ST->lookup("return");
			s->update((yyvsp[-3].symp)->type);

				
		}
		(yyvsp[-3].symp)->nested=ST;
		ST->parent = globalST;
		changeTable(globalST);				// Come back to globalsymbol table
		currSymPtr = (yyval.symp);
	}
#line 3191 "y.tab.c"
    break;

  case 133:
#line 1045 "ass5_19CS10031_19CS10051.y"
        { 														// Used for changing to symbol table for a function
		
		
		
		if(currSymPtr->nested==NULL) 
		{
			
			changeTable(new symtable(""));	// Function symbol table doesn't already exist

		}
		else 
		{
			
			
			changeTable(currSymPtr ->nested);						// Function symbol table already exists
			
			emit("label", ST->name);
		}
	}
#line 3215 "y.tab.c"
    break;

  case 134:
#line 1067 "ass5_19CS10031_19CS10051.y"
        {(yyval.sym_type) = new symboltype("ptr");}
#line 3221 "y.tab.c"
    break;

  case 135:
#line 1069 "ass5_19CS10031_19CS10051.y"
        {(yyval.sym_type) = new symboltype("ptr",(yyvsp[0].sym_type));}
#line 3227 "y.tab.c"
    break;

  case 136:
#line 1073 "ass5_19CS10031_19CS10051.y"
        { }
#line 3233 "y.tab.c"
    break;

  case 137:
#line 1075 "ass5_19CS10031_19CS10051.y"
        { }
#line 3239 "y.tab.c"
    break;

  case 138:
#line 1080 "ass5_19CS10031_19CS10051.y"
        { }
#line 3245 "y.tab.c"
    break;

  case 139:
#line 1082 "ass5_19CS10031_19CS10051.y"
        { }
#line 3251 "y.tab.c"
    break;

  case 140:
#line 1086 "ass5_19CS10031_19CS10051.y"
        { }
#line 3257 "y.tab.c"
    break;

  case 141:
#line 1088 "ass5_19CS10031_19CS10051.y"
        { }
#line 3263 "y.tab.c"
    break;

  case 142:
#line 1092 "ass5_19CS10031_19CS10051.y"
        { }
#line 3269 "y.tab.c"
    break;

  case 143:
#line 1094 "ass5_19CS10031_19CS10051.y"
        { }
#line 3275 "y.tab.c"
    break;

  case 144:
#line 1098 "ass5_19CS10031_19CS10051.y"
        { }
#line 3281 "y.tab.c"
    break;

  case 145:
#line 1100 "ass5_19CS10031_19CS10051.y"
        { }
#line 3287 "y.tab.c"
    break;

  case 146:
#line 1104 "ass5_19CS10031_19CS10051.y"
        { }
#line 3293 "y.tab.c"
    break;

  case 147:
#line 1108 "ass5_19CS10031_19CS10051.y"
        {  (yyval.symp)=(yyvsp[0].expr)->loc; }
#line 3299 "y.tab.c"
    break;

  case 148:
#line 1110 "ass5_19CS10031_19CS10051.y"
        { }
#line 3305 "y.tab.c"
    break;

  case 149:
#line 1112 "ass5_19CS10031_19CS10051.y"
        { }
#line 3311 "y.tab.c"
    break;

  case 150:
#line 1116 "ass5_19CS10031_19CS10051.y"
        { }
#line 3317 "y.tab.c"
    break;

  case 151:
#line 1118 "ass5_19CS10031_19CS10051.y"
        { }
#line 3323 "y.tab.c"
    break;

  case 154:
#line 1126 "ass5_19CS10031_19CS10051.y"
        { }
#line 3329 "y.tab.c"
    break;

  case 155:
#line 1130 "ass5_19CS10031_19CS10051.y"
        { }
#line 3335 "y.tab.c"
    break;

  case 156:
#line 1132 "ass5_19CS10031_19CS10051.y"
        { }
#line 3341 "y.tab.c"
    break;

  case 157:
#line 1136 "ass5_19CS10031_19CS10051.y"
        { }
#line 3347 "y.tab.c"
    break;

  case 158:
#line 1138 "ass5_19CS10031_19CS10051.y"
        { }
#line 3353 "y.tab.c"
    break;

  case 159:
#line 1142 "ass5_19CS10031_19CS10051.y"
        { }
#line 3359 "y.tab.c"
    break;

  case 160:
#line 1144 "ass5_19CS10031_19CS10051.y"
        { (yyval.stat) = (yyvsp[0].stat);}
#line 3365 "y.tab.c"
    break;

  case 161:
#line 1146 "ass5_19CS10031_19CS10051.y"
        {   
		(yyval.stat)=new Statement();
		(yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist;
	}
#line 3374 "y.tab.c"
    break;

  case 162:
#line 1151 "ass5_19CS10031_19CS10051.y"
        {(yyval.stat) = (yyvsp[0].stat);}
#line 3380 "y.tab.c"
    break;

  case 163:
#line 1153 "ass5_19CS10031_19CS10051.y"
        {(yyval.stat) = (yyvsp[0].stat);}
#line 3386 "y.tab.c"
    break;

  case 164:
#line 1155 "ass5_19CS10031_19CS10051.y"
        {(yyval.stat) = (yyvsp[0].stat);}
#line 3392 "y.tab.c"
    break;

  case 165:
#line 1159 "ass5_19CS10031_19CS10051.y"
        { }
#line 3398 "y.tab.c"
    break;

  case 166:
#line 1161 "ass5_19CS10031_19CS10051.y"
        { }
#line 3404 "y.tab.c"
    break;

  case 167:
#line 1163 "ass5_19CS10031_19CS10051.y"
        { }
#line 3410 "y.tab.c"
    break;

  case 168:
#line 1167 "ass5_19CS10031_19CS10051.y"
        { (yyval.stat) = (yyvsp[-1].stat);}
#line 3416 "y.tab.c"
    break;

  case 169:
#line 1170 "ass5_19CS10031_19CS10051.y"
                             { (yyval.stat)=new Statement(); }
#line 3422 "y.tab.c"
    break;

  case 170:
#line 1171 "ass5_19CS10031_19CS10051.y"
                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3428 "y.tab.c"
    break;

  case 171:
#line 1174 "ass5_19CS10031_19CS10051.y"
                              { (yyval.stat)=(yyvsp[0].stat); }
#line 3434 "y.tab.c"
    break;

  case 172:
#line 1176 "ass5_19CS10031_19CS10051.y"
        { 
		(yyval.stat)=(yyvsp[0].stat);
		backpatch((yyvsp[-2].stat)->nextlist,(yyvsp[-1].instr_number));     //after $1, move to block_item via $2
	}
#line 3443 "y.tab.c"
    break;

  case 173:
#line 1182 "ass5_19CS10031_19CS10051.y"
                          { (yyval.stat)=new Statement(); }
#line 3449 "y.tab.c"
    break;

  case 174:
#line 1183 "ass5_19CS10031_19CS10051.y"
                      { (yyval.stat)=(yyvsp[0].stat); }
#line 3455 "y.tab.c"
    break;

  case 175:
#line 1187 "ass5_19CS10031_19CS10051.y"
                                         {(yyval.expr)=(yyvsp[-1].expr);}
#line 3461 "y.tab.c"
    break;

  case 176:
#line 1188 "ass5_19CS10031_19CS10051.y"
                  {(yyval.expr) = new Expression();}
#line 3467 "y.tab.c"
    break;

  case 177:
#line 1193 "ass5_19CS10031_19CS10051.y"
        {

		backpatch((yyvsp[-4].stat)->nextlist, nextinstr());        //nextlist of N goes to nextinstr
		convertIntToBool((yyvsp[-5].expr));         //convert expression to bool
		(yyval.stat) = new Statement();        //make new statement
		backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr_number));        //is expression is true, go to M i.e just before statement body
		list<int> temp = merge((yyvsp[-5].expr)->falselist, (yyvsp[-1].stat)->nextlist);   //merge falselist of expression, nextlist of statement and second N
		(yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist, temp);

	}
#line 3482 "y.tab.c"
    break;

  case 178:
#line 1204 "ass5_19CS10031_19CS10051.y"
        {

		backpatch((yyvsp[-7].stat)->nextlist, nextinstr());		//nextlist of N goes to nextinstr
		convertIntToBool((yyvsp[-8].expr));        //convert expression to bool
		(yyval.stat) = new Statement();       //make new statement
		backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr_number));    //when expression is true, go to M1 else go to M2
		backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr_number));
		list<int> temp = merge((yyvsp[-4].stat)->nextlist, (yyvsp[-3].stat)->nextlist);       //merge the nextlists of the statements and second N
		(yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist,temp);	
	
	}
#line 3498 "y.tab.c"
    break;

  case 179:
#line 1215 "ass5_19CS10031_19CS10051.y"
                                                       {	}
#line 3504 "y.tab.c"
    break;

  case 180:
#line 1219 "ass5_19CS10031_19CS10051.y"
        {

		(yyval.stat) = new Statement();    //create statement
		convertIntToBool((yyvsp[-3].expr));     //convert expression to bool
		backpatch((yyvsp[0].stat)->nextlist, (yyvsp[-5].instr_number));	// M1 to go back to expression again
		backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr_number));	// M2 to go to statement if the expression is true
		(yyval.stat)->nextlist = (yyvsp[-3].expr)->falselist;   //when expression is false, move out of loop
		// Emit to prevent fallthrough
		string str=convertIntToString((yyvsp[-5].instr_number));			
		emit("goto", str);

			
	}
#line 3522 "y.tab.c"
    break;

  case 181:
#line 1233 "ass5_19CS10031_19CS10051.y"
        {

		(yyval.stat) = new Statement();     //create statement
		convertIntToBool((yyvsp[-2].expr));      //convert to bool
		backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-7].instr_number));						// M1 to go back to statement if expression is true
		backpatch((yyvsp[-6].stat)->nextlist, (yyvsp[-5].instr_number));						// M2 to go to check expression if statement is complete
		(yyval.stat)->nextlist = (yyvsp[-2].expr)->falselist;                       //move out if statement is false
		
	}
#line 3536 "y.tab.c"
    break;

  case 182:
#line 1243 "ass5_19CS10031_19CS10051.y"
        {

		(yyval.stat) = new Statement();   //create new statement
		convertIntToBool((yyvsp[-3].expr));    //convert check expression to boolean
		backpatch((yyvsp[-3].expr)->truelist,(yyvsp[-1].instr_number));        //if expression is true, go to M2
		backpatch((yyvsp[0].stat)->nextlist,(yyvsp[-4].instr_number));        //after statement, go back to M1
		string str=convertIntToString((yyvsp[-4].instr_number));
		emit("goto", str);                 //prevent fallthrough

		(yyval.stat)->nextlist = (yyvsp[-3].expr)->falselist;      //move out if statement is false

	}
#line 3553 "y.tab.c"
    break;

  case 183:
#line 1256 "ass5_19CS10031_19CS10051.y"
        {

		(yyval.stat) = new Statement();		 //create new statement
		convertIntToBool((yyvsp[-6].expr));  //convert check expression to boolean
		backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr_number));	//if expression is true, go to M2
		backpatch((yyvsp[-3].stat)->nextlist, (yyvsp[-7].instr_number));	//after N, go back to M1
		backpatch((yyvsp[0].stat)->nextlist, (yyvsp[-5].instr_number));	//statement go back to expression
		string str=convertIntToString((yyvsp[-5].instr_number));
		emit("goto", str);				//prevent fallthrough

		(yyval.stat)->nextlist = (yyvsp[-6].expr)->falselist;	//move out if statement is false	
	
	}
#line 3571 "y.tab.c"
    break;

  case 184:
#line 1272 "ass5_19CS10031_19CS10051.y"
        {(yyval.stat) = new Statement();}
#line 3577 "y.tab.c"
    break;

  case 185:
#line 1274 "ass5_19CS10031_19CS10051.y"
        {(yyval.stat) = new Statement();}
#line 3583 "y.tab.c"
    break;

  case 186:
#line 1276 "ass5_19CS10031_19CS10051.y"
        {(yyval.stat) = new Statement();}
#line 3589 "y.tab.c"
    break;

  case 187:
#line 1278 "ass5_19CS10031_19CS10051.y"
        {
		(yyval.stat) = new Statement();
		emit("return",(yyvsp[-1].expr)->loc->name);               //emit return with the name of the return value
	}
#line 3598 "y.tab.c"
    break;

  case 188:
#line 1283 "ass5_19CS10031_19CS10051.y"
        {
		(yyval.stat) = new Statement();
		emit("return","");                         //simply emit return
	}
#line 3607 "y.tab.c"
    break;

  case 189:
#line 1290 "ass5_19CS10031_19CS10051.y"
        {}
#line 3613 "y.tab.c"
    break;

  case 190:
#line 1292 "ass5_19CS10031_19CS10051.y"
        {}
#line 3619 "y.tab.c"
    break;

  case 191:
#line 1296 "ass5_19CS10031_19CS10051.y"
        { }
#line 3625 "y.tab.c"
    break;

  case 192:
#line 1298 "ass5_19CS10031_19CS10051.y"
        { }
#line 3631 "y.tab.c"
    break;

  case 193:
#line 1302 "ass5_19CS10031_19CS10051.y"
        {	
		ST->parent = globalST;
		changeTable(globalST);               
	}
#line 3640 "y.tab.c"
    break;

  case 194:
#line 1310 "ass5_19CS10031_19CS10051.y"
        { }
#line 3646 "y.tab.c"
    break;

  case 195:
#line 1312 "ass5_19CS10031_19CS10051.y"
        { }
#line 3652 "y.tab.c"
    break;

  case 196:
#line 1315 "ass5_19CS10031_19CS10051.y"
                             {  }
#line 3658 "y.tab.c"
    break;

  case 197:
#line 1316 "ass5_19CS10031_19CS10051.y"
                             {  }
#line 3664 "y.tab.c"
    break;


#line 3668 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 1319 "ass5_19CS10031_19CS10051.y"


void yyerror(string s) 
{
	cout<<s<<endl;
}

