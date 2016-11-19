#include <stdio.h>
int main()
{
  int n=0,i,j,k,a[17][17]={0,1};
  while(n<1||n>16)
  {
    printf("输入杨辉三角形行数n(0<n<17)：");
    scanf("%d",&n);
  }
    for(i=1;i<=n;++i)
      {
        for(k=n-i;k>0;--k) printf("   ");
        for(j=1;j<=i;++j)
          {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
            printf("%6d",a[i][j]);
          }
        printf("\n");
      }
return 0;
}
