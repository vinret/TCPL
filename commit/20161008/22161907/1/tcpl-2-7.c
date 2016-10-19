#include<stdio.h>
unsigned invert (unsigned x, int p, int n)
{
   return x &(~(~0<<n)<<(p+1-n));
}
int main()
{
   unsigned int x;
   int p,n;
   scanf("%u,%d,%d",&x,&p,&n);
   a =invert(x,p,n);
   printf("%u\n", a);
   return 0;
}
