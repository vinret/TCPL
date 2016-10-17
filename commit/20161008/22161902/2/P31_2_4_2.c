#include <stdio.h>
#include <math.h>
int main()
{

double a,b,c,x,n;
int p;
scanf("%lf,%lf,%lf,%lf",&a,&b,&c,&x);
n=fabs(x);
p=sqrt(n)-4*a/(b*c)>=1e-8;
printf("%d\n",p);
return 0;
}
