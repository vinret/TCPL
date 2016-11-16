#include<stdio.h>
int fac_bit_count(int n)
{
    int sum=1;
    for(;n>=1;n--)
        sum*=n;
    int i;
    for(i=0;sum!=0;i++)
        sum/=10;
    return i;
}
int main()
{
    int fac,n;
    scanf("%d",&n);
    fac=fac_bit_count(n);
    printf("%d\n",fac);
    return 0;
}
    

