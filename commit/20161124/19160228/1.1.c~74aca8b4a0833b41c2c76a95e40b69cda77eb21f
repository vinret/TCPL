#include<stdio.h>
int GCD_recursive(int,int);
int main()
{
    int m,n,x;
    scanf("%d%d",&m,&n);
    if(m<n)
    {
        x=m;
        m=n;
        n=x;
    }
    n=GCD_interative(m,n);
    printf("%d",n);
    return 0;
}
int GCD_interative(int m,int n)
{
    int c;
    while(m%n!=0)
    {
        c=m;
        m=n;
        n=c%n;
    }
    return n;
}
