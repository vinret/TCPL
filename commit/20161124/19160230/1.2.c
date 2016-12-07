#include<stdio.h>
int GCD_iterative(int m, int n); 
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	m=GCD_iterative(m,n);
	printf("%d",m);
	return 0;
}
int GCD_iterative(int m, int n)
{
	int t;
	t=m%n;
	m=n;
	n=t;
	if(t==0)
		return m;
	else
		return GCD_iterative(m,n);
 } 
