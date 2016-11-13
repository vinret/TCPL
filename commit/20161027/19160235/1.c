#include<stdio.h>
int main(void)
{
	int b=1;
	while(b<=9)
	{
		int a=1;
		while(a<=b)
		{
			printf("%d*%d=%d\t",a,b,a*b);
			a++;
		}
		printf("\n");
		b++;
	}
}
