#include <stdio.h>
int GCD_iterative(int m, int n);
int main()
{
	int m,n,a;
	printf("请输入m和n的值：");
	scanf("%d%d",&m,&n);
	a=GCD_iterative(m,n);
	printf("m和n的最大公约数为：%d\n",a);
	return 0;
}
int GCD_iterative(int m, int n)
{
	int r1;
	r1=m%n;
	if(r1==0)
		return n;
	else
		return  GCD_iterative(n,r1);
}

