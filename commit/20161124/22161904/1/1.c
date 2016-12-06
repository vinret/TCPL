#include<stdio.h>
int GCD_recursive(int m,int n)
{
    int r;
    if(m%n==0)
       return n;
    else
       while(m%n!=0)
       {
             r=m%n;
             m=n;
             n=r;
       }
       return r;
}
int main()
{
    int m,n,r;
    printf("please input two number(the first one is bigger):");
    scanf("%d%d",&m,&n);
    r=GCD_recursive(m,n);
    printf("%d\n",r);
    return 0;
}
