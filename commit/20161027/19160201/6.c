#include<stdio.h>
#include <math.h>
int main()
{
  double R1,P1,R2,P2,A,B;
  printf("Please input R1,P1,R2,P2:\n");
  scanf("%lf %lf %lf %lf",&R1,&P1,&R2,&P2);
  A=R1*R2*cos(P1+P2);
  B=R1*R2*sin(P1+P2);
  if(fabs(A)<0.01)
    A=0;
  if(fabs(B)<0.01)
    B=0;
  if(B>0)
    printf("%.2lf+%.2lfi\n",A,B);
  else
    printf("%.2lf-%.2lfi\n",A,fabs(B));
  return 0;

 }






