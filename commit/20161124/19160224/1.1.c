#include<stdio.h>
int GCD_recursive(int m,int n);

int GCD_recursive(int m,int n)
{
  int x;
  do
{
  x=m%n;
  m=n;
  n=x;
}
  while(x!=0);
  return m;
}

  int main()
{
   int m,n,k;
  scanf("%d%d",&m,&n);
  if(m<n)
{
   k=m;
   m=n;
   n=k;
}
   printf("%d\n",GCD_recursive(m,n));
   return 0;
}
