#include<stdio.h>
int main()
{
unsigned x;
int n;

printf("x=");
scanf("%o",&x);
printf("n=");
scanf("%d",&n);

x=x^~(~0<<n);
printf("%o\n",x);
return 0;
}
