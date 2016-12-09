#include<stdio.h>
int main()
{
int m,n,x,y,i,j,r;
printf("请分别输入两个矩阵的行和列，并保证第一个矩阵的列与第二个矩阵的行相等\n");
scanf("%d%d%d%d",&m,&n,&x,&y);
if (n!=x)
 {printf("输入错误");
  return 0;}

int a[m][n],b[x][y],c[m][y];
for (i=0;i<m;i++)
  for (j=0;j<y;j++)
    c[i][j]=0;
printf("请分别输入两个矩阵\n");
for (i=0;i<m;i++)
  for (j=0;j<n;j++)
    scanf("%d",&a[i][j]);
for (i=0;i<x;i++)
  for (j=0;j<y;j++)
    scanf("%d",&b[i][j]);

for (i=0;i<m;i++)
  for (j=0;j<y;j++)
    for (r=0;r<n;r++)
      c[i][j]+=a[i][r]*b[r][j];

for (i=0;i<m;i++)
 {
  for (j=0;j<y;j++)
    printf("%d ",c[i][j]);
  printf("\n");
 }
return 0;
}
