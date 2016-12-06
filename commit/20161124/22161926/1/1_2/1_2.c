#include<stdio.h>
int GCD_iterative(int m,int n);
int GCD_iterative(int m,int n)
{
    int a,b;
    if(m<n)
    {
      a=m;
      m=n;
      n=a;
    }
    while(m%n!=0)
    {
      b=n;
      n=m%n;
      m=b;
    }
    return n;
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d\n",GCD_iterative(m,n));
    return 0;
}
      
