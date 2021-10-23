/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 259 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
