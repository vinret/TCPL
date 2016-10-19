#include<stdio.h>
int main()
{
    unsigned int x,y;
    int p,n;
    scanf("%u%u%d%d",&x,&y,&p,&n);
    x=x&~(~(~0<<n)<<(p-n+1));
    y=y&~(~(~0<<n)<<(p-n+1));
    x=x|y;
    printf("%u",x);
    return 0;
}
~                   
