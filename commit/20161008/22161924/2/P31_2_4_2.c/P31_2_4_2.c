#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x,y;
    scanf("%d%d%d%f",&a,&b,&c,&x);
  
    if (sqrt(fabs(x))!=(4*a)/(b*c)) y=sqrt(fabs(x));
    printf("%f\n",y);
   
    return 0;
}
