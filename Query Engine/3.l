%{
#include "y.tab.h"
#include <string.h>
char a[100];
%}
DOT [.]
LT [<]
GT [>]
EE [=]
NOT [!]
COMMA [,]

%%
[ ] ;
(g|G)(e|E)(t|T) {strcpy(a,yytext);yylval.str=strdup(a); return GET;};
(f|F)(r|R)(o|O)(m|M) {strcpy(a,yytext);yylval.str=strdup(a);return FROM;};
(w|W)(h|H)(e|E)(r|R)(e|E) {strcpy(a,yytext);yylval.str=strdup(a);return WHERE;};
(a|A)(n|N)(d|D) {strcpy(a,yytext);yylval.str=strdup(a);return AND;};
(o|O)(r|R) {strcpy(a,yytext);yylval.str=strdup(a);return OR;};
\n {strcpy(a,yytext);yylval.str=strdup(a);return NL;};
(e|E)(m|M)(p|P){DOT}(t|T)(x|X)(t|T) {strcpy(a,yytext);yylval.str=strdup(a); return EMP;};
(d|D)(e|E)(p|P)(t|T){DOT}(t|T)(x|X)(t|T) {strcpy(a,yytext);yylval.str=strdup(a);return DEPT;};
{LT} {strcpy(a,yytext);yylval.str=strdup(a);return LT;};
{GT} {strcpy(a,yytext);yylval.str=strdup(a);return GT;};
{LT}{EE} {strcpy(a,yytext);yylval.str=strdup(a);return LTE;};
{GT}{EE} {strcpy(a,yytext);yylval.str=strdup(a);return GTE;};
{EE}{EE} {strcpy(a,yytext);yylval.str=strdup(a);return EE;};
{NOT}{EE} {strcpy(a,yytext);yylval.str=strdup(a);return NE;};
{COMMA} {strcpy(a,yytext);yylval.str=strdup(a);return COMMA;};
(e|E)(i|I)(d|D) {strcpy(a,yytext);yylval.str=strdup(a);return EID;};
(e|E)(n|N)(a|A)(m|M)(e|E) {strcpy(a,yytext);yylval.str=strdup(a);return ENAME;};
(e|E)(a|A)(g|G)(e|E) {strcpy(a,yytext);yylval.str=strdup(a);return EAGE;};
(e|E)(a|A)(d|D)(d|D)(r|R)(e|E)(s|S)(s|S) {strcpy(a,yytext);yylval.str=strdup(a);return EADDRESS;};
(s|S)(a|A)(l|L)(a|A)(r|R)(y|Y) {strcpy(a,yytext);yylval.str=strdup(a);return SALARY;};
(d|D)(e|E)(p|P)(t|T)(n|N)(o|O) {strcpy(a,yytext);yylval.str=strdup(a);return DEPTNO;};
(d|D)(n|N)(u|U)(m|M) {strcpy(a,yytext);yylval.str=strdup(a);return DNUM;};
(d|D)(n|N)(a|A)(m|M)(e|E) {strcpy(a,yytext);yylval.str=strdup(a);return DNAME;};
(l|L)(o|O)(c|C)(a|A)(t|T)(i|I)(o|O)(n|N) {strcpy(a,yytext);yylval.str=strdup(a);return LOCATION;};
[a-zA-Z0-9]+ {strcpy(a,yytext);yylval.str=strdup(a);;return STR;}

%%
int main(){
yyparse();
return 0;
}
int yywrap(void){

return 0;
}

int yyerror(char *errormsg)
{
fprintf(stderr,"%s\n",errormsg);
exit(1);

}

