#include<stdio.h>
int main()
{
	int i,j,row,col;
	printf("输入行数与列数:");
	scanf("%d%d",&row,&col);
	int a[row][col],b[col][row],c[row][col];
	printf("输入%d*%d矩阵:\n",row,col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("输入%d*%d矩阵:\n",col,row);
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=a[i][j]*b[j][i];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%8d",c[i][j]);
		}
		printf("\n");
		
	}
	printf("\n");
} 
