#include<stdio.h>
int m,n;
int LCM(int m,int n)
{
   int i,x,y;
   x=m;
   y=n;
   while(m%n!=0)
   {
      i=m%n;
      m=n;
      n=i;
   }
   return x*y/n;
}
int main()
{
   int i;
   scanf("%d%d",&m,&n);
   while(m<n)
   {
      m=m^n;
      n=n^m;
      m=m^n;
   }
   i=LCM(m,n);
   printf("%d\n",i);
   return 0;
}
