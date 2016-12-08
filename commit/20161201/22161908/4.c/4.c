#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int matrix[2][3];
int matrix2[3][2];

int main()
{
    int i,j,k;
    int row=2,col=3;
    while(scanf("%d%d%d",&matrix[0][0],&matrix[0][1],&matrix[0][2])!=EOF)
    {
       int matrix3[2][2]={0};
       for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        scanf("%d",&matrix[i][j]);
       for(i=0;i<col;i++)
        for(j=0;j<row;j++)
        scanf("%d",&matrix2[i][j]);
       for(i=0;i<row;i++)
        for(j=0;j<row;j++)
        {
         for(k=0;k<col;k++)
          {
            matrix3[i][j]+=matrix[i][k]*matrix2[k][j];
          }
        }
       for(i=0;i<row;i++)
       {
          for(j=0;j<row;j++)
          {
             printf("%d",matrix3[i][j]);
          }
        printf("\n");
       }
     }
   return 0;
}
