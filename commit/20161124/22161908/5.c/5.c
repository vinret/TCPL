#include<stdio.h>
int is_pow2(int n);

int is_pow2(int n)
{
      if(n&(n-1)==0)
      return 0;
      else
      return -1;
}
int main()
{
      int n;
      scanf("%d",&n);
      if(is_pow2(n))
      printf("yes");
      else
      printf("no");
      return 0;
}
      
