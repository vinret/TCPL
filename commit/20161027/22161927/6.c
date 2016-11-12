#include <stdio.h>
#include <math.h>
 int main()
 {
 char a='i';
 float R1,P1,R2,P2,xb,sb;
 scanf("%f %f %f %f",&R1,&P1,&R2,&P2);
 sb=R1*R2*cos(P1+P2);
 if(R1*R2*sin(P1+P2)>0)
 {xb=R1*R2*sin(P1+P2);
 printf("%.2f+%.2f%c",sb,xb,a);}
 if(R1*R2*sin(P1+P2)<0)
 {xb=R1*R2*sin(P1+P2);
 printf("%.2f%.2f%c",sb,xb,a);}
 if(R1*R2*sin(P1+P2)==0)
 printf("%.2f",sb);
 printf("\n");
 return 0;
 }
