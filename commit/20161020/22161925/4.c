#include<stdio.h>
int main()
{
    int a,b,c,d,x;
    float y;
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    
    x=a+b+c+d;
    y=(a+b+c+d)/4;

    printf("Sum = %d,Average = %.1f\n",x,y);

    return 0;
}
