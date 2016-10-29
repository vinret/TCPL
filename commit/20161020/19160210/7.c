#include<stdio.h>
int main()
{
int a,b,c,d;
 printf("请输入一个三位数");
 scanf("%d",&a);
  b=a/100;
  d=a%10;
  c=((a-b*100)-d)/10;
 printf("%d%d%d",d,c,b);
return 0;
}
