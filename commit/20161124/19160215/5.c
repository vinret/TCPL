#include<stdio.h>
int is_pow2(int n)
{
 int count=0;
 for(;n;n>>=1)
    if(n&1) ++count;
 if(1==count)
   return 0;
 else 
   return -1;
   }

int main()
{
  int n;
  puts("Plese enter a number:");
  scanf("%d",&n);
  printf("%d\n",is_pow2(n));
  return 0;
  }

