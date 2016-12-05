#include<stdio.h>
int is_int_pal(int n)
{
    int a=0,b,m=n;
    while(n)
{
    b=n%10;
    a=a*10+b;
   n=n/10;
}
    if(a==m)   return ;
    else   return 0;
}
int main()
{
    int n;
    printf("请输入一个数：");
    scanf("%d",&n);
    printf("%d\n",is_int_pal(n));
    return 0;
}
