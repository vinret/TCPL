#include<stdio.h>
int main()
{
unsigned x;
int p,n;
printf("x=");
scanf("%d",&x);
printf("p=");
scanf("%d",&p);
printf("n=");
scanf("%d",&n);
x=x^(~(~0<<n))<<(p+n-1);
printf("=%d\n",x);
}
