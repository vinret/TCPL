#include<stdio.h>
int main()
{
int a,b;
 printf("请输入两个十进制数,中间以空格隔开");
 scanf("%d%d",&a,&b);
  a=a^b;
  b=a^b;
  a=a^b;
printf("%d,%d",a,b);
return 0;
}
