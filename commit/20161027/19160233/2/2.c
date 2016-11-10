#include<stdio.h>
int main()
{
	int n,i=2;
	printf("请输入数字n(n>3)：\n");
	scanf("%d",&n);

		while(n<4)
		printf("请输入数字n(n>3)：\n");
		scanf("%d",&n);

		while(n%i==0||i>n/2)i++;
		if(i<=n/2)
			printf("%d是素数。\n",n);
		else
			printf("%d不是素数。\n",n);

	return 0;
}
