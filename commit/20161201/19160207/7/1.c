#include<stdio.h>
#define ROW 3
#define COL 4
int main()
{
		int a[ROW][COL],b[ROW][COL],c[ROW][COL];
		int i,j;

		printf("请输入矩阵A,3*4:\n");
		for(i=0;i<ROW;i++)
				for(j=0;j<COL;j++)
						scanf("%d",&a[i][j]);
		printf("矩阵Ａ为:\n");
		for(i=0;i<ROW;i++)
		{
				for(j=0;j<COL;j++)
						printf("%d ",a[i][j]);
				printf("\n");
		}

		printf("请输入矩阵B,3*4:\n");
		for(i=0;i<ROW;i++)
				for(j=0;j<COL;j++)
						scanf("%d",&b[i][j]);
		printf("矩阵Ｂ为:\n");
		for(i=0;i<ROW;i++)
		{
				for(j=0;j<COL;j++)
						printf("%d ",b[i][j]);
				printf("\n");
		}
//矩阵相乘
        for(i=0;i<ROW;i++)
				for(j=0;j<COL;j++)
						c[i][j]=a[i][j]*b[i][j];
		printf("A,B矩阵相乘为：\n");
		for(i=0;i<ROW;i++)
		{
				for(j=0;j<COL;j++)
						printf("%d ",c[i][j]);
				printf("\n");
		}
		return 0;
}
