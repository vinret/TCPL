#include<stdio.h>
int fac_bit_count(int n)
{
    long long ans=n;
    while(--n)
    ans*=n;
    int count=0;
    while(ans)
    {
     ++count;
     ans/=10;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",fac_bit_count(n));
    return 0;
}
