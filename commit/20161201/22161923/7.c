#include<stdio.h>
#define m 2
#define n 3
#define p 2
void Matrix_mul(int (*A)[n],int (*B)[p],int (*C)[p])
{
     int i,j,k;
     for(i=0;i<m;i++)
     for(j=0;j<p;j++)
  {
     C[i][j]=0;
     for(k=0;k<n;k++)
     C[i][j]+=A[i][k]*B[k][j];
     }
}
int main()
{
    int i,j,k;
    int A[m][n],B[n][p],C[m][p];
    printf("Please input the matrixA:%d*%d\n",m,n);
    for(i=0;i<m;++i)
    for(j=0;j<n;++j)
    scanf("%d",&A[i][j]);
    
Matrix_mul(A,B,C);
printf("The result:\n");

for(j=0;j<p;++j)
{
    for(j=0;j<p;j++)
    printf("%d   ",C[i][j]);
    printf("\n");
}
    return 0;
}
