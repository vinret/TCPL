#include<stdio.h>
int is_pow2(int n)
{
    if(0==n)
       return -1;
    if(n&(n-1))
       return -1;
    else
       return 0;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    m=is_pow2(n);
    if(m)
       printf("%d is not the power of 2\n",n);
    else
       printf("%d is the power of 2\n",n);
    return 0;
}
