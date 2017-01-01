#include<stdio.h>
#define ROW 3
#define COL 4
int main()
{
		int matrixA[ROW][COL],matrixB[COL][ROW];
		int i,j;
		printf("输入原矩阵A中的元素,3*4:\n");
		for(i=0;i<ROW;i++)
				for(j=0;j<COL;j++)
						scanf("%d",&matrixA[i][j]);
		printf("输入的矩阵A为:\n");
		for(i=0;i<ROW;i++)
		{
				for(j=0;j<COL;j++)
						printf("%d ",matrixA[i][j]);
		        printf("\n");
		}
		for(i=0;i<ROW;i++)
				for(j=0;j<COL;j++)
						matrixB[j][i]=matrixA[i][j];
		printf("转置矩阵Ｂ:\n");
		for(j=0;j<COL;j++)
		{
				for(i=0;i<ROW;i++)
						printf("%d ",matrixB[j][i]);
		        printf("\n");
		}
		return 0;
}
