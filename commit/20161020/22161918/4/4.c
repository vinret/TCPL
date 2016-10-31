#include<stdio.h>
int main()
{
int a,b,c,d,Sum;
float Average;
printf("请输入四个整数");
scanf("%d%d%d%d",&a,&b,&c,&d);
Sum=a+b+c+d;
Average=Sum/4.0;
printf("Sum=%d,Average=%2.1f",Sum,Average);
return 0;
}
