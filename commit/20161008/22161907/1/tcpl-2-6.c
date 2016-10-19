#include<stdio.h>
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
   return ( x&~((~0<<n)<<(p+1-n)))|(y&~(~0<<n)<<(p+1-n);
}
int main()
{
   unsigned int x,y;
   int p,n,a;
   scanf("%d,%d,%d,%d\n",&x,&p,&n,&y);
   a =setbits(x,p,n,y);
   printf("%d\n", a);
   return 0;
}
