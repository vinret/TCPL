#include<stdio.h>
int m,n;
int GCD_recursive(int m,int n)
{
   int i;
   while(m<n)
   {
      m=m^n;
      n=n^m;
      m=m^n;
   }
   while(m%n!=0)
   {
      i=m%n;
      m=n;
      n=i;
   }
   return n;
}
int main()
{
   int i;
   scanf("%d%d",&m,&n);
   i=GCD_recursive(m,n);
   printf("%d\n",i);
   return 0;
}
