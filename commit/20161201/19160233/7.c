#include<stdio.h>
int main()
{
	int array1[3][3],array2[3][3],i,j,k=0;
	for(i=0;i<3;i++)
	{	
		for(j=0;j<3;j++)
		{
			array1[i][j]=++k;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			array2[i][j]=array1[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d*%d=%d",array1[i][j],array2[i][j],(array1[i][j]*array2[i][j]));
		}
		printf("\n");
	}
	return 0;
}
