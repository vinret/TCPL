#include<stdio.h>
int fac_bit_count(int n);

int main()
{
    int n,sum=1,m;
    scanf("%d",&n);
    for( ;n>=1;n--)
       sum*=n;
    m=fac_bit_count(sum); 
    printf("%d\n",m);
}
int fac_bit_count(int n)
{
    int i;
    for(i=0;n;i++) 
       n/=10;
    return i;
}

    
