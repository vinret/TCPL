#include<stdio.h>

int GCD_iterative(int m,int n)
{
int a;
if(m<n)
{
a=m;
m=n;
n=a;
}
if(n!=0)
{
m=m%n;
return  GCD_iterative(m,n);
}
return m;
}
  

int main()
{
int m,n;
scanf("%d %d",&m,&n);
m=GCD_iterative(m,n);
if(m==1)
printf("iang shu hu zhi\n");
else
printf("%d\n",m);
return 0;
}
