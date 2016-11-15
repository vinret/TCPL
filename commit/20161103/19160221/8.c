#include <stdio.h>
int fac_bit_count(int n)
{
  int i;
  long long m=n;
  for(i=1;i<n;++i) m*=i;
  for(i=0;m!=0;++i) m/=10;
  return i;
}
int main()
{
  int n;
  scanf("%d",&n);
  printf("%d",fac_bit_count(n));
  return 0;
}
