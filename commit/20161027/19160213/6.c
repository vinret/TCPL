#include<stdio.h>
#include<math.h>
int main()
{
double R1,R2,P1,P2;
double R,P;
scanf("%lf %lf %lf %lf",&R1,&P1,&R2,&P2);
P=R1*R2*sin(P1+P2);
R=R1*R2*cos(P1+P2);

if(R<0&&R>-0.005)
printf("0.00");
else
printf("%.2lf",R);

if (P<0&&P>-0.005)
printf("+0.00i\n");
else if(P>0)
printf("+%.2lfi\n",P);
else 
printf("%.2lfi\n",P);
return 0;
}
