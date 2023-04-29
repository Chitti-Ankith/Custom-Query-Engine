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
// .........................................
typedef struct node empl;
struct Node{
int dnum;
char dname[100];
char dlocation[100];
};
typedef struct Node dept;
//...................................................
empl* createEmp(int id,int age,char *name,char *address,int dno ){
empl *t = (empl*)malloc(sizeof(empl));
    t->eid= id;
    t->eage = age;
    strcpy(t->ename,name);
    strcpy(t->eaddress,address);
    t->deptno= dno;

return t;
}
//...............................................
dept* createDept(int num,char *name,char *location){
dept *t = (dept*)malloc(sizeof(dept));
    t->dnum= num;
    strcpy(t->dname,name);
    strcpy(t->dlocation,location);
return t;
}
//.................................................
int present(char *s1,char *s2)
{
     int M = strlen(s1); 
    int N = strlen(s2); 
//   printf("%s %d,%s %d",s1,M,s2,N);
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) { 
        int j; 
  
        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++) 
            if (s2[i + j] != s1[j]) 
                break; 
  
        if (j == M) 
            return 1; 
    } 
  
    return 0; 
}
//................................
int check(empl p,char *a,char *b,char *c)
{
    int d,e,f,value,cond;
    // printf("%s,%s,%s\n",a,b,c);
    if(!strcmp(a,"eid")) 
    d=1;
    else if(!strcmp(a,"ename")) 
    d=2;
    else if(!strcmp(a,"eage")) 
    d=3;
    else if(!strcmp(a,"eaddress")) d=4;
    else if(!strcmp(a,"salary")) d=5;
    else if(!strcmp(a,"deptno")) d=6;
    else if(!strcmp(a,"dnum")) d=7;
    else if(!strcmp(a,"dname")) d=8;
    else if(!strcmp(a,"location")) d=9;
    else {return 0;}
    if(!strcmp(b,"<")) e=1;
    else if(!strcmp(b,"<=")) e=2;
    else if(!strcmp(b,"==")) e=3;
    else if(!strcmp(b,"!=")) e=4;
    else if(!strcmp(b,">=")) e=5;
    else if(!strcmp(b,">")) e=6;
    else {return 0;}
    if(d!=2&&d!=4&&d!=8&&d!=9){
        value = atoi(c);
    }
    // printf("d is %d,e is %d,value is %d\n",d,e,value);
    switch(d)
    {
        case 1:{
                switch(e){
                    case 1:{
                        return p.eid<value;
                    }break;
                    case 2:{
                        return p.eid<=value;
                    }break;
                    case 3:{
                        return p.eid==value;
                    }break;
                    case 4:{
                        return p.eid!=value;
                    }break;
                    case 5:{
                        return p.eid>=value;
                    }break;
                    case 6:{
                        return p.eid>value;
                    }break;
                }
        }break;
        case 2:{
                switch(e){
                    case 1:{
                        return 0;
                    }break;
                    case 2:{
                        return 0;
                    }break;
                    case 3:{
                        return !strcmp(p.ename,c);
                    }break;
                    case 4:{
                        return !!(strcmp(p.ename,c));
                    }break;
                    case 5:{
                        return 0;
                    }break;
                    case 6:{
                        return 0;
                    }break;
                }
        }break;
        case 3:{
                switch(e){
                    case 1:{
                        return p.eage<value;
                    }break;
                    case 2:{
                        return p.eage<=value;
                    }break;
                    case 3:{
                        return p.eage==value;
                    }break;
                    case 4:{
                        return p.eage!=value;
                    }break;
                    case 5:{
                        return p.eage>=value;
                    }break;
                    case 6:{
                        return p.eage>value;
                    }break;
                }
        }break;
        case 4:{
                switch(e){
                    case 1:{
                        return 0;
                    }break;
                    case 2:{
                        return 0;
                    }break;
                    case 3:{
                        return !strcmp(p.eaddress,c);
                    }break;
                    case 4:{
                        return (strcmp(p.eaddress,c));
                    }break;
                    case 5:{
                        return 0;
                    }break;
                    case 6:{
                        return 0;
                    }break;
                }
        }break;
        case 5:{
                switch(e){
                    case 1:{
                        return p.salary<value;
                    }break;
                    case 2:{
                        return p.salary<=value;
                    }break;
                    case 3:{
                        return p.salary==value;
                    }break;
                    case 4:{
                        return p.salary!=value;
                    }break;
                    case 5:{
                        return p.salary>=value;
                    }break;
                    case 6:{
                        return p.salary>value;
                    }break;
                }
        }break;
        case 6:{
                switch(e){
                    case 1:{
                        return p.deptno<value;
                    }break;
                    case 2:{
                        return p.deptno<=value;
                    }break;
                    case 3:{
                        return p.deptno==value;
                    }break;
                    case 4:{
                        return p.deptno!=value;
                    }break;
                    case 5:{
                        return p.deptno>=value;
                    }break;
                    case 6:{
                        return p.deptno>value;
                    }break;
                }
        }break;
        case 7:{
                switch(e){
                    case 1:{
                        return 0;
                    }break;
                    case 2:{
                        return 0;
                    }break;
                    case 3:{
                        return 0;
                    }break;
                    case 4:{
                        return 0;
                    }break;
                    case 5:{
                        return 0;
                    }break;
                    case 6:{
                        return 0;
                    }break;
                }
        }break;
        case 8:{
                switch(e){
                    case 1:{
                        return 0;
                    }break;
                    case 2:{
                        return 0;
                    }break;
                    case 3:{
                        return 0;
                    }break;
                    case 4:{
                        return 0;
                    }break;
                    case 5:{
                        return 0;
                    }break;
                    case 6:{
                        return 0;
                    }break;
                }
        }break;
        case 9:{
                switch(e){
                    case 1:{
                        return 0;
                    }break;
                    case 2:{
                        return 0;
                    }break;
                    case 3:{
                        return 0;
                    }break;
                    case 4:{
                        return 0;
                    }break;
                    case 5:{
                        return 0;
                    }break;
                    case 6:{
                        return 0;
                    }break;
                }
        }break;
    }
}
//......................................
int verify(int *a,char *b,int m,int n)
{
int i;
for(i=0;i<n;i++)
{
    if(b[i]=='&')
    {
        a[i]=a[i]&a[i+1];
        a[i+1]=a[i];
    }
}
for(i=0;i<m;i++)
{
    if(a[i]==1)
    return 1;
}
return 0;
}

//..................................
int test(empl p,char *conds)
{   if(conds[0]=='\0')
    {return 1;}
    char a[100];
    char b[100];
    char c[100];
    char ops[100];
    int iconds[100]={0};
    int i,j,k,l,m,n;
    int flag=0;
    j=0;k=0;l=0;n=0;m=0;
    for(i=0;i<strlen(conds);i++)
    {
        if(flag==0&&conds[i]=='(')
        {
            flag=1;
        }
        else if(flag==1&&conds[i]!='$')
        {
            a[j++]=conds[i];
        }
        else if(flag==1&&conds[i]=='$')
        {
            a[j]='\0';
            flag++;
        }
        else if(flag==2&&conds[i]!='$')
        {
            b[k++]=conds[i];
        }
        else if(flag==2&&conds[i]=='$')
        {
            b[k]='\0';
            flag++;
            continue;
        }
        else if(flag==3&&conds[i]!=')')
        {
            c[l++]=conds[i];
        }
        else if(flag==3&&conds[i]==')')
        {
            c[l]='\0';
            flag=0;
            j=0;k=0;l=0;
            // printf("HELLLLLOOOOOO");
            // printf("check is %d\n",check(p,a,b,c));
            iconds[m++]=check(p,a,b,c);
            // printf("(%s,%s,%s)\n",a,b,c);
            // return check(p,a,b,c);
            
        }
        else if(flag==0&&(conds[i]=='&'||conds[i]=='^'))
        {
            ops[n++]=conds[i];
        }
        else ;
    }

    return verify(iconds,ops,m,n);
}

//..............................
void getEmp(char *fields,char *files,char *conds){
// void getEmp(){
FILE *infile1;
// FILE *infile2;
puts(fields);
// puts(files);
// puts(conds);
int nconds=1;
int j;
if(conds[0]!='\0')
{
    for(j=0;j<strlen(conds);j++)
    {
        if(conds[j]=='^'||conds[j]=='&') nconds++;
    }

}
else 
{
    nconds=0;

}

    infile1= fopen("emp.txt","r");
    empl p;
    empl q[100];
    int i=0;
    int flag=0;
    i=0;
    while(fread(&p,sizeof(empl),1,infile1))
    {
    q[i]=p;

    // printf("%d\n",test(p,conds));
    if(test(p,conds)){
        flag++;
        if(present("eid",fields))
        printf("%d  ",q[i].eid);
        if(present("ename",fields))
        printf("%s  ",q[i].ename);
        if(present("eage",fields))
        printf("%d  ",q[i].eage);
        if(present("eaddress",fields))
        printf("%s  ",q[i].eaddress);
        if(present("salary",fields))
        printf("%d ",q[i].salary);
        if(present("deptno",fields))
        printf("%d  ",q[i].deptno);
        printf("\n");
    }
    i++;
    }
    if(flag==0){printf("No records found");}
    fclose(infile1);

}


char *strrev (char *str)
{
    if (!str) { 
        fprintf (stderr, "%s() Error: invalid string\n", __func__); 
        return NULL; 
    }

    char *begin = str;
    char *end = str + strlen (str) - 1;
    char tmp;

    while (end > begin)
    {
        tmp = *end;
        *end-- = *begin;
        *begin++ = tmp;
    }

    return str;
}