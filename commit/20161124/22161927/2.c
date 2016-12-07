#include<stdio.h>
int gcd(int m,int n)
{
    int k;
    if (n>m)
    {
        k=m;
        m=n;
        n=k;
    }
    k=m%n;
    if(k==0)
        return n;
    else
        gcd(n,k);
}

lcm(int m,int n)
{
return n/gcd(n,m)*m;
}

main()
{
    int m,n;
    scanf("%d,%d",&m,&n);
    printf("%d\n",n/gcd(n,m)*m);
}
