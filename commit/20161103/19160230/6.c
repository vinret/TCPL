#include<stdio.h>
int fac_bit_count(int n);
int main()
{
        int n,s;
        scanf("%d",&n);
	s=fac_bit_count(n);
 
        printf("%d!=%d",n,s);
        return 0;
}
int fac_bit_count(int n)
{
        int i,s=1;
        for(i=1;i<=n;i++)
                s=s*i;
        return s;
}

