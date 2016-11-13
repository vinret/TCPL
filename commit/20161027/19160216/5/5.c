#include<stdio.h>
#include <math.h>
int main()
{
 int s,a,b,x,y,i,t,A,B,q,p,n,m,z,S,v,u;
scanf("%d%d%d%d",&a,&b,&x,&y);
i=0;
for(a=a;;a=a/10)
{
if(a%10==b)
{ i=i+1;}
if(a==0)break;
}
t=0;
for(x=x;;x=x/10)
{
if(x%10==y)
{ t=t+1;}
if(x==0)break;
}
s=0;
for(n=i;;n--)
{z=pow(10,n-1);
 s=s+z;
if(n==0)break;}
A=s*b;
v=0;
for(m=t;;m--)
{u=pow(10,m-1);
 v=v+u;
if(m==0)break;}
B=v*y;

S=A+B;
printf("%d\n",S);
return 0;
}













