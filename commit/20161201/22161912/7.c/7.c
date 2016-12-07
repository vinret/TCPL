#include<stdio.h>
int main()
{
    int i,j,k,a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int A[a][b],B[b][c],C[a][c];
    printf("A:\n");
    for(i=0;i<a;i++)
       for(j=0;j<b;j++)
          scanf("%d",&A[i][j]);
    printf("B:\n");
    for(i=0;i<b;i++)
      for(j=0;j<c;j++)
         scanf("%d",&B[i][j]);
    for(i=0;i<a;i++)
       for(j=0;j<c;j++)
       {
          C[i][j]=0;
          for(k=0;k<b;k++)
             C[i][j]+=A[i][k]*B[k][j];
       }
    printf("Multiplication:\n");
    for(i=0;i<a;i++)
    {  
       for(j=0;j<c;j++)
          printf("%-4d",C[i][j]);
       printf("\n");
    }
    return 0;
}
    
