#include <stdio.h>
unsigned setbits(unsigned x,unsigned y,int p,int n);

#include <stdio.h>
unsigned setbits(unsigned x,unsigned y,int p,int n)
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
    unsigned x,y;
    int p,n;
    x=1;
    y=3;
    p=1;
    n=1;
    x=setbits(x,y,p,n);
    printf("%u\n",x);
    return 0;
}

