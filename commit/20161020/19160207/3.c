#include<stdio.h>
int main(void)
{

   int C;//摄氏温度
   int F;//华氏温度

   printf("Please input F: \n");
   scanf("%d",&F);
   C = 5 * (F - 32)/9;
   printf("Celsius = %d\n",C);

   return 0;
}
