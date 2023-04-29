%{
#include "fileheader.h"
int yylex(void);
int yyerror(const char *s);
char *a,*b,*c,*d;
%}

%union {
	char *str;
	int num;
	}

%token <str> GET FROM WHERE NL AND OR COMMA  LT GT LTE GTE EE NE 
%token <str> STR EID ENAME EAGE EADDRESS SALARY DEPTNO DNUM DNAME LOCATION EMP DEPT
%type <str> value field files file STMT G conds scond condop fields 
%%
START : STMT START | STMT
;
STMT: G NL { printf("yes\n");  }
;
G: GET fields FROM files WHERE conds {
		a=strdup($2);b=strdup($4);c=strdup($6);
		getEmp(a,b,c);
		
		//change all variables to shor form li sal,eadd
		
		
		printf("$1 : %s\n$2 : %s\n$3 : %s\n$4 : %s\n$5 : %s\n$6 : %s ",$1,$2,$3,$4,$5,$6);
		}|GET fields FROM files{
		a=strdup($2);b=strdup($4);c=strdup("\0");
		getEmp(a,b,c);

		}
;
fields: field COMMA fields {strcpy($$,$1); strcat($$," "); strcat($$,$3); 
	// printf("\nfields: %s ",$$);
		}| field {strcpy($$,$1);
	// printf("\nfields: %s" ,$$);	
	}
;
conds:  scond AND conds {$$=strdup($1);strcat($$,"&");d=strdup($3);strcat($$,d);}|
scond OR conds {$$=strdup($1);strcat($$,"^");d=strdup($3);strcat($$,d);/* printf(" %s ",$$);*/}|
scond {$$=strdup($1);/*printf("conds: %s\n",$$);*/}
;
scond: field condop value {$$=strdup($1);strcat($$,"$");d=strdup($2);strcat($$,d);strcat($$,"$");d=strdup($3);strcat($$,d);$$=strrev($$);strcat($$,"(");$$=strrev($$);strcat($$,")");/*printf("\n scond: %s ",$$);*/}
;
field: EID {strcpy($$,"eid");/*printf("\n field: %s ",$$);*/}
| ENAME {strcpy($$,"ename");}
| EAGE {strcpy($$,"eage");}
| EADDRESS {strcpy($$,"eaddress");}
| SALARY {strcpy($$,"salary");}
| DEPTNO {strcpy($$,"deptno");}
| DNUM {strcpy($$,"dnum");}
| DNAME {strcpy($$,"dname");}
| LOCATION{strcpy($$,"location");}
;
value:STR {$$=strdup($1);/*printf("\n value: %s ",$$);*/
		// printf("the value is %s\n",$$);
		}
;
files: file {$$=strdup($1);/*printf("\nfiles: %s ",$$);*/}
			|file COMMA file {$$=strdup($1);strcat($$," ");d=strdup($3);strcat($$,d);}
;
file: EMP{strcpy($$,"emp.txt");/*printf("\nfile: %s ",$$);*/
	// printf("\nemp file is :%s\n",$1);
	}|DEPT {strcpy($$,"dept.txt");}
;
condop: LT{$$=strdup($1);}|GT{$$=strdup($1);}|LTE{$$=strdup($1);}|GTE{$$=strdup($1);}|EE{$$=strdup($1);}|NE{$$=strdup($1);}
;
%%