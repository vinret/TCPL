#include<stdio.h>
void main()
{
    int i,j;
    int a[11][20];
    for(i=0;i<11;i++)
    for(j=0;j<20;j++)
    a[i][j]=0;
    for(i=0;i<10;i++)
    {
      for(j=0;j<=i;j++)
      {
        if(j<1)
          a[i][j]=1;
        else if(i==0)
          break;
        else
          a[i][j]=a[i-1][j-1]+a[i-1][j];
      }
    }
    for(i=0;i<10;i++)
    {
       for(j=0;j<=i;j++)
       printf("%d",a[i][j]);
       printf("\n");
    }
}
