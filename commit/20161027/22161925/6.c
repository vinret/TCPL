#include<stdio.h>
#include<math.h>
int main()
{
   float A,B,R1,P1,R2,P2;
   
   scanf("%f %f %f %f",&R1,&P1,&R2,&P2);

   A=R1*R2*cos(P1+P2);
   B=R1*R2*sin(P1+P2);
	
   if(B<0)
    printf("%.2f-%.2fi\n",A,fabs(B));
   else
    printf("%.2f+%.2fi\n",A,B);
   
   return 0;
}

