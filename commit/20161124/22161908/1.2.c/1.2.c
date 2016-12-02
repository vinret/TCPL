#include<stdio.h>
int GCD_iterative(int m,int n);

int GCD_iterative(int m,int n)
{
    int a;
    if(m<n)
    {
      a=m%n;
      m=n;
      n=a;
    }
    if(n==0)
    return m;
    else
    return GCD_iterative(n,m%n);
}
int main()
{
    int a,n,m;
    scanf("%d%d",&n,&m);
    if(m<n)
    {
      a=m;
      m=n;
      n=a;
    }
     printf("%d\n",GCD_iterative(n,m));
     return 0;
}
