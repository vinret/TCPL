#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j,m,n,d,e;
		printf("请输入4个数：");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
			printf("%5d",a[i][j]);
			
		}
		printf("\n");
	}
    printf("请输入4个数：");
		for(m=0;m<2;m++)
		{
			for(n=0;n<2;n++)
			{
				scanf("%d",&b[m][n]);
				printf("%5d",b[m][n]);
				
			}
			printf("\n");
		}
	c[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0];
    c[0][1]=a[0][0]*b[0][1]+a[0][1]*b[1][1];
	c[1][0]=a[1][0]*b[0][0]+a[1][1]*b[1][0];
	c[1][1]=a[1][0]*b[0][1]+a[1][1]*b[1][1];
	printf("乘积为：\n");
			for(d=0;d<2;d++)
			{
				for(e=0;e<2;e++)
				{
					printf("%5d",c[d][e]);
				}
				printf("\n");
			}
				return 0;
}

B
B
B
A
A
A
A
A
A

