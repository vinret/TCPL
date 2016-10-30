#include<stdio.h>
int main()
{
	int n,i;
	printf("请输入n(n>3):");
	scanf("%d",&n);
	if (n%2==1)
	{
		for (i=3;i<n-1;i+=2)
			if (n%i==0)
				break;
			if (i<n)
				printf("该数不是素数\n");
			else
				printf("该数是素数\n");
	}
	else
         printf("该数不是素数\n");

	return 0;
}
