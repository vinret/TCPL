#include<stdio.h>
int Fac(int);
int Fac(int n)
{
   if(n==0)
      return 1;
   else
      return n*Fac(n-1);
}
int main()
{
   int i,j,n,k;
   scanf("%d",&n);
   for (i=0;i<=n;i++)
   {
      k=Fac(i);
   for (j=i;j>=0;j--)
   {
      k/=Fac(j);
      k/=Fac(i-j);
      printf("%d\t",k);
      k*=Fac(j);
      k*=Fac(i-j);
   }
   printf("\n");
   }
   return 0;
}

