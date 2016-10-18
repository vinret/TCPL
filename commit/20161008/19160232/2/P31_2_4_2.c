#include<stdio.h>
#include<math.h>
int main()
{
	int x,a,b,c,y,t;
	x=1;
	a=1;
	b=1;
	c=1;
	y=sqrt(fabs(x));
	t=(4*a)/(b*c);
	printf("%c\n",y!=t?'y':'n');
	return 0;
}
