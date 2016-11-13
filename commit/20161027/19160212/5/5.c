#include<stdio.h>
int main()
{
int A,Pa=0,Da,B,Pb=0,Db;
scanf("%d%d%d%d",&A,&Da,&B,&Db);

do
{
if(A%10==Da)
{Pa=Pa*10+Da;A=A/10;}
else
A=A/10;
}while(A/10!=0);

do
{
if(B%10==Db)
{Pb=Pb*10+Db;B=B/10;}
else
B=B/10;
}while(B/10!=0);

printf("%d\n",Pa+Pb);
return 0;
}
