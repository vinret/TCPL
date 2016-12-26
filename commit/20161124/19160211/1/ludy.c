#include <stdio.h>
int GCD_recursive(int m,int n);
int GCD_iterative(int m,int n);
int main()
{
  int m,n,a,b;
  printf("分别输入m，n\n");
  scanf("%d %d",&m,&n);
  a=GCD_recursive(m,n);
  b=GCD_iterative(m,n);
  printf("循环实现的最大公约数为%d\n",a);
  printf("递归实现的最大公约数为%d\n",b);
  return 0;
}

int GCD_recursive(int m,int n)
{
  int max,min;
  if(m>n) 
  {max=m;min=n;}
  else if(m<n) 
  {max=n;min=m;}
  else return m;
  int r,p;
  r=max%min;
  p=min;
  while(r!=0)
  {
   max=min;
   min=r;
   r=max%min;
   p=min;
  };
   return p;
}
   
int GCD_iterative(int m,int n)
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
  GCD_iterative(p,r);
}
  
  
   





