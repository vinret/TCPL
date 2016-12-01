#include<stdio.h>
int GCD_recursive(int m,int n);
int LCM(int m,int n);

int GCD_recursive(int m,int n)
{
    int a;
    while(m%n!=0)
    {
       a=n;
       n=m%n;
       m=a;
    }
    return n;
}

int LCM(int m,int n)
{
    int a,b;
    a=m/GCD_recursive(m,n);
    b=n/GCD_recursive(m,n);
    return a*b*GCD_recursive(m,n);
}

int main()
{
    int m,n;
    printf("请输入两个整数:");
    scanf("%d %d",&m,&n);
    printf("这两个整数的最小公倍数为%d\n",LCM(m,n));
    return 0;
}
