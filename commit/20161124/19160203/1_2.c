#include<stdio.h>
int m,n;
int GCD_iterative(int m,int n)
{
   while (m%n!=0)
      return GCD_iterative(n,m%n);
   return n;
}
int main()
{
   int i;
   scanf("%d%d",&m,&n);
   while (m<n)
   {
      m=m^n;
      n=n^m;
      m=m^n;
   }
   i=GCD_iterative(m,n);
   printf("%d\n",i);
   return 0;
}
