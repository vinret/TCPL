#include<stdio.h>
int fac_bit_count(int n);
int main()
{
	int n,s,a=1;
	scanf("%d",&n);
	s=fac_bit_count(n);
	while(s/10>0)
	{
		s=s/10;
		a++;
	}
	printf("%d",a);
	return 0;
}
int fac_bit_count(int n)
{
	int i,s=1;
	for(i=1;i<=n;i++)
		s=s*i;
	return s;
}
