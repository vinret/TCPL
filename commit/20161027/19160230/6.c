#include<stdio.h>
#include<math.h>
int main()
{
float r1,p1,r2,p2;
scanf("%f%f%f%f",&r1,&p1,&r2,&p2);
if (r1*r2*sin(p1+p2)>=0)
printf("%.2f+%.2fi\n",r1*r2*cos(p1+p2),r1*r2*sin(p1+p2));
else
printf("%.2f-%.2fi\n",r1*r2*cos(p1+p2),fabs(r1*r2*sin(p1+p2)));
return 0;
}
