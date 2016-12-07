#include<stdio.h>
int main()
{
    int r,s,t;
    int m,j,i;
    printf("请输入矩阵a的行数列数和矩阵b的列数：");
    scanf("%d%d%d",&r,&s,&t);
    int a[r][s],b[s][t],c[r][t];
    printf("输入矩阵a\n");
    for(i=0;i<r;i++)
    {
       for(j=0;j<s;j++)
       scanf("%d",&a[i][j]);
    }
    printf("输入矩阵b\n");
    for(i=0;i<s;i++)
    {
       for(j=0;j<t;j++)
       scanf("%d",&b[i][j]);
    }
    for(i=0;i<r;i++)
    {
       for(j=0;j<t;j++)
       {
       c[i][j]=0;
       for(m=0;m<s;m++)
       c[i][j]+=a[i][m]*b[m][j];
       }
    }
    printf("矩阵c为\n");
    for(i=0;i<r;i++)
    {
       for(j=0;j<t;j++)
           printf("%d ",c[i][j]);
       printf("\n");
    }
    return 0;
}
