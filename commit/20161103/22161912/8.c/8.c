#include<stdio.h>
int fac_bit_count(int n)
{
    long int m;
    int i=0;
    for(m=1;n>=1;n--)
       m*=n;
    while(m)
    {
       m/=10;
       i++;
    }
    return i;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",fac_bit_count(n));
    return 0;
}
