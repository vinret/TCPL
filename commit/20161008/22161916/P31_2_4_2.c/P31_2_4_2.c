#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x;
    a=1,b=2,c=3,x=1;
    printf("%d\n",sqrt(fabs(x))-4*a/(b*c)>=1e-8);
    return 0;
}
  
