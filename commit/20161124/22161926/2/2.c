#include<stdio.h>
int GCD_recursive(int m,int n)
{
    int a;
    if(m<n)
    {
       a=m;
       m=n;
       n=a;
    }
    if(m%n==0)
      return n;
    else
      return GCD_recursive(n,m%n);
}
int LCM(int m,int n)
{
    int b=GCD_recursive(m,n);
    int m1,n1,k;
    m1=m1/b;
    n1=n1/b;
    k=m1*n1*b;
    return k;
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d\n",LCM(m,n));
    return 0;
}
    

