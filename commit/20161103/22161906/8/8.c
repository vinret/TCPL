#include<stdio.h>

 int fac_bit_count(int n)
{
  int i,j=0,sum=1;
  for(i=1;i<=n;i++)
  sum*=i;
  while(sum!=0)
 {
   sum/10;
   j++;
 }
   return j;
}

  int main()
{
  int n,j=0;
  printf("Please input n:");
  scanf("%d",&n);
  j=fac_bit_count(n);
  printf("%d\n",j);
  return 0;
}

