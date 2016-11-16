#include<stdio.h>
#include<math.h>
int main()
{
    float R1,P1,R2,P2,A,B;
    scanf("%f %f %f %f",&R1,&P1,&R2,&P2);
    A=R1*R2*cos(P1+P2),
    B=R1*R2*sin(P1+P2);

    if(-0.005<A && A<=0)
      printf("0.00");
    else
      printf("%.2f",A);

    if(-0.005<B && B<=0)
      printf("+0.00i\n");
    else if(B>0)
           printf("+%.2fi\n",B);
         else
           printf("-%.2fi\n",fabs(B));

    return 0;
}
