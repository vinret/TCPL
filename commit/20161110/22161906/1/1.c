#include<stdio.h>
void main()
{
     int i,j,n=0;
     int a[17][17]={0};
     while(n<1||n>16)
   {
    printf("Please input n:");
    scanf("%d",&n);
   }
    for(i=0;i<n;i++)
    a[i][0]=1;
    for(i=1;i<n;i++)
    for(j=1;j<=i;j++)
    a[i][j]=a[i-1][j]+a[i-1][j-1];
    for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
    printf("%5d",a[i][j]);
    printf("\n");
  }
}

