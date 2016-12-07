#include<stdio.h>
int GCD_iterative(int m,int n)
{
	int temp;
	if(m<n)
	{
		temp=m;
		m=n;
		n=temp;
	}
	if(m%n==0)
		return n;
	else
		return GCD_iterative(n,m%n);
}

int LCM(int m,int n)
{
	return m*n/GCD_iterative(m,n);
}
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	//printf("%d\n",GCD_iterative(m,n));
	printf("%d\n",LCM(m,n));
	return 0;
}

