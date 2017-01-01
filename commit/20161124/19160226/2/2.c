#include<stdio.h>
int GCD_recursive(int m,int n)
{
    int k;
    if(m%n==0)
    return n;
    else
    return GCD_recursive(n,m%n);
}

int main()
{    int a,b,m,n;
    printf("Please input m,n\n");
    scanf("%d%d",&m,&n);
    a=GCD_recursive(m,n);
    b=(m*n)/a;
    printf("%d\n",b);
    return 0;
}

