#include <stdio.h>
unsigned invert(unsigned short x,int p,int n)
{
unsigned short k=~0<<(16-p);
unsigned short t=k>>(16-n);
unsigned short f=t<<(p-n);
x=f^x;
return x;
}

int main()
{
unsigned short x=2;
int p=1,n=1;
x=invert(x,p,n);
printf("x=%d\n",x);
return 0;
}


