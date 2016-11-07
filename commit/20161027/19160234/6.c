#include <stdio.h>
#include <math.h>
int main()
{
double R1,P1,R2,P2,a,b,c,d;
scanf("%lf %lf %lf %lf",&R1,&P1,&R2,&P2);
a=R1*cos(P1);
b=R1*sin(P1);
c=R2*cos(P2);
d=R2*sin(P2);
double A=a*c-b*d,B=a*d+b*c;
if(fabs(A)<0.01)
   A=0;
if(fabs(B)<0.01)
   B=0;
if(B>=0)
   printf("%.2f+%.2fi",A,B);
else
   printf("%.2f-%.2fi",A,fabs(B));
return 0;
}

