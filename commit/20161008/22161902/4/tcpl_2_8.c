#include <stdio.h>
unsigned rightrot(unsigned short x,int n)
{
unsigned short a=x>>n;
unsigned short b=x<<(16-n);
x=a+b;
return x;

}
int main()
{
unsigned short x;
scanf("%d",&x);
int n;
scanf("%d",&n);
x=rightrot(x,n);
printf("x=%d",x);
return 0;

}
