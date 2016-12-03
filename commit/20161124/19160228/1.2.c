#include<stdio.h>
int GCD_interative(int,int);
int GCD_interative(int m,int n)
{
    int c;
    if(m%n==0)
        return n;
    else
    {
         c=m;
         m=n;
         n=c%n;
         return GCD_interative(m,n);
    }

}
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
    GCD_interative(m,n);
    printf("%d",GCD_interative(m,n));
    return 0;
}
