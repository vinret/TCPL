#include<stdio.h>
int GCD_recursive(int m,int n)
{
    int a;   
    if(m<n)
    {
       m=m^n;
       n=n^m;
       m=m^n;
    }
    a=m%n;
    if(a)
       return GCD_recursive(n,a);
    else
       return n;
}
int main()
{
    int m,n,a;
    scanf("%d%d",&m,&n);
    a=GCD_recursive(m,n);
    printf("%d\n",a);
    return 0;
}
