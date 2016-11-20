#include<stdio.h>
long fac(int n)
{
   long f;
   if(n==0)
     f=1;
   else
     f=n*fac(n-1);
   return(f);
}

int main()
{
   int n;
   scanf("%d",&n);
   printf("%d!=%d\n",n,fac(n));
}
