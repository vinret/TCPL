#include<stdio.h>
#define PI 3.14
int main()
{
	int radius=10;
	double circumference,area;
	area=PI*radius*radius;
	circumference=PI*radius*2;
	printf("area=%f\n",area);
	printf("circumference=%f\n",circumference);
	return 0;
}

