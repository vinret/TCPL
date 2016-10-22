#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a;
    char b[233];
    printf("请输入一个十进制数：");
    scanf("%d",&a);
    itoa(a,b,2);
    printf("二进制：%s\n",b);
    printf("八进制：%o\n",a);
    printf("十六进制：%x\n",a);
    return 0;
}

