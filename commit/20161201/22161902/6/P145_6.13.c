#include <stdio.h>
int main()
{
int row,col,i,j;
printf("Please input row and col:");
scanf("%d %d",&row,&col);
int num1[row][col];
int num2[col][row];
for(i=0;i<row;i++)      //输入矩阵
{
for(j=0;j<col;j++)
{
scanf("%d",&num1[i][j]);
}
}
for(i=0;i<row;i++)     //矩阵转换
{
for(j=0;j<col;j++)
{
num2[j][i]=num1[i][j];
}
}
printf("after changing:\n");  //输出新矩阵
for(i=0;i<col;i++)
{
for(j=0;j<row;j++)
{
printf("%-8d ",num2[i][j]);
}
printf("\n");
}
printf("\n");
return 0;
}
