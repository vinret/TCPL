#include<stdio.h>
int GCD_recursive(int m, int n); 
int main()
{
	int m,n;
	printf("请输入m，n的值：");
	scanf("%d %d",&m,&n);
	printf("请输入m，n的最大公约数%d\n",GCD_recursive(m,n));
	return 0;
}
int GCD_recursive(int m, int n)
{
	int i=m%n;
	while(i>0)
	{
		m=n;
		n=i;
		i=m%n;
	}
	return n;
}
