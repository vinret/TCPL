#include<stdio.h>
int main()
{
unsigned long x,y;
int p,n;
int z;
printf("x=");
scanf("%ld",& x);
printf("y=");
scanf("%ld",& y);
printf("p=");
scanf("%d",& p);
printf("n=");
scanf("%d",& n);
z=(x&~(~(~(0<<n))<<(p+1-n)))|((y&~(~0<<n))<<(p+1-n));
printf("%d\n",z);
return 0;
}

