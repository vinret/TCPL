#include<stdio.h>
#include <math.h>
int main() 
{float   P1,R1,P2,R2,a,b,c,d,x,y;
scanf("%f%f%f%f",&R1,&P1,&R2,&P2);
a=R1*(cos(P1));
b=R1*(sin(P1));
c=R2*(cos(P2));
d=R2*(sin(P2));
x=a*c-b*d;
y=a*d+b*c;
if (y>0)
printf("%.2f+%.2fi\n",x,y);
else if (y==0)
printf ("%.2f",x);
else if (y<0)
y=fabs(y);
printf("%.2f-|%.2f|i",x,y);
return 0;
}

