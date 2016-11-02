#include<stdio.h>
int main()
{
	int n,i;
	i=0;
	printf("输入一个正整数n(n<=1000):");
	scanf("%d",&n);
	do
	{
		if(n%2==0)
		{
			n=n/2;
		}
		else
		{
			n=(3*n+1)/2;
		}
		i++;
	}while(n>=2);
	printf("步数i=%d\n",i);
	return 0;	
} 
