#include <stdio.h>
unsigned invert(unsigned x,int p,int n)
{
return x^(~(~0<<n)<<(p+1-n));
}
int main()
{
   unsigned int x=60;
   printf("%d\n",invert(x,2,3));
}
