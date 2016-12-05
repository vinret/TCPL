#include<stdio.h>
int GCD_iterative(int m,int n)
{
  if(m%n==0)
  return n;
  else
    return GCD_iterative(n,m%n);
}
int main()
{
    int m,n;
    printf("input m n：\n");
    scanf("%d%d",&m,&n);
    GCD_iterative(m,n);
    printf("最大公约数为：%d\n",GCD_iterative(m,n));
    return 0;
}
