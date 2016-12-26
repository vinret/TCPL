#include <stdio.h>
int main()
{
 int m,n,p,i,j,x,y;
 printf("输入矩阵A行数列数x，p与矩阵B的列数y\n");
 scanf("%d %d %d",&x,&p,&y);
 int a[x][p],b[p][y],c[x][y];

 printf("输入矩阵A的元素\n");
 for(i=0;i<x;i++)
  for(j=0;j<p;j++)
   scanf("%d",&a[i][j]);
 printf("输入矩阵B的元素\n");
 for(i=0;i<p;i++)
  for(j=0;j<y;j++)
   scanf("%d",&b[i][j]);

 int sum;
 for(m=0;m<x;m++)
  for(n=0;n<y;n++)
   {
     for(i=0,sum=0;i<p;i++)
     sum=sum+a[m][i]*b[i][n];
     c[m][n]=sum;
   };
 printf("输出的矩阵C为：\n");
  for(i=0;i<x;i++)
{
  for(j=0;j<y;j++)
  printf("%d ",c[i][j]);
  printf("\n");
};
  return 0;
}
