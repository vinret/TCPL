#include<stdio.h>
int main()
{
int a,b;
printf("请输入整数a=");
scanf("%d",&a);
printf("请输入整数b=");
scanf("%d",&b);
a=a^b;
b=b^a;
a=a^b;
printf("a=%d,b=%d\n",a,b);
return 0;
}
