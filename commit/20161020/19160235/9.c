#include <stdio.h>
int main()
{
	int a=5; int b=4;
    a=a^ b;
	b=b^ a;
	a=a^ b;
	printf("%d %d",a,b);
	return 0;
}

