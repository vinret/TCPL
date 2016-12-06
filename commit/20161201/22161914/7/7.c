#include<stdio.h>
void main()
{
    int n;
    int a[10][10]={0};
    int b[10][10]={0};
    int c[10][10]={0};
    int i,j,k;
    printf("input\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
{
    scanf("%d",&a[i][j]);
}
}
     for(i=0;i<n;i++)
{
     for(j=0;j<n;j++)
{
     scanf("%d",&b[i][j]);
}
}
     printf("output\n");
     for(i=0;i<n;i++)
{
     for(j=0;j<n;j++)
{
     for(k=0;k<n;k++)
{
     c[i][j]+=a[i][k]*b[k][j];
}
     printf("%d",c[i][j]);
}
     printf("\n");
}
}

