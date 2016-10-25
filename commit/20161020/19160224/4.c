#include<stdio.h>
int main()
{
	int a,b,c,d;
   scanf("%d %d %d %d", &a, &b, &c, &d);
   int Sum;
   Sum = a + b + c + d;
    double Average;
    Average = Sum / 4.0;
	printf("Sum = %d; Average = %.1f\n", Sum, Average);
	return 0;
}
