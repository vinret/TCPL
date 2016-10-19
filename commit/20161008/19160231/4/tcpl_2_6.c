#include<stdio.h>
int main()
{
unsigned x,y,z;
int n,p;
printf("x=");
scanf("%d\n",&x);
printf("y=");
scanf("%d\n",&y);
printf("n=");
scanf("%d\n",&n);
printf("p=");
scanf("%d\n",&p);

x=x&~(~(~0<<n)<<(p+1-n));
y=(y&~(~0<<n))<<(p+1-n);
z=x/y;
printf("%d\n",z);
return 0;
}

