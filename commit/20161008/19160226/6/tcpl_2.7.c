#include<stdio.h>

unsigned invert(unsigned x,int p,int n)
{
    return (x & ~((~(~0 << n)) << p) |((~x) & ((~(~0 << n)) << p)) );
}

int main()
{
    unsigned x,y;
    int p,n;
    x=123;
    p=3;
    n=2;
    y=invert(x,p,n);
    printf("%d\n",y);
    return 0;
}


