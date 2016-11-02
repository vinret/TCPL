#include <stdio.h>
int main()
{
	int n,i;
	printf("请输入n(n>3):");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d不是素数\n",n);
	}
	else
	{
		for(i=3;i<=n-1;i+=2)
		{
			if(n%i==0)
			break;
		}
		if(i<n)
			printf("%d不是素数\n",n);
		else
			printf("%d是素数\n",n);
	}
	return 0;
}
