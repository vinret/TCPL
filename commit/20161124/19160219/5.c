#include<stdio.h>
int is_pow2(int n)
{
   int flag;
   if((n&(n-1))==0)
      flag=0;
   else
      flag=-1;
   return flag;
}
int main()
{
   int n;
   scanf("%d",&n);
   if(is_pow2(n)+1)
      printf("%d is the power of 2\n",n);
   else
      printf("%d is not the power of 2\n",n);
   return 0;
}
