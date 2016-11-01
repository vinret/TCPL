#include <stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=9;a++)
	{
		printf("\n");
		for(b=a;b<=9;b++)
		{
			printf("%d*%d=%d\t",a,b,a*b);
		}
	}
	printf("\n");
	return 0;
}
