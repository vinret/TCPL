#include <stdio.h>
int main()
{ int rowA=0,rowB=0,colA=0,colB=0;
  while(rowA<=0||colA<=0||rowA>20||colA>20)
    { printf("设矩阵A的行数和列数(0<x<=20)为:\n");
      scanf("%d %d",&rowA,&colA);
    }
  while(rowB!=colA)
    { printf("设矩阵B的行数和列数(0<x<=20)为:\n");
      scanf("%d %d",&rowB,&colB);
    }  
  int matrixA[20][20],matrixB[20][20],matrixC[20][20]={0};
  int i,j,k;
  printf("设矩阵A(%d*%d)为:\n",rowA,colA);
  for(i=0;i<rowA;++i)
    { for(j=0;j<colA;++j) scanf("%d",&matrixA[i][j]); }
  printf("设矩阵B(%d*%d)为:\n",rowB,colB);
  for(i=0;i<rowB;++i)
    { for(j=0;j<colB;++j) scanf("%d",&matrixB[i][j]); }
  printf("矩阵AB为:\n");
  for(i=0;i<colB;++i)
    { for(j=0;j<rowA;++j)
        { for(k=0;k<colA;++k)
            matrixC[i][j]+=matrixA[i][k]*matrixB[k][j];
        }
    }
  for(i=0;i<colB;++i)
    { for(j=0;j<rowA;++j)
      printf("%5d ",matrixC[i][j]);
      printf("\n");
    }
  return 0;
}
