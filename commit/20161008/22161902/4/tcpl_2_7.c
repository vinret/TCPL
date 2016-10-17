#include <stdio.h>
unsigned invert(unsigned short x,int p,int n)
{
unsigned short a=~0<<(16-p);
unsigned short b=a>>(16-n);
unsigned short c=b<<(p-n);
x=c^x;
return x;
}

int main()
{
unsigned short x=1;
int p=1,n=1;
x=invert(x,p,n);
printf("x=%d\n",x);
return 0;
}






