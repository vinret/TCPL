#include<stdio.h>
int main()
{
  int row1,row2,col1,col2;
  printf("Please input row1,col1,row2,col2:\n");
  scanf("%d%d%d%d",&row1,&col1,&row2,&col2);
  if(col1!=row2)
    printf("error\n");
  int i,j,k,A[row1][col1],B[row2][col2],C[10][10]={0};
  printf("Please input A:\n");
  for(i=0;i<row1;i++)
  {  for(j=0;j<col1;j++)
     {  scanf("%d",&A[i][j]);
     }
  }
  printf("Please input B:\n");
  for(i=0;i<row2;i++)
  {  for(j=0;j<col2;j++)
     {scanf("%d",&B[i][j]);
     }
  }
  for(i=0;i<row1;i++)
  {  for(j=0;j<col2;j++)
     {  for(k=0;k<col1;k++)
        {  C[i][j]+=A[i][k]*B[k][j];
        }
     }
  }
  for(i=0;i<row1;i++)
  { for(j=0;j<col2;j++)
    { printf("%8d ",C[i][j]);
    }
    printf("\n");
  }
  return 0;
}
