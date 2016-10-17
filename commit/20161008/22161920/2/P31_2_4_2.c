#include <stdio.h>
#include <math.h>
void main()
{
   double x,a,b,c,m,n;
   int y;
   printf("x=");
   scanf("%lf",&x);

   printf("a=");
   scanf("%lf",&a);

   printf("b=");
   scanf("%lf",&b);

   printf("c=");
   scanf("%lf",&c);

   m=sqrt(fabs(x));
   n=(4*a)/(b*c);
   y=(m!=n);

   if(y<1)
   printf("sqrt(fabs(x))=(4*a)/(b*c),左右相等\n");
   else
   printf("sqrt(fabs(x))!=(4*a)/(b*c),左右不等\n");
}
