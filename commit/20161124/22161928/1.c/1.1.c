#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,r,p,q,a;
    scanf("%d%d",&m,&n);
    p=m;
    q=n;
    if (m<n)
    r=m;
    m=n;
    n=r;
    
    while(m%n!=0)
    {
       a=m%n;
       m=n;
       n=a;
    }
    
    printf("GCD<%d,%d>=%d\n",p,q,n);
    return 0;
}
