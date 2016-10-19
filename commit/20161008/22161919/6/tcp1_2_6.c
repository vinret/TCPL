#include<stdio.h>
unsigned setbits(unsigned x ,int p ,int n, unsigned y)
{
  return x &~(~(~0<<n) <<(p+1-n)) |
        (y &  ~(~0<<n) <<(p+1-n);
}
int main()
{
  unsigned x,y;
  int p,n,result;
  printf("x=,y=,p=,n=");
  scanf("%d%d%u%u",&x,y,p,n);
  result=setbits(x,p,n,y);
  printf("result=setbits(x,p,n,y)=%d\n",result);
return 0
}

