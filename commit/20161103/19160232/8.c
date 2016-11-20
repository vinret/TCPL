#include<stdio.h>
int fac_bit_count(int n)
{
	int m=1;
	for(;n>1;n--)
	{
		m*=n;
	}
	return m;
}
int main()
{
	int n,i=1,k;
	printf("请输入任意正整数n:");
	scanf("%d",&n);
	fac_bit_count(n);
	k=fac_bit_count(n);
	while(k/10!=0)
	{
		i++;
		k=k/10;
	}
	printf("%d\n",i);
}
