#include<stdio.h>
int main()
{
int p,n;
unsigned x,y,a,b;
printf("x=");
scanf("%d",&x);
printf("y=");
scanf("%d",&y);
printf("p=");
scanf("%d",&p);
printf("n=");
scanf("%d",&n);
a=x&(~(~(~0<<n)<<(p+1-n)));
b=(y&~(~0<<n))<<(p+1-n);
x=a|b;
printf("=%d\n",x);
return 0;
}




