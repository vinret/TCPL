#include<stdio.h>
#include<math.h>
int main()
{
    float R1,P1,R2,P2,a,b;
    scanf("%f%f%f%f",&R1,&P1,&R2,&P2);
    a=R1*R2*cos(P1+P2);
    b=R1*R2*sin(P1+P2);
    if(fabs(a)<0.01)
    a=0;
    
    if(fabs(b)<0.01)
    b=0;
   
    if(b<0)
    printf("%.2f-%.2fi",a,fabs(b));
   
    else
    printf("%.2f+%.2fi",a,b);
    
    printf("\n"); 
    return 0;
}
