#include <stdio.h>
int main()
{ 
unsigned x,a,b;
int p,n;
 printf("x=");
 scanf("%d",&x);
 printf("p=");
 scanf("%d",&p);
 printf("n=");
 scanf("%d",&n);
 a=x&~(~0<<n)<<p;
 b=x|~(~0<<n)<<p;
 x=~a&b;
 printf("invert(x,p,n)=%d\n",x);
 return 0;
}


