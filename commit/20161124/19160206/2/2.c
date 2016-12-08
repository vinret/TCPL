#include<stdio.h>
int LCM(int m, int n);
int main()
{
  int m,n,a;
  scanf("%d %d",&m,&n);
  a=LCM(m,n);
  printf("%d",a);
  return 0;
}

int LCM(int m, int n)
{
  int m1=m,n1=n;
  while(m%n)
{
      int a=m%n;
       m=n;
       n=a;
}
   int s=m1*n1/n;
   return s;
}

