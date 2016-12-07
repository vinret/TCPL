#include<stdio.h>
int GCD_iterative(int m,int n)
{
    int a;
    if(m<n)
    {
       m=m^n;
       n=n^m;
       m=m^n;
    }
    a=m%n;
    while(a)
    {
       m=n;
       n=a;
       a=m%n;
    }
    return n;
}
int main()
{
    int m,n,a;
    scanf("%d%d",&m,&n);
    a=GCD_iterative(m,n);
    printf("%d\n",a);
    return 0;
}
