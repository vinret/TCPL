#include <stdio.h>
int GCD_iterative(int m,int n);
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	GCD_iterative(m,n);
	printf("最大公约数为：%d",GCD_iterative(m,n));
}
 int GCD_iterative(int m,int n)
 {
	int r;
	r=m%n;
	if(r==0)
		return n;
	else
		return GCD_iterative(n,r);
 }

