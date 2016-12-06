#include<stdio.h>
int main()
{
	int r1,l1,r2,l2;
	scanf("%d %d %d %d",&r1,&l1,&r2,&l2);
	if(l1==r2)
	{
		int matrixA[r1][l1],matrixB[r2][l2];
		int matrixC[r1][l2];
		int i,j,k,temp;
		for(i=0;i<r1;i++)
		{
			for(j=0;j<l1;j++)
			{
				scanf("%d",&matrixA[i][j]);
			}
		}
		for(i=0;i<r2;i++)
		{
			for(j=0;j<l2;j++)
			{
				scanf("%d",&matrixB[i][j]);
			}
		}
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<l2;j++)
			{
				temp=0;
				for(k=0;k<l1;k++)
				{
					temp=temp+matrixA[i][k]*matrixB[k][j];
				}
				matrixC[i][j]=temp;
				printf("%8d",matrixC[i][j]);
			}
			printf("\n");
		}
	}
	else
		printf("error\n");
	return 0;
}

	


