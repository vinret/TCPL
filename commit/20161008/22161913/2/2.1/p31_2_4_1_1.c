#include<stdio.h>
int main()
{
    int x,y;
    printf("请输入整数x的值");
    scanf("%d",&x);
    y=x*x*x+2*x*x+3*x;
    printf("y=%d\n",y);
    return 0;
}

