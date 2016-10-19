#include <stdio.h>
unsigned rightrot(unsigned short x,int n)
{
unsigned short a=x>>n;
unsigned short b=x<<(16-n);
x=a+b;
return x;

}
int main()
{
unsigned short x=1;
int n=1;
x=rightrot(x,n);
printf("%u\n",x);
return 0;

}
