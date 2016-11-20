#include<stdio.h>
int fac_bit_count(int n)
{
    int i;
    for (i=0;n;i++)
        n/=10;
    return i;
}
int main()
{
    int n,fac=1;
    scanf("%d",&n);
    for(;n>=1;n--)
       fac*=n;
    printf("%d\n",fac_bit_count(fac));
    return 0;
}
