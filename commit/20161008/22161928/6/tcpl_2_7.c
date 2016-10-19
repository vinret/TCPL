#include<stdio.h>
unsigned invert(unsigned x,int p,int n)
{
return x ^(~(~0<<n)<<(p+n-1));
}
int main()
{
    unsigned x;
    int    p,n;
    scanf("%u%d%d",&x,&p,&n);
    printf("%u",invert(x,p,n));
  
    return 0;
}
