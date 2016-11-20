#include <stdio.h>
int fac_bit_count(int n);
int main()
{
  int n;
  scanf("%d",&n);
  n=fac_bit_count(n);
  printf("%d\n",n);
}
int fac_bit_count(int n)
{
  int product,i;
  for(product=1,i=1;i<=n;i++)
       product=product*i;
  int count;
  for(count=1;product/10!=0;count++)
     product=product/10;
  return count;
}

