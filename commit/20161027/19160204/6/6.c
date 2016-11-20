nclude<stdio.h>
#include<math.h>
int main()
{
        double r1,r2,p1,p2;
        scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2);
        double r,p;
        p=r1*r2*sin(p1+p2);
        r=r1*r2*cos(p1+p2);
        if (r<0&&r>-0.005)
                printf("0.00");
        else printf("%.2lf",r);

        if(p<0&&p>-0.005)
                printf("+0.00i\n");
        else if(p>0)
                printf("+%.2lfi\n",p);
        else
                printf("%.2lfi\n",p);
        return 0;
}

