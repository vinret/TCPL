#include<stdio.h>
int main()
{
    int i,j,a[17][17]={0,1},n=0;
    while(n<1 || n>16)
   {
    printf("输入杨辉三角形的行数:");
    scanf("%d",&n);
   }
    for(i=0;i<=n;i++)
    a[i][0]=1;
    for(i=1;i<=n;i++)
    for(j=1;j<=i;j++)
    a[i][j]=a[i-1][j-1]+a[i-1][j];
    for(i=0;i<=n;i++)
     {
      for(j=0;j<=i;j++)
     printf("%5d",a[i][j]);
     printf("\n");
     }
}

