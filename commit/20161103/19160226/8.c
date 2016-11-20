#include<stdio.h>
int fac_bit_count(int n)
{
    int j,k=1;
    int b=0;
    for(j=1;j<=n;j++)
    k = k*j;
    while (k>0)
    {
	k=k/10;
	b++;
    }
    return b;
}

int main()
{
    int n,b; 
    scanf("%d",&n);
    b=fac_bit_count(n);
    printf("%d\n",b);
    return 0;
}
