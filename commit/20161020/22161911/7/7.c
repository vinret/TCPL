#include<stdio.h>
int main()
{
    int a,b,c,x,y;
    printf("请输入一个三位正整数：");
    scanf("%d",&x);
    a=floor(x/100);
    b=floor((x-a*100)/10);
    c=x%10;
    y=c*100+b*10+a;
    printf("%d\n",y);
    return 0;
}

