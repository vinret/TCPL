#include<stdio.h>
int main()
{
    int a,b,c,d;
    int Sum;
    float Average;

    printf("请输入四个整数: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    printf("Sum =%d, Average =%.f\n", a+b+c+d,(a+b+c+d)/4.0);
    return 0;
}   
