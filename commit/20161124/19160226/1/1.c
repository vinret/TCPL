#include<stdio.h>
int GCD_iterative(int m,int n)
{
    int k;
    while(n!=0)
    {
    k=m%n;
    m=n;
    n=k;
    }
    return m;
}

int main()
{
    int a,m,n;
    printf("Please input m,n\n");
    scanf("%d%d",&m,&n);
    a=GCD_iterative(m,n);
    printf("%d\n",a);
}

