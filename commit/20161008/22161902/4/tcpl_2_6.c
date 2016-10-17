#include <stdio.h>
unsigned setbits(unsigned short x,int p,int n,unsigned short y)
{
unsigned short a=y&~(~0<<n);
unsigned short b=a<<(p-n);
unsigned short c= ~(~((~0)<<n)<<(p-n));
unsigned short d=x&c;
x=b|d;
return x;

}
int main()
{
unsigned short x=89,y=8;
int p=4,n=2;
x=setbits(x,p,n,y);
printf("x=%d\n",x);
return 0;

}
