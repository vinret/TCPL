
#include <stdio.h>
int main()
{
	long a,b,c,d,n;
	scanf("%ld%ld%ld",&a,&b,&c);
	d=a;
	for(n=1;n<b;n++)
		d=d*a;
	printf("%d\n",d);
	printf("%d\n",d%c);
	return 0;
}


