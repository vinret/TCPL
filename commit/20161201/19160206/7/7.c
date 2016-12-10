#define MAX 10
#include<stdio.h>
void MatrixMutiply(int m,int n,int p,long lMatrix1[MAX][MAX],
long lMatrix2[MAX][MAX],long lMatrixResult[MAX][MAX])
{
int i,j,k;
long lSum;
  for(i=0;i<m;i++)
   for(j=0;j<p;j++)
{
  lSum=0;
   for(k=0;k<n;k++)
  lSum+=lMatrix1[i][k]*lMatrix2[k][j];
  lMatrixResult[i][j]=lSum;
}
}
main()
{
long lMatrix1[MAX][MAX],lMatrix2[MAX][MAX];
long lMatrixResult[MAX][MAX],lTemp;
int i,j,m,n,p;
//输入两个矩阵行数和列数
 scanf("%d",&m);
 scanf("%d",&n);
 scanf("%d",&p);
//1
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
{
   scanf("%ld",&lTemp);
   lMatrix1[i][j]=lTemp;
}
//2
  printf("\nPlease elements of Matrix2(%d*%d):\n",n,p);
   for(i=0;i<n;i++)
    for(j=0;j<p;j++)
{
   scanf("%ld",&lTemp);
   lMatrix2[i][j]=lTemp;
}
 MatrixMutiply(m,n,p,lMatrix1,lMatrix2,lMatrixResult);
 printf("\nResult matrix: \n");
 for(i=0;i<m;i++)
{
  for(j=0;j<p;j++)
   printf("%ld ",lMatrixResult[i][j]);
  printf("\n");
}
return 0;
}
