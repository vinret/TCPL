#include<stdio.h>
int main(void)
{
   int a,b,c,d,e;

   printf("Please input a number:\n");
   scanf("%d",&a);
   b=a/100;   //百位数字
   c=(a-b*100)/10;  //十位数字
   d=a-b*100-c*10;   //个位数字
   e=d*100+c*10+b;   //新数
   printf("%d\n",e);
   return 0;
}
