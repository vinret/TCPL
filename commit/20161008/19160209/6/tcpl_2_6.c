#include<stdio.h>
int main()
{
unsigned a,b,x,y;
int p,n;
x=12,y=8,p=2,n=3;
a=x&~(~(~0<<n)<<(p+1-n));
b=y&~(~0<<n)<<(p+1-n);
x=a|b;
printf("%d\n",x);
return 0;
}
