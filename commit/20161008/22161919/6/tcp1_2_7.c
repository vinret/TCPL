#include<stdio.h>
unsigned invert(unsigned x,int p,int n);
{
  return x^(~(~0<<n)<<(p+1-n));
}
int main()
{
    unsigned x;
    int p,n,result;
    printf("x=,p=,n=");
    scanf("%d%u%u",&x,p,n);
    result=invert(x,p,n);
    printf("result=invert(x,p,n)=%d\n",result);
  return 0;
}
