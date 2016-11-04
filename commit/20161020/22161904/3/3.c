#include<stdio.h>
int main()
{
    int C,F;
    scanf("输入一个华氏温度：%d",&F);
    C=5*(F-32)/9;
    printf("Celsius=%d",C);
    return 0;
}
