#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    printf("请输入依次a,b,c的值：");
    scanf("%d%d%d%d",&a,&b,&c);
    for(i=1;i<=b;i++)
        a*=a;
    d=a%c;
    printf("%d\n",d);
    return 0;
}

