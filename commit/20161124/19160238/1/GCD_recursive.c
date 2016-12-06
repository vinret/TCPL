#include<stdio.h>
int GCD_recursive(int m,int n);
int main()
{
  int m=0,n=0;
  while(m<1||n<1)
  {
    printf("please give two integers:");
    scanf("%d %d",&m,&n);
  }
  printf("their GCD is: %d\n",GCD_recursive(m,n));
  return 0;
}

int GCD_recursive(int m,int n)
{
   if(m<n)
 {m=m^n;n=m^n;m=m^n;}
 int tem;
 while(m%n)
  {
    tem=n;
    n=m%n;
    m=tem;
  }
  return n;
}
