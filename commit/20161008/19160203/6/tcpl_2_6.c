#include <stdio.h>
int main()
{
unsigned int x,y,a,b;
int p,n;
printf("x=");
scanf("%d",&x);
printf("p=");
scanf("%d",&p);
printf("n=");
scanf("%d",&n);
printf("y=");
scanf("%d",&y);
a=x&~(~(~0<<n)<<(p+1-n));
b=y&~(~(0<<n))<<(p+1-n);
x=a|b;
printf("setbits(x,p,n,y)=%d",x);
return 0;
}
