#include<stdio.h>
int main()
{
    int a,b,c,d;
    int Sum;
    float Average;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    Sum=a+b+c+d;
    Average=(a+b+c+d)/4;
    printf("Sum=%d,Average=%1d\n",a+b+c+d,(a+b+c+d)/4);
    return 0;
}
