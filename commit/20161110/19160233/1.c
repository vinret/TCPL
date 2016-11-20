#include<stdio.h>
int main()
{
	int i,j,a[10][10];
	printf("1\n");
	a[1][0]=1;
	a[1][1]=1;
	printf("1 1\n");
	for(i=2;i<10;i++)
	{	a[i][0]=1;
		printf("1 ");
		for(j=1;j<=i;j++)
		{
			if(j<i)
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
				printf("%d ",a[i][j]);
			}
			else
			{
				a[i][j]=1;
				printf("1\n");
			}
		}
	}
	return 0;
}
