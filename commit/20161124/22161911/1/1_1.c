#include<stdio.h>
int GCD_recursive(int m, int n)
{
    int r;
    if(m<n)
    {
       r=m;
       m=n;
       n=r;
    }
    while(m%n!=0)
    {
          r=m%n;
          m=n;
          n=r;
     }
    return n;
}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",GCD_recursive(m,n));
    return 0;
}    
