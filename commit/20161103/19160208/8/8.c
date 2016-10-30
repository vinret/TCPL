#include <stdio.h>
int fac_bit_count(int n);
int main()
{
    int n;
    scanf("%d",&n);
    n=fac_bit_count(n);
    printf("%d\n",n);
}
int fac_bit_count(int n)
{
    int a=1,b=1;
    for(a=1,b=1;b<=n;b++)
        a=a*b;
    int count;
    for(count=1;a/10!=0;count++)
        a=a/10;
    return count;
}
