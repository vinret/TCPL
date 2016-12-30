#include<stdio.h>
#define row 3
#define col 4
int main()
{
int matrixA[row][col],matrixB[col][row];
int i,j;
printf("输入原矩阵A中的元素，");
printf("%d*%d:\n",row,col);
for (i=0;i<row;i++)
 for(j=0;j<col;j++)
   scanf("%d",&matrixA[i][j]);

for (i=0;i<row;i++)
 for (j=0;j<col;j++)
   matrixB[j][i]=matrixA[i][j];

printf("转置矩阵B，%d%d:\n",col,row);
for (i=0;i<col;i++)
 {for(j=0;j<row;j++)
   printf("%8d",matrixB[i][j]);
  printf("\n");
 }
return 0;
}
