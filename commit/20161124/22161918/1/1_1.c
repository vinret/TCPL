#include<stdio.h>
int GCO_recursive(int m,int n);
int main()
{
  int a,m,n;
  scanf("%d %d",&m,&n);
  a=GCO_recursive(m,n);
  printf("%d\n",a);
  return 0;
}
int GCO_recursive(int m,int n)
{
  int g=2;
  while(g!=0)
  {
     g=m%n;
     m=n;
     n=g;
  }
  return m;
} 
