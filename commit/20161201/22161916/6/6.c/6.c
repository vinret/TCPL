#include<stdio.h>
#define ROW 3
#define COL 4
int main()
{
    int matrixA[ROW][COL],matrixB[COL][ROW];
    int i,j;
    printf("Please input the components of the original matriA,");
    printf("%d*%d:\n",ROW,COL);
    for(i=0;i<ROW;i++)
{
    for(j=0;j<COL;j++)
{
    scanf("%d",&matrixA[i][j]);
    }
}
    for(j=0;j<COL;j++)
{
    matrixB[j][i]=matrixA[i][j];
}
}
   printf("Transposed matrixB,");
   printf("%d*%d\n",COL,ROW);
   for(i=0;<COL;i++)
{
    for(j=0;j<ROW;j++)
{
    printf("%d",matrixB[i][j]);
}
    printf("\n");
} 
   return 0;
}
