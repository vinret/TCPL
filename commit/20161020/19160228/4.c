#include <stdio.h>
int main()
{
	int a,b,c,d,Sum;
	double Average;
	printf("input a b c d:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	Sum=(a+b+c+d);
	Average=Sum/4.0;
	printf("Sum=%d\nAverage=%.1f\n",Sum,Average);
	return 0;
}
