#include<stdio.h>
int main()
{
   float float1,float2;
   int int1;
   char char1;

   printf("输入在一行中顺序给出浮点数1，整数，字符，浮点数2，其间以1个空格分隔\n");
   scanf("%f %d %c %f",&float1,&int1,&char1,&float2);
   printf("%c  %d  %.2f  %.2f\n",char1,int1,float1,float2);
   return 0;
}
