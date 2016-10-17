#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double y,x,a,b,c;
    scanf("%lf%lf%lf%lf",&x,&a,&b,&c);
    y=fabs(sqrt((double)fabs(x))-(4*a)/(b*c));
    printf("%d\n",y>=pow(10,-8));
    return 0;
}
