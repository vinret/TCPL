#include<stdio.h>
void input(int m,int n,int a[m][n])
{
   int i,j;
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
         scanf("%d",&a[i][j]);
   }
}
void output(int m,int n,int a[m][n])
{
   int i,j;
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
         printf("%d  ",a[i][j]);
      printf("\n");
   }
}
int main()
{
   int m,n;
   printf("input two numbers as the row and the column of the matrix:");
   scanf("%d%d",&m,&n);
   int a[m][n],b[n][m],i,j;
   input(m,n,a);
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
         b[j][i]=a[i][j];
   }
   output(n,m,b);
   return 0;
}
