#include<stdio.h>
unsigned setbits(unsigned x,int p,int n,unsigned y)

{
    x=x&~(~(~0<<n)<<(p-n+1));
    y=y<<(p-n+1)&(~(~0<<n));
    x=x|y;

    return x;
}

int main()
{   unsigned     x,y;
    int          p,n;
    scanf("%u%d%d%u",&x,&p,&n,&y);
    printf("%u",setbits(x,p,n,y));
    return 0;
}
