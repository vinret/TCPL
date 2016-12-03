#include<stdio.h>
int LCM(int,int);
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
    n=LCM(m,n);
    printf("%d",LCM(m,n));
    return 0;
}
int LCM(int m,int n)
{
    int c,s;
    s=m*n;
    while(m%n!=0)
    {
        c=m;
        m=n;
        n=c%n;
    }
    return s/n;
}
