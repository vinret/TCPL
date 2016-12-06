#include<stdio.h>
int GCD_recursive(int m,int n);
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
      return GCD_recursive(m,m%n);   
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d\n",GCD_recursive(m,n));
    return 0;
}
