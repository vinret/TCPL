#include<stdio.h>
int main()
{
	int a[100][100]={0};
	int i,j,n=0;
	printf("请输入杨辉三角的行数：");
	scanf("%d",&n);
	for(i=0;i<n;i++)
			a[i][0]=1;
	for(i=1;i<n;i++)
			for(j=1;j<=i;j++)
					a[i][j]=a[i-1][j-1]+a[i-1][j];
	for(i=0;i<n;i++){
			for(j=0;j<=i;j++)
					printf("%5d",a[i][j]);
			printf("\n");
	}
	return 0;
}
