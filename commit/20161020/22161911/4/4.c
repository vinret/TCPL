#include<stdio.h>
int main()
{
    int a,b,c,d,x;
    float y;
    printf("请输入四个整数：");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    x=a+b+c+d;
    y=1.0*x/4;
    printf("Sum=%d,Average=%.1f\n",x,y);
    return 0;
}

