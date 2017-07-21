%{
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
extern int yylex();
extern void yyerror(const char *str)
{
	(void)str;
	write(1, "Error\n", 6);
}
%}

%token T_INT
%token T_PLUS T_MINUS T_MULT T_DIV T_MOD
%token T_LEFT_P
%token T_RIGHT_P
%token T_NEWLINE
%left T_PLUS T_MINUS
%left T_MULT T_DIV T_MOD
%left T_NEG
%%

eval: exp T_NEWLINE {printf("%i\n", $1);exit(0); }
exp: T_INT	{ $$ = $1; }
| exp T_PLUS exp	{ $$ = $1 + $3; }
| exp T_MINUS exp	{ $$ = $1 - $3; }
| exp T_MULT exp	{ $$ = $1 * $3; }
| exp T_DIV exp		{ $$ = $1 / $3; }
| exp T_MOD exp		{ $$ = $1 % $3; }
| T_MINUS exp %prec T_NEG { $$ = -$2; }
| T_LEFT_P exp T_RIGHT_P	{ $$ = $2; }
;

%%

