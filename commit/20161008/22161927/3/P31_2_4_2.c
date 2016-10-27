#include <stdio.h>
#include <math.h>
int main()
{
    int a=2,b=3,c=4;
    double x=9.0;
    printf("%d\n",sqrt(fabs(x))-4*a/(b*c)>=1e-9);
    return 0;
}

     
