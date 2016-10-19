#include<stdio.h>
int main()
{
unsigned short x,a,b;
short int n;
printf("x=");
scanf("%d",&x);
printf("n=");
scanf("%d",&n);
a=x>>n;
b=x<<(16-n);
x=a|b;
printf("=%d\n",x);
return 0;
}

