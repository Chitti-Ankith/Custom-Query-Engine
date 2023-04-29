
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     GET = 258,
     FROM = 259,
     WHERE = 260,
     NL = 261,
     AND = 262,
     OR = 263,
     COMMA = 264,
     LT = 265,
     GT = 266,
     LTE = 267,
     GTE = 268,
     EE = 269,
     NE = 270,
     STR = 271,
     EID = 272,
     ENAME = 273,
     EAGE = 274,
     EADDRESS = 275,
     SALARY = 276,
     DEPTNO = 277,
     DNUM = 278,
     DNAME = 279,
     LOCATION = 280,
     EMP = 281,
     DEPT = 282
   };
#endif
/* Tokens.  */
#define GET 258
#define FROM 259
#define WHERE 260
#define NL 261
#define AND 262
#define OR 263
#define COMMA 264
#define LT 265
#define GT 266
#define LTE 267
#define GTE 268
#define EE 269
#define NE 270
#define STR 271
#define EID 272
#define ENAME 273
#define EAGE 274
#define EADDRESS 275
#define SALARY 276
#define DEPTNO 277
#define DNUM 278
#define DNAME 279
#define LOCATION 280
#define EMP 281
#define DEPT 282




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 8 "3.y"

	char *str;
	int num;
	


/* Line 1676 of yacc.c  */
#line 113 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


