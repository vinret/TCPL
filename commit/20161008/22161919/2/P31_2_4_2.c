#include<stdio.h>
#include<math.h>
void main()
{
     double x,a,b,c;
     int y;
     printf("x=,a=,b=,c=");
     scanf("%lf,%lf,%lf,%lf",&x,&a,&b,&c);
     y=(sqrt(fabs(x))!= (4*a)/(b*c));
     
     if(y<1)
     printf("左右相等\n");
     else
     printf("左右不等\n");
}
