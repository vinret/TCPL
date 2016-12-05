#include<stdio.h>
int GCD_iterative(int m,int n);//循环
int main()
{
	int a,m,n;
	scanf("%d %d",&m,&n);
	if(m<n)
	{
		a=m;
		m=n;
		n=a;
	}
	printf("The greatest common divisor of %d and %d is %d\n",m,n,GCD_iterative(m,n));
	return 0;
}
int GCD_iterative(int m,int n)//循环
{
	int t;
	do
	{
		t=m%n;
		m=n;
		n=t;
	}while(t!=0);
	return m;
}
