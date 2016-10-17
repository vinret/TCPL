#include<stdio.h>
#include<math.h>
int main()
{
    float x,a,b,c;
	x=1;
	a=3;
	b=3;
	c=4;
	printf("%d\n",sqrt(abs(x))-4*a/(b*c)>=1e-8);
    return 0;
}
