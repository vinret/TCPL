#include<stdio.h>
int GCD_iterative(int m, int n)
{
    if(0==m%n)
       return n;
    else
        return GCD_iterative(m,m%n);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",GCD_iterative(a,b));
    return 0;
}

