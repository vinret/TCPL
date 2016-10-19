#include<stdio.h>
#define PI 3.14
int main()
{
   int radius=10;
   double area, circumference;

   area = PI* radius*radius;
   circumference=2*PI*radius;
   printf("area=%f,circumference=%f\n",area,circumference);
  
   return 0;
}
   
