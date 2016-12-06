#include<stdio.h>
#define row 3
#define col 4
int main()
{
	int matrixa[row][col],matrixb[col][row];
	int i,j;
	printf("输入该矩阵a中的元素，");
	printf("%d*%d:\n",row,col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&matrixa[i][j]);
		}
	}

for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		matrixb[j][i]=matrixa[i][j];
	}
}
printf("转置矩阵b,");
printf("%d*%d:\n",col,row);
for(i=0;i<col;i++)
{
	for(j=0;j<row;j++)
	{
		printf("%8d",matrixb[i][j]);
	}
	printf("\n");
}
return 0;
}
