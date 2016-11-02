#include<stdio.h>
#include<math.h>
int main()
{float R1,P1,a,b,R2,P2,c,d,A,B;
 scanf("%f%f%f%f",&R1,&P1,&R2,&P2);
 a=R1*(cos(P1));
 b=R1*(sin(P1));
 c=R2*(cos(P2));
 d=R2*(sin(P2));
 A=a*c-b*d;
 B=a*d+b*c;
if(B>0)
 printf("%.2f+%.2fi\n",A,B);
else if(B==0)
 printf("%.2f\n",A);
else
B=fabs(B);
printf("%.2f-%.2fi\n",A,B);
return 0;
}

