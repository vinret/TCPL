#include<stdio.h>
int gcd(int m,int n);
int main()
{
    int m,n;
    scanf("%d,%d",&m,&n);
    printf("The result is:%d.\n",gcd(m,n));
    return 0;
}
int gcd(int m,int n)
{
    int k;
    if(n>m)
    {
        k=m;
        m=n;
        n=k;
    }
    k=m%n;
    if(k==0)
        return n;
    else
        return gcd(n,k);
}
