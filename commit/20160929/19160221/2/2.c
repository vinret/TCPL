#include <stdio.h>
#define PI 3.14
int main()
{
   int radius=5;
   double area,circumference;
   
   area=PI*radius*radius;
   circumference=2*PI*radius;
   
   printf("area=%g\n",area);
   printf("circumference=%g\n",circumference);

   return 0;
}

