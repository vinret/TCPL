#include<stdio.h>
int main()
{
   int F,C;
   printf("请输入一个华氏温度：\n");
   scanf("%d",&F);
   C=5*(F-32)/9;
   printf("Celsius=%d",C);
   return 0;
} 
