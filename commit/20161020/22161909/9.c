#include <stdio.h>
int main()
{
	int a,b;
	
	printf("a=  ");
	scanf("%d",&a);

	printf("b=  ");
	scanf("%d",&b);

	a=a^b;
	b=a^b;
	a=a^b;

	printf("Exchange!\na=  %d\nb=  %d\n",a,b);

	return 0;
}

