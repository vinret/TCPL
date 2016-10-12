#include<stdio.h>
void main()
{
   double x,y;
   printf("x=");
   scanf("%lf",&x);
   y=((x+2)*x+3)*x+1;
   printf("y=((x+2)*x+3)*x+1=%lf\n",y);
}
