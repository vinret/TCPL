#include<stdio.h>
#include<math.h>
int main()
{
    double R1,P1,R2,P2,r,p,S,T;
    scanf("%lf %lf %lf %lf",&R1,&P1,&R2,&P2);

    r = R1*R2;
    p = P1+P2;
    S = r*cos(p);
    T = r*sin(p);

    if(S > 1e-6)
       printf("%.2f", fabs(S));
    else
       printf("-%.2f", fabs(S));


    if(T > 1e-6)
       printf("+%.2f", fabs(T));
    else
       printf("-%.2f", fabs(T));
return 0;
}
