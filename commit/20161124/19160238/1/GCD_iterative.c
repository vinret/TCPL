#include<stdio.h>
int GCD_iterative(int m,int n)
{
  if(m<n)
  {m=m^n;n=m^n;m=m^n;}
  if(m%n==0) 
    return n;
  else
    return GCD_iterative(n,m%n);
}

int main()
{
  int m=0,n=0;
  while(m<1||n<1)
    { 
      printf("please give two integers: ");
      scanf("%d %d",&m,&n); 
    }
  printf("their GCD is: %d\n",GCD_iterative(m,n));
  return 0;
}
