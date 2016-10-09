#include <stdio.h>
void main()
{
short int a=2;
float PI=3.14;
double radius,area,circumference;

printf("radius=");
scanf("%lf",&radius);
area=PI*radius*radius;
circumference=a*PI*radius;
printf("area=%lf\n",area);
printf("circumference=%lf\n",circumference);
}
