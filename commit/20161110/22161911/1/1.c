#include <stdio.h>
int c(int i,int j)
{
    if(j==0||j==i)return 1;
    else return c(i-1,j-1)+c(i-1,j);
}
int main()
{
    int n,i,j;
    printf("请输入杨辉三角形的行数:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
            printf("   ");
        for(j=0;j<=i;j++)
            printf("%6d",c(i,j));
        printf("\n");
    }
    return 0;
}

