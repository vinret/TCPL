#include<stdio.h>
int main()
{
int p,n;
unsigned x;
p=2,n=3,x=60;
x=x^~(~0<<n)<<p;
printf("%d\n",x);
return 0;
}
