#include<stdio.h>
#define NUM 20
int main()
{
 int i,j,f[100][100];
 for (i=0;i<=NUM;++i)
 for (j=0;j<=NUM;++j)
  f[i][j]=0;
 f[1][1]=1;
 printf("1\n");
 for (i=2;i<=NUM;++i)
 for (j=1;j<=i;++j)
 {
  f[i][j]=f[i-1][j-1]+f[i-1][j];
  printf("%-5d",f[i][j]);
  if (j==i) printf("\n");
  else printf(" ");
 }
 return 0;
}

