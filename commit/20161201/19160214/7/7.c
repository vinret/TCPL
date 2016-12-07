#include<stdio.h>
#define ROW 3
#define COL 4
int main()
{
    int matrixA[ROW][COL],matrixB[ROW][COL],matrixC[ROW][COL];
    int i,j;
    printf("请输入矩阵A中的元素：3*4\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        scanf("%d",&matrixA[i][j]);
    }
    printf("请输入矩阵B中的元素：3*4\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        scanf("%d",&matrixB[i][j]);
    }
    for(i=0;i<ROW;i++)
    {
       for(j=0;j<COL;j++)
       matrixC[i][j]=matrixA[i][j]*matrixB[i][j];
    }
    for(i=0;i<ROW;i++)
    {
       for(j=0;j<COL;j++)
       printf("%8d",matrixC[i][j]);
       printf("\n");
    }
    return 0;
}

