#include<stdio.h>
int main()
{ 
    int a,b;
    printf("请输入两个整数（中间以空格隔开）：");
    scanf("%d %d",&a,&b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("%d,%d\n",a,b);
    return 0;
}
