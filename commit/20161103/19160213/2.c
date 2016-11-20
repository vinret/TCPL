#include<stdio.h>
int main()
{
double A,B,C;
int T,i;
//printf("plese put a T(T<=10)");
scanf("%d",&T);
for(i=1;i<=T;i++)
{
scanf("%lg %lg %lg",&A,&B,&C);
if((A+B)>C)
printf("case #%d: turn\n",i);
else
printf("case #%d: false\n",i);

}
return 0;
}

