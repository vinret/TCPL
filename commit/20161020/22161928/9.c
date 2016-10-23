#include<stdio.h>
int main()
{
    int a,b;
    printf("请输入a= ");
    scanf("%d",&a);
    printf("请输出b= ");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
    
