#include<stdio.h>
int main()
{
		int r,s,t;
		int m,j,i;
		printf("请输入矩阵A的行列和矩阵B的列数: ");
		scanf("%d %d %d",&r,&s,&t);
		int a[r][s];
		int b[s][t];
		int c[r][t];

		printf("请输入矩阵A:\n");
		for(i=0;i<r;i++)
				for(j=0;j<s;j++)
						scanf("%d",&a[i][j]);
		printf("请输入矩阵B:\n");
		for(i=0;i<s;i++)
				for(j=0;j<t;j++)
						scanf("%d",&b[i][j]);

/*		printf("矩阵Ａ为:\n");
		for(i=0;i<r;i++)
		{
				for(j=0;j<s;j++)
						printf("%d ",a[i][j]);
				printf("\n");
		}
		printf("矩阵Ｂ为：\n");
		for(i=0;i<s;i++)
		{
				for(j=0;j<t;j++)
						printf("%d ",b[i][j]);
				printf("\n");
		}*/

//矩阵相乘						
		for(i=0;i<r;i++)
		{
				for(j=0;j<t;j++)
				{
						c[i][j]=0;
						for(m=0;m<s;m++)
								c[i][j]+=a[i][m]*b[m][j];
				}
		}

		printf("矩阵Ａ,Ｂ相乘得矩阵Ｃ:\n");
		for(i=0;i<r;i++)
		{
				for(j=0;j<t;j++)
						printf("%d ",c[i][j]);
		        printf("\n");
		}
		return 0;
}
