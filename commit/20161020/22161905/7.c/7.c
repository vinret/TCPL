#include<stdio.h>
int main()
{
    int a,b,c,d;
    
    printf("请输入一个正三位数：\n");
    scanf("%3d",&a);

    b=a/100;
    c=(a-b*100)/10;
    d=a%10;

    printf("%d的逆序是%d%d%d\n",a,d,c,b);
    return 0;
}
