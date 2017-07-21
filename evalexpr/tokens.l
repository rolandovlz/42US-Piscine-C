%option noyywrap
%{
#include <unistd.h>
#include "grammar.tab.h"
#include "ft.h"
#include <stdio.h>
#include <fcntl.h>
int yylex();
int yyparse();
extern FILE* yyin;
%}
%%
[ \t]	;
[0-9]+	{yylval = ft_atoi(yytext); return T_INT; }
"+"	{return T_PLUS; }
"-"	{return T_MINUS;	}
"*"	{return T_MULT;	}
"/"	{return T_DIV;	}
"%"	{return T_MOD;	}
"("	{return T_LEFT_P; }
")"	{return T_RIGHT_P; }
"\n"	{return T_NEWLINE; }
. ;
%%

int eval_expr(char *str)
{
	FILE *fp;
	fp = fopen("exp.txt", "w");
	fprintf(fp, "\"");
	fprintf(fp, "%s",  str);
	fprintf(fp, "\"\n");
	fclose(fp);
	yyin = fopen("exp.txt", "r");
	yyparse();
	return (0);
}

int	main(int ac, char **av)
{

	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
