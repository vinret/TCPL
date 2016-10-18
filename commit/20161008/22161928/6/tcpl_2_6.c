#include<stdio.h>
int main()
{
    unsigned int x,y;
    unsigned int a,b;
    int p,n;
    scanf("%u%u%d%d",&x,&y,&p,&n);
    a=~(~0<<n)<<(p-n+1);
    x=x&~a;
    b=~(~0<<n)<<(p-n+1);
    y=y&b;
    x=x|y;
    printf("%u",x);
  
    return 0;
}
