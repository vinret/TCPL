#include<stdio.h>
int main()
{
int a,b,k;
printf("九九乘法表如下：.\n");
for(a=1;a<=9;a++)
{
for(b=1;b<=a;b++)
{
k=a*b;
printf("%dX%d=%-3d",a,b,k);
}
printf("\n");
}
}

