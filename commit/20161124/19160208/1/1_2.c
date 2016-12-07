#include<stdio.h>
#include<stdlib.h>
int GCD_iterative(int m,int n)
{
	if(m%n==0)
		return n;
		else return GCD_iterative(n,m%n);
}
int main()
{
	int m,n,temp,r;
	scanf("%d %d",&m,&n);
	if(m<n)
	{
		temp=m;
		m=n;
		n=temp;
	}
	r=GCD_iterative(m,n);
    printf("%d\n",r);
}
