#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int x;
	x=pow(a,b);
	x=x%c;
	printf("%d\n",x);
	return 0;
}
