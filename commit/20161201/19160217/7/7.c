#include<stdio.h>
int main()
{
  int row1,col1,row2,col2,m,p,n;
  printf("Please input row1,col1,row2,col2:");
  scanf("%d %d %d %d",&row1,&col1,&row2,&col2);
  if(col1!=row2)  {  printf("error\n"); return 0;}
  p=col1,m=row1,n=col2;
  int A[10][10],B[10][10],C[10][10]={0};
  int i,j,k;
  printf("Please input A:\n");
  for(i=1;i<=m;i++)
    {
     for(j=1;j<=p;j++)
        {
          scanf("%d",&A[i][j]);
        }
    }
  printf("Please input B:\n");
  for(i=1;i<=p;i++)
     {
       for(j=1;j<=n;j++)
          {
            scanf("%d",&B[i][j]);
          }
     }
   for(i=1;i<=m;i++)
     {
        for(j=1;j<=n;j++)
           {
              for(k=1;k<=p;k++)
                 {
                     C[i][j]+=A[i][k]*B[k][j];
                 }
           }
     }
   for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
               {
                 printf("%8d",C[i][j]);
               }
          printf("\n");
         }
 return 0;
}
