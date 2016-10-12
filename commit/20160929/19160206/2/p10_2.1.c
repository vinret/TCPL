#include<stdio.h>
#define PI 3.141592626535897932384626433
int main()
{ 

  int radius=10086;
  double area,circumference;
  
  area=PI*radius*radius;
  circumference=2*PI*radius;
  printf("area=%f\n",area);
  printf("circumference=%f\n",circumference);

  return 0;
} 
