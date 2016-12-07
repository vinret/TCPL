#include <stdio.h>
int LCM(int m,int n);
int GCD(int m,int n);
int main()
{
 int m,n,l;
 printf("输入m，n\n");
 scanf("%d %d",&m,&n);
 l=LCM(m,n);
 printf("最大公约数为%d",l);
 return 0;
}
int GCD(int m,int n)
{
  int p,r,max,min;
  if(m>n)
  {max=m;min=n;}
  else if(m<n)
  {max=n;min=m;}
  else return n;
  r=max%min;
  p=min;
  if(r==0)
  return p;
  else
  GCD(p,r);
}
int LCM(int m,int n)
{
  int a,b,c;
  c=GCD(m,n);
  a=m*n;
  b=a/c;
  return b;
}
