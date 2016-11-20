#include <stdio.h>
int is_prime(int n);
int main()
{
 int a,j=1,b;
 for(a=3;j<99;a++)
  { b=is_prime(a);
    if(b+1)
    j++;};
 for(a=a;j<=1000;a++)
  { b=is_prime(a);
    if(b+1)
  { printf("%d ",a);
    j++;};};
}

int is_prime(int n)
{
  int i,rem;
  for(i=2;i<n;i++)
  { rem=n%i;
    if(rem==0)
    { return -1;
      break;};};
   return 0;
}
