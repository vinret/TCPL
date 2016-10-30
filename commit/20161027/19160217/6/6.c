#include<stdio.h>
#include<math.h>
int main()
     {
       double R1,P1,R2,P2,a,b;
       scanf("%lf %lf %lf %lf",&R1,&P1,&R2,&P2);
       a=R1*R2*cos(P1+P2);
       b=R1*R2*sin(P1+P2);
       if(a>-0.005&&a<0)
          printf("0.00");
       else
          printf("%.2lf",a);
       if(b>-0.005&&b<0)
          printf("+0.00i");
       else if(b<=0.005)
               printf("%.2lfi",b);
            else
               printf("+%.2lfi",b);
     return 0;
}
           
