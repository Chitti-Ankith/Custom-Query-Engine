#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
int eid;
char ename[100];
int eage;
char eaddress[300];
int salary;
int deptno;
};
typedef struct node Node;
struct Node{
int dnum;
char dname[100];
char dlocation[100];
};
typedef struct Node dept;
dept* createDept(int num,char *name,char *location){
dept *t = (dept*)malloc(sizeof(dept));
    t->dnum= num;
    strcpy(t->dname,name);
    strcpy(t->dlocation,location);
return t;
}
Node createEmp(int id,int age,char *name,char *address,int sal,int dno ){
Node t;
    t.eid= id;
    t.eage = age;
    strcpy(t.ename,name);
    strcpy(t.eaddress,address);
    t.salary=sal;
    t.deptno= dno;

return t;
}

int main(){
FILE *outfile= fopen("emp.txt","w");
Node n = createEmp(1,15,"ahl","plot no 1",100,11);
Node m = createEmp(2,12,"rias","plot no 3",150,12);
fwrite (&n, sizeof(Node), 1, outfile);
fwrite (&m, sizeof(Node), 1, outfile);
Node o = createEmp(3,13,"ala","plot no 4",160,11);
fwrite (&o, sizeof(Node), 1, outfile);
o = createEmp(4,8,"kia","plot no 5",140,12);fwrite (&o, sizeof(Node), 1, outfile);
o = createEmp(5,12,"alex","plot no 6",164,13);fwrite (&o, sizeof(Node), 1, outfile);
o = createEmp(6,16,"ankith","plot no 7",168,14);fwrite (&o, sizeof(Node), 1, outfile);
o = createEmp(7,18,"stella","plot no 8",154,13);fwrite (&o, sizeof(Node), 1, outfile);
o = createEmp(8,12,"aditya","plot no 9",133,14);fwrite (&o, sizeof(Node), 1, outfile);
// o = createEmp(9,9,"phani","plot no 10",122,12);fwrite (&o, sizeof(Node), 1, outfile);

fclose(outfile);
// FILE *outfile= fopen("emp.txt","w");

FILE *infile;
infile = fopen("emp.txt","r");
Node p;
while(fread(&p,sizeof(Node),1,infile))
{
printf("%d\n",p.eid);
}
fclose(infile);
    return 0;
}