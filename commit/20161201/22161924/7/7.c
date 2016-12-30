#include<stdio.h>
int main()
{
    int matrixA[20][20],matrixB[20][20],matrixC[20][20]={0};
    int i,j,k;
    int m,n,p;
    scanf("%d %d %d",&m,&n,&p);
    printf("请输入矩阵A:\n");
    for(i=0;i<m;i++)
       for(j=0;j<n;j++)
          scanf("%d",&matrixA[i][j]);
    printf("请输入矩阵B:\n");
    for(i=0;i<n;i++)
        for(j=0;j<p;j++)
           for(k=0;k<n;k++)
              matrixC[i][j]=matrixA[i][k]*matrixB[k][j]+matrixC[i][j];
    printf("这两个矩阵相乘得到的矩阵是:\n");
    for(i=0;i<m;i++)
    {
       for(j=0;j<p;j++)
          printf("%8d\n",matrixC[i][j]);
    }
    return 0;
}
