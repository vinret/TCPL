#include<stdio.h>
int main()
{
        int m,n,p;
        int matrixA[100][100],matrixB[100][100],matrixC[100][100]={0};

        scanf("%d %d %d",&m,&n,&p);
        int i,j,k;
        printf("请输入矩阵A：\n");
        for(i=0;i<m;i++)
                for(j=0;j<n;j++)
                        scanf("%d",&matrixA[i][j]);
        printf("请输入矩阵B：\n");
        for(i=0;i<n;i++)
                for(j=0;j<p;j++)
                        scanf("%d",&matrixB[i][j]);

        for(i=0;i<m;i++)
                for(j=0;j<p;j++)
                        for(k=0;k<n;k++)
                                matrixC[i][j]=matrixA[i][k]*matrixB[k][j]+matrixC[i][j];
        printf("这两个矩阵相乘得到矩阵：\n");
        for(i=0;i<m;i++){
                for(j=0;j<p;j++)
                        printf("%8d",matrixC[i][j]);
                printf("\n");
        }
        return 0;
}

