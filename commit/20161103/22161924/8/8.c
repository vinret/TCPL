#include<stdio.h>
int fac_bit_count(int n)
{
    int i;
    for(i=0;n;i++)
      n=n/10;
    return i;
    
}
int main()
{
    int m=1,n;
    scanf("%d",&n);
    for(n;n>=1;n--)
    {
      m=m*n;
    }
    printf("%d\n",fac_bit_count(m));
    return 0;
}
