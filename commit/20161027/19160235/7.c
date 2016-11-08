#include <stdio.h>
int main()
{
	long  a,b,c,d=1;
	scanf("%Ld%Ld%Ld",&a,&b,&c);
	a=a%c;
	while (b)
	{
		if (b&1)
			d=(d*a)%c;
		a=(a*a)%c;
		b=b/2;
	}
	printf("%Ld",d);
	return 0;
}

