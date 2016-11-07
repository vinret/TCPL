#include<stdio.h>
int fac_bit_count(int n);
int main()
{
    int n,sum=1;
    scanf("%d",&n);
    for(n;n>=1;n--)
        sum*=n;
    printf("%d\n",fac_bit_count(sum));
    return 0;
}
int fac_bit_count(int n)
{
    int k;
    for(k=0;n;k++)  n/=10;
    return k;
}
