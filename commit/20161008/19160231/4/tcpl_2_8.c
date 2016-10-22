#include<stdio.h>
int main()
{
unsigned x,a,b;
int n;
printf("x=");
scanf("%d\n",&x);
printf("n=");
scanf("%d\n",&n);

a=x>>n;
b=x<<(8-n);
x=a|b;
printf("%o\n",x);
return 0;
}
