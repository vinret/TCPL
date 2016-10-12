#include<stdio.h>
/*invert: inverts the n bits of x that begin at position p */
unsigned invert(unsigned x, int p, int n)
{
   return x ^ (~(~0 << n) << (p+1-n));
}
int main()
{
   unsigned x;
   int p,n,result;
   printf("x=");
   scanf("%d",&x);
   printf("p=");
   scanf("%u",&p);
   printf("n=");
   scanf("%u",&n);
   result=invert(x, p, n);
   printf("result=invert(x, p, n)=%d\n",result);
return 0;
}
