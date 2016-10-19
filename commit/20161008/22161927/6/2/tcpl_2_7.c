#include <stdio.h>
unsigned invert(unsigned x,int p,int n)
{
return x^(~(~0<<n)<<(p-1));
}
int main()
{
    unsigned x;
    int p;
    int n;
    x=127;
    p=5;
    n=3;
    x= x^(~(~0<<n)<<(p-1));
    printf ("%d\n",x);
    return 0;
}

