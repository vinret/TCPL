#include<stdio.h>
int main()
{
    int i=0,n,a[32];
    printf("请输入一个你要换的十进制数.\n");
    scanf("%d",&n);
    while(n>0)
    {
       a[i]=n%2;
       i=i+1;
       n=n/2;
    }
    printf("十进制转化为二进制为: \n");
    for(i--;i>=0;i--);
        printf("%d",a[i]); 
    printf("\n"); 
    printf("十进制转化为八进制为：%o,十进制转化为十六进制: %x");
    return 0;
}

    


