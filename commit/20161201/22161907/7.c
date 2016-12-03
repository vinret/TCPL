#include<stdio.h>
int main()
{
int a[3][4],b[3][4],c[3][4];
int i,j,k,l,m,n;
printf("输入矩阵a,");
for (i-0;i<3;i++)
{  for (j=0;j<4;j++)
   { scanf("%d", &a[i][j]);  }
}
printf("输入矩阵b,\n");
for (k=0;k<3;k++)
{  for (l=0;l<4;l++)
   { scanf("%d", &b[k][l]);   }
}
printf("得到矩阵c:\n");
for (m=0;m<3;m++)
{   for (n=0;n<4;n++)
  {  c[m][n]=a[i][j]*b[k][l];   }
}
for (m=0;m<3;m++)
{   for (n=0;n<4;n++)
    {  printf("%8d", c[m][n]);  }
printf("\n");
}
}
