#include <stdio.h>
#include <math.h>
int main()
{
	double R1,P1,R2,P2;
	double a,b,c,d,e,f;
	scanf("%lf%lf%lf%lf",&R1,&P1,&R2,&P2);
	a=R1*cos(P1);
	b=R1*sin(P1);
	c=R2*cos(P2);
	d=R2*sin(P2);
	e=a*c-b*d;
	f=a*d+b*c;
	if(f>0)
		printf("%.2f+%.2fi\n",e,f);
	else
		printf("%.2f%.2fi\n",e,f);
	return 0;
}
