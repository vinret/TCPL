#include<stdio.h>
#include<string.h>
int main ()
{
	int T,i,j,k;
	printf("输入测试的组数T:");
	scanf("%d",&T);
	char str[T][3];
	for(j=1;j<=T;j++)
	{
		for(i=1;i<=3;i++)
		{
			scanf("%d",&str[j][i]);
		}
	}
	for(k=1;k<=T;k++)
	{
		if(str[k][1]+str[k][2]>str[k][3])
		printf("Case #%d: true\n",k);
		else
		printf("Case #%d: false\n",k);
	}
}
