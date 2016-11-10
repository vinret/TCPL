#include<stdio.h>
#include<math.h>
int main()
{
  char c;
  int a,n,m,i,j,k,x,y,z;
  printf("请输入你需要打印的符号与个数：");
  scanf("%c%d",&c,&a);
  for(n=1; a>=2*n*n+4*n+1;n++)
  m=n+1;
  for(i=1;i<m;i++)
  {
    for(j=1;j<i;j++)
      printf(" ");
    for(k=1;k<=2*m-2*i+1;k++)
      printf("%c",c);
    printf("\n");
  }
  
  for(x=1;x<=m;x++)
  {
    for(y=1;y<=m-x;y++)
      printf(" ");
    for(z=1;z<2*x;z++)
      printf("%c",c);
    printf("\n");
  }
  printf("未用到的符号有%d个",a+1-2*m*m);  
  return 0;
}

