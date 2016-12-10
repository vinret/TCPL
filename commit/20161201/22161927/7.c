#include <stdio.h>
int main()
{
int j,i,k,l,sum;
int row1,row2,col1,col2;
scanf("%d %d %d %d",&row1,&col1,&row2,&col2);
int num3[row1][col2];
int num1[row1][col1];
int num2[row2][col2];
printf("输入第一个矩阵:\n");
for(i=0;i<row1;i++)    //输入第一个矩阵
{
for(l=0;l<col1;l++)
{
scanf("%d",&num1[i][l]);
}
}
printf("输入第二个矩阵:\n");
for(j=0;j<row2;j++)    //输入第二个矩阵
{
for(k=0;k<col2;k++)
{
scanf("%d",&num2[j][k]);
}
}
if(col1!=row2) printf("error!!\n");
else
{
for(i=0;i<row1;i++)    //矩阵相乘
{
for(j=0;j<col2;j++)
{
sum=0;
for(k=0;k<col1;k++)
{sum=sum+num1[i][k]*num2[k][j];}
num3[i][j]=sum;
}
}
}
printf("输出结果矩阵!\n");
for(i=0;i<row1;i++)
{
for(j=0;j<col2;j++)
{
printf("%7d",num3[i][j]);
}
printf("\n");
}
printf("\n");
return 0;
}
