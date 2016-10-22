#include<stdio.h>
int main()
{
    int x,y;
    printf("请输入整数X的值");
    scanf("%d",&x);
    y=x*x*x+2*x*x+3*x+1;
    printf("y=%d\n",y);
    return 0;
}

