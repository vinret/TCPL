#include<stdio.h>

int fac_bit_count(int n);
int main()
{
int a=0,n;
scanf("%d",&n);
a=fac_bit_count (n);
printf("%d\n",a);
return 0;
}
int fac_bit_count(int n)
{
int i,c=1,a=0;

 for(i=1;i<=n;i++)
{c*=i;}
while(c!=0)
{c/=10;
a=a+1;}
return a;
}
