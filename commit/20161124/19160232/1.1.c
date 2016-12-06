#include<stdio.h>
int GCD(int a,int b)
{
	int j;
	j=a%b;
	if(j==0)
	return b;
	if(j!=0)
	{
		a=b;
		b=j;
		GCD(a,b);
	}
}
int main()
{
	int a,b,i;
	scanf("%d%d",&a,&b);
	i=GCD(a,b);
	printf("a,b最大公约数为%d\n",i);
}
