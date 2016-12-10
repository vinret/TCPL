#include<stdio.h>
#define MAX 100
void matrix(int A[][MAX],int B[][MAX],int C[][MAX],int n,int m,int s);
void main()
{
	int n,m,s,i,j,A[MAX][MAX]={0},B[MAX][MAX]={0},C[MAX][MAX]={0};
	printf("Please input row and column of the two matrix:\n");
	scanf("%d%d%d",&n,&m,&s);
	printf("Please input the elements of the two matrix:\n");
	printf("The first one:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&A[i][j]);
		}
    }

	printf("The next one:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<s;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}

	matrix(A,B,C,n,m,s);

	printf("The result is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<s;j++)
		{
		   printf("%-5d ",C[i][j]);
		}
		printf("\n");
	}
	
}

void matrix(int A[][MAX],int B[][MAX],int C[][MAX],int n,int m,int s)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<s;j++)
		{
			for(k=0;k<m;k++)
			{
			   C[i][j]+=A[i][k]*B[k][i];
			}
		}
	}
}
