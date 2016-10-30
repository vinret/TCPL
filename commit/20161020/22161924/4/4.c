#include <stdio.h>
int main()
{
    int a,b,c,d,m;
    float n;
    
    scanf("%d %d %d %d",&a,&b,&c,&d);
    m=a+b+c+d;
    n=1.0*m/4;
    printf("Sum=%d,Average=%.1f\n",m,n);
    return 0;
}
