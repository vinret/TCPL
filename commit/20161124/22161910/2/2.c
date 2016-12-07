#include<stdio.h>
int GCD_iterative(int m,int n)
{
     if(m%n==0)
     return n;
     else
     return GCD_iterative(n,m%n);
}
int LCM(int m,int n)
{
    int a;
    a=GCD_iterative(m,n);
    return (m*n)/a;
}
int main()
{
    int m,n;
    printf("input m n:\n");
    scanf("%d%d",&m,&n);
    LCM(m,n);
    printf("最小公倍数为：%d\n",LCM(m,n));
    return 0;
}
