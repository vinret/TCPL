#include<stdio.h>
#include<math.h>
int main()
{
   float R1,P1,R2,P2;
   scanf("%f %f %f %f",&R1,&P1,&R2,&P2);

   if (R1*R2*sin(P1+P2)>=0)
   printf("%.2f+%.2fi\n",R1*R2*cos(P1+P2),R1*R2*sin(P1+P2));
   else
   printf("%.2f-%.2fi\n",R1*R2*cos(P1+P2),fabs(R1*R2*sin(P1+P2)));
return 0;
}
