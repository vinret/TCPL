/* setbits:set n bits of x at position p with bits of y */
#include<stdio.h>
int main()
{
 unsigned x,y;
 int p,n;

 printf("x=");
 scanf("%o",&x);
 printf("y=");
 scanf("%o",&y);
 printf("p=");
 scanf("%d",&p);
 printf("n=");
 scanf("%d",&n);

 x=(~(~(~0<<n)<<(p+1-n))&x)|((~(~0<<n)&y)<<(p+1-n));

 printf("%o\n",x);

 return 0;
}
