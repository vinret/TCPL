#include<stdio.h>
 int main()
{
unsigned x=16,y;
 int n=2;
y=~0;
y=y<<n;
y=~y;
y=y&x;    //将x的右边n位提出

x=x>>n;
y=y<<(32-n);    //将那n位移到最左端
x=x|y;
printf("%d\n",x);
return 0;
}
