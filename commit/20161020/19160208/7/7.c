#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f;
    printf("请输入一个三位整数：");
    scanf("%d",&a);
    b=a%10;
    c=a%100;
    d=c-b;
    e=a-c;
    f=b*100+d+e/100;
    printf("%d\n",f);
}
