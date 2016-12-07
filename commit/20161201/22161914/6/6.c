#include<stdio.h>
#define ROW 3
#define COL 4
int main()
{
    int matrixA[ROW][COL],matrixB[COL][ROW];
    int i,j;
    printf("输入原矩阵A中的元素,");
    printf("%d*%d:\n",ROW,COL);
    for(i=0;i<ROW;i++)
{
    for(j=0;j<COL;j++)
{
    scanf("%d",&matrixA[i][j]);
}
}
    for(i=0;i<ROW;i++)
{
    for(j=0;j<COL;j++)
{
    matrixB[j][i]=matrixA[i][j];
}
}
    printf("转置矩阵B,");
    printf("%d*%d:\n",COL,ROW);
    for(i=0;i<COL;i++)
{
    for(j=0;j<ROW;j++)
{
    printf("%8d",matrixB[i][j]);
 }
    printf("\n");
}
    return 0;
}
