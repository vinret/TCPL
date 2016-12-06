#include<stdio.h>
int GCD_iterative(int m,int n)
{
    if(m%n==0) return n;
    else return GCD_iterative(n,m%n);
}
int main()
{
    int m,n,i;
    printf("please intput two number(the first is bigger):");
    scanf("%d%d",&m,&n);
    i=GCD_iterative(m,n);
    printf("%d\n",i);
    return 0;
}
        
