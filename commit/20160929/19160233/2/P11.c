#include<stdio.h>
#define PI 3.14
int main()
{
	int radius;
	double area,circumference;

	printf("input radius:\n");
	scanf("%d\n",&radius);

	area = PI* radius * radius;
	circumference = 2 *PI *radius;

	printf("area = %f\ncircumference = %f\n",area,circumference);
	return 0;
}
