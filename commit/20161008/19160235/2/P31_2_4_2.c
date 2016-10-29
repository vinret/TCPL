#include <stdio.h>
#include <math.h>
int main()
{
 double x,a,b,c;
 printf("please input x,a,b,c:\n");
 scanf("%lf%lf%lf%lf",&x,&a,&b,&c);
 printf("%d\n",sqrt(fabs(x))!=(4*a)/(b*c));
 return 0;
}
