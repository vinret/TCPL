#include<stdio.h>
#include<math.h>
int fac_bit_count(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fac_bit_count(n));
	return 0;
}

int fac_bit_count(int n)
{
	double bit=0;
	for(;n>=1;n--)
	   bit=bit+log10(n);
	return (int)(bit+1);
}

	


