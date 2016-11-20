#include<stdio.h>
int fac_bit_count(int n);
int main()
{
	int n,j,i,k;
	scanf("%d",&n);
	for(j=n-1;j>1;j--)
		n*=j;
	n=fac_bit_count(n);
	printf("%d",n);
	return 0;
}
int fac_bit_count(int n)
{
	int i,k=0;
	for(i=1;i<n;i*=10)
		k+=1;
	return k;
}

