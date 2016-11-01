#include<stdio.h>
#include<math.h>
int main()
{
    int c,d;
    double a,b;
    scanf("%lf%lf%d",&a,&b,&c);
    d=pow(a,b);
    printf("%d\n",d%c);
    return 0;
}

    
