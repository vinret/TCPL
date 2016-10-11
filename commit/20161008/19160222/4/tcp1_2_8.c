#include<stdio.h>
int main()
{
unsigned x,a,b;
int n;

printf("x=");
scanf("%o",&x);
printf("n=");
scanf("%d",&n);

a=x>>n;
b=x<<(8-n);
x=a|b;
printf("%o\n",x);
return 0;
}
