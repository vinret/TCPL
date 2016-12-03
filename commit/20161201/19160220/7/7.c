#include <stdio.h>
void input_matrix(int a[][10],int ROW,int COL)
{int i,j;
 for(i=0;i<ROW;i++)
   for(j=0;j<COL;j++)
    scanf("%d",&a[i][j]);
}
void output_matrix(int a[][10],int ROW,int COL)
{int i,j;
 for(i=0;i<ROW;i++)
   {for(j=0;j<COL;j++)
      printf("%d\t",a[i][j]);
    printf("\n");
    if(i!=ROW-1) printf("  \t");}   
}
void matrix_multiplication(int A[][10],int ROW_A,int COL_A,int B[][10],int ROW_B,int COL_B)
{if(COL_A!=ROW_B) printf("matrix A and B can't multiply.\n");
 else
{int M[10][10]={0},i,j,k;
 for(i=0;i<COL_A;i++)
    for(j=0;j<ROW_A;j++)
       for(k=0;k<COL_B;k++)
          M[j][k]+=A[j][i]*B[i][k];
 printf("A*B=\t");
 output_matrix(M,ROW_A,COL_B);}
}
int main()
{int A[10][10],B[10][10];
 int ROW_A,ROW_B,COL_A,COL_B;
 printf("Please input ROW_A and COL_A:");
 scanf("%d %d",&ROW_A,&COL_A);
 input_matrix(A,ROW_A,COL_A);
 printf("Please input ROW_B and COL_B:");
 scanf("%d %d",&ROW_B,&COL_B);
 input_matrix(B,ROW_B,COL_B);
 printf("A=\t");
 output_matrix(A,ROW_A,COL_A);
 printf("B=\t");
 output_matrix(B,ROW_B,COL_B);
 matrix_multiplication(A,ROW_A,COL_A,B,ROW_B,COL_B);

 return 0;
}
