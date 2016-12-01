#include<stdio.h>

int main()

{

         int sum,row1,col1,row2,col2,matrix1[20][20],matrix2[20][20],i,j,k,matrix[20][20];

         printf("请输入两个矩阵的行数和列数(矩阵1的列数与矩阵2的行数相等):");

         scanf("%d %d %d %d",&row1,&col1,&row2,&col2);

         if(col1!=row2)

                  printf("Error!");

         else

         {

                  printf("请输入矩阵1中的元素,%d*%d:",row1,col1);

                  for(i=0;i<row1;i++)

                          for(j=0;j<col1;j++)

                          {

                                   scanf("%d",&matrix1[i][j]);

                          }

                  printf("请输入矩阵2中的元素,%d*%d:",row2,col2);

                  for(i=0;i<row2;i++)

                          for(j=0;j<col2;j++)

                          {

                                   scanf("%d",&matrix2[i][j]);

                          }

                  printf("矩阵相乘的结果为:\n");

                  for(i=0;i<row1;i++)

                          for(j=0;j<col2;j++)

                          {

                                   sum=0;

                                   for(k=0;k<row2;k++)

                                   {

                                   sum=sum+matrix1[i][k]*matrix2[k][j];

                                   matrix[i][j]=sum;

                                   }

                          }

                  for(i=0;i<row1;i++)

                          for(j=0;j<col2;j++)

                          {

                                   printf("%d",matrix[i][j]);

                                   if(j==col2-1)

                                            printf("\n");

                                   else

                                            printf(" ");

                          }

         }

         return 0;

}
