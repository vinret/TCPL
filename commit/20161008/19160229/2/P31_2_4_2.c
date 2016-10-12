#include<stdio.h>
#include<math.h>
int main()
{
	float x,a,b,c;
	int m;
	x=4;
	a=2;
	b=2;
	c=1;
	m = sqrt(fabs(x)) != (4*a)/(b*c);
	printf("%d\n",m);
	return 0;
}
