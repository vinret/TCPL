#include<stdio.h>
#include<math.h>
int main()
{
	long int a, b, c, j;
	scanf("%ld%ld%ld", &a, &b, &c);
	j = a^b % c;
	printf("%ld", j);
	return 0;
}
