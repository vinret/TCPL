#include<stdio.h>
int main(void)
{

   int a,b,c,d;
   int Sum;
   float Average;
 
   scanf("%d %d %d %d",&a,&b,&c,&d);
   Sum = a + b + c + d;
   Average = Sum/4.0;
   printf("Sum = %d;Averagez = %1.1f\n",Sum,Average);
   return 0;
}
