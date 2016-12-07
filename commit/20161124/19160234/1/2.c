#include<stdio.h>
int GCD_iterative(int m, int n);  
int main()
{
	int m,n;
	printf("请输入m，n的值：");
	scanf("%d %d",&m,&n);
	printf("请输入m，n的最大公约数%d\n",GCD_iterative(m,n));
	return 0;
}
int GCD_iterative(int m, int n)
{
	int i=m%n;
	if(i>0)
	{
		m=n;
		n=i;
		i=m%n;
	    return i; 
	}
	else
	{
		return n;
	}
	
}
