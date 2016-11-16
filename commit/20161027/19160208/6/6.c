#include<stdio.h>
#include<math.h>
int main()
{
    float r1,p1,r2,p2,a,b;
    printf("请输入R1,P1,R2,P2的值\n");
    scanf("%f %f %f %f",&r1,&p1,&r2,&p2);

    a=r1*r2*cos(p1)*cos(p2)-r1*r2*sin(p1)*sin(p2);
    b=r1*r2*cos(p1)*sin(p2)+r1*r2*sin(p1)*cos(p2);
   
    if (b>0) 
       printf("%.2f%.2fi\n",a,b);
    else
       printf("%.2f%.2fi\n",a,b);
    return 0;
}
