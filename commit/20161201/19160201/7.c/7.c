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
 for(i=0;i<m;j++)
 {
  for(j=0;j<n;j++)
  printf("%d ",a[i][j]);
  printf("\n");
 }
}
int main()
{
 int a,b,c,i,j,k;
 printf("input the row and the column of matrix x:");
 scanf("%d%d",&a,&b);
 printf("input the column of matrix y:");
 scanf("%d",&c);
 int x[a][b],y[b][c],z[][100]={0};
 input(a,b,x);
 for(j=0;j<b;j++)
 {
  for(i=0;i<a;j++)
  {
   for(k=0;k<c;k++)
   z[i][k]+=x[i][j]*y[j][k];
  }
 }
 output(a,c,z);
 return 0;
}

