#include<stdio.h>
int main()
{
    int a,b[32],c=0,d;
    printf("请输入一个十进制整数：");
    scanf("%d",&a);
    d=a;
    while (a>0)
    {  
       b[c]=a%2;
       c=c+1;
       a=a/2;
    }
    printf("二进制表示为：\n");
    for(c--;c>=0;c--)printf("%d",b[c]);

    printf("\n八进制表示为：%o\n",d);
    printf("十六进制表示为：%x\n",d);
    return 0;
}
    
