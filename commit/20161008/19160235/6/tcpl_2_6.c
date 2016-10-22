#include<stdio.h>
int main()
{
unsigned long x,y;
int p,n;
unsigned z;
printf("x=");
scanf("%d",& x);
printf("y=");
scanf("%d",& y);
printf("p=");
scanf("%d",& p);
printf("n=");
scanf("%d",& n);
z=(x&~(~(~(0<<n))<<(p+1-n)))|((y&~(~0<<n))<<(p+1-n));
printf("%d\n",z);
return 0;
}
