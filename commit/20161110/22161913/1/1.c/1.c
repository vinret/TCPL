#include<stdio.h>
int main()
{
    long i,j,n;
    printf("请输入你要打印的行数: ");
    scanf("%ld",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        a[i][0]=1;
        a[i][i]=1;
    }
    for(i=2;i<n;i++)
    {
       for(j=1;j<i;j++)
          a[i][j]=a[i-1][j-1]+a[i-1][j];}
    for(i=0;i<n;i++)
    {
       for(j=0;j<i;j++)
          printf("%d",a[i][j]);
          printf("\n");
    }
    return 0;
}
