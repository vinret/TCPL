#include<stdio.h>

#include<math.h>

int main()

{

         float R1,P1,R2,P2,C;

         double A,B;

         scanf("%f %f %f %f",&R1,&P1,&R2,&P2);

         A=R1*cos(P1)*R2*cos(P2)-R1*sin(P1)*R2*sin(P2);

         B=R1*sin(P1)*R2*cos(P2)+R1*cos(P1)*R2*sin(P2);

         C=fabs(B);

         if(B>=0)

         {

                  if(B==0)

                  {

                          if(A==0)

                                   printf("0");

                          else

                                   printf("%.2f\n",A);

                  }

                  else

                  {

                          if(A==0)

                                   printf("%.2fi\n",B);

                          else

                                   printf("%.2f+%.2fi\n",A,B);

                  }

         }

         else

                  printf("%.2f-%.2fi\n",A,C);

         return 0;

}
