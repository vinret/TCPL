//使用二维数组实现两个矩阵的乘法运算。 
#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100];
    int i,j;
    int row,col;
 
    printf("请输入矩阵的行列数：");
    scanf("%d%d",&row,&col);   

    printf("请输入第一个矩阵中的元素：\n");
    for(i=0;i<row;i++)
    {
       for(j=0;j<col;j++)
       {
           scanf("%d",&a[i][j]);
       }
    }
 
    printf("请输入第二个矩阵中的元素：\n");
     for(i=0;i<row;i++)
    {
       for(j=0;j<col;j++)
       {
           scanf("%d",&b[i][j]);
       }
    }

    printf("两个矩阵的乘法运算结果为：\n");
    for(i=0;i<row;i++)
    {
       for(j=0;j<col;j++)
       {
           c[i][j]=a[i][j]*b[i][j];
           printf("%d ",c[i][j]);
       }
    }

    printf("\n");
}
   
