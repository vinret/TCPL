#include<stdio.h>
void Matrix_mul(int (*A)[3],int (*B)[2],int (*C)[2])
{
     int i,j,k;
     for(i=0;i<2;i++)
	for(j=0;j<2;j++)
        {
           C[i][j]=0;
           for(k=0;k<3;k++)
               C[i][j]+=A[i][k]*B[k][j];
        }
}
int main()
{   
    int i,j,k;
    int A[2][3],B[3][2],C[2][2];
    printf("请输入矩阵A:2*3\n");
    for(i=0;i<2;++i)
	for(j=0;j<3;++j)
	    scanf("%d",&A[i][j]);
    printf("请输入矩阵B:3*2\n");
    for(i=0;i<3;++i)
	for(j=0;j<2;++j)
	    scanf("%d",&B[i][j]);     
    Matrix_mul(A,B,C);
    printf("结果:\n");
    for(i=0;i<2;i++)
    {
	for(j=0;j<2;j++)
            printf("%d   ",C[i][j]);
        printf("\n");
    }
    return 0;
}
