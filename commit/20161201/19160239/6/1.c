#include<stdio.h>
#define ROW 3
#define COL 4
int main()
{
 int matrixA[ROW][COL],matrixB[COL][ROW];
 int i,j;
 printf("please input the elements in the origin A:");
 printf("%d*%d:\n",ROW,COL);
 for (i=0;i<ROW;i++)
 {
  for (j=0;j<COL;j++)
  {
  scanf("%d",&matrixA[i][j]);
  }
 }
 for(i=0;i<ROW;i++)
 {
 for (j=0;j<COL;j++)
  {
  matrixB[i][j]=matrixA[i][j];
  }
 }
 printf("transfer the B,");
 printf("%d*%d:\n",COL,ROW);
 for (i=0;i<COL;i++)
 {
 for (j=0;j<COL;j++)
 {
  printf("%8d",matrixB[i][j]);
 }
printf("\n");
}
return 0;
}









