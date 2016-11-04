#include<stdio.h>
#include<math.h>
int main()
{
    float r1,p1,r2,p2;
    float a,b;
    printf("Please input r1,p1,r2,p2.");
    scanf("%f %f %f %f",&r1,&p1,&r2,&p2);
    a=r1*r2*cos(p1+p2);
    b=r1*r2*sin(p1+p2);
    if(b<0)
    printf("%.2f-.%.2fi",a,fabs(b));
    else
    printf("%.2f+.%.2fi",a,b);
    return 0;
}

