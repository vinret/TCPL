#include<stdio.h>
int main()
{
   int c,f;
   printf("please input a number as Fahrenheit degree:");
   scanf("%d",&f);
   c=(f-32)*5/9;
   printf("Celsius =%d\n",c);
   return 0;
}
