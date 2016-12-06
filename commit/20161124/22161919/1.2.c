#include<stdio.h>
int GCD_iterative(int m,int n);

int GCD_iterative(int m,int n)
{
    int a;
    if(m%n==0) return n;
    else
    {
       a=n;
       n=m%n;
       m=a;
       return GCD_iterative(m,n);
    }
}

int main()
{
    int m,n;
    printf("请输入两个整数:");
    scanf("%d %d",&m,&n);
    printf("这两个整数的最大公约数为 %d\n",GCD_iterative(m,n));
    return 0;
}

