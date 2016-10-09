#include<stdio.h>
#define PI 3.14
int main()
{

 int radius;
 
 printf("Please enter the radius:\n");
 scanf("%d",&radius);

 double area,circumference; 

 area=PI*radius*radius;
 circumference=2*PI*radius; 
 printf("area=%f\n", area);
 printf("circumference=%f\n", circumference);

 return 0;
}





















