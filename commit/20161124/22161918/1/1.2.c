#include<stdio.h>
int GCD_recursive(int m,int n);
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d\n",GCD_recursive(a,b));
  return 0;
}
int GCD_recursive(int m,int n)
{
  if(m%n==0)  return n;
    else  return GCD_recursive(n,m%n);
}
