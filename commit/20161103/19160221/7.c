#include <stdio.h>
#include <math.h>
int is_prime(int n)
{
  int i;
  for(i=2;i<=sqrt(n);++i)
    {  if(n%i==0) break;}
  if(i<=sqrt(n)) return -1;
  else return 0;
}
int main()
{
  int n,k=0;
  for(n=2;k<1000;++n)
    {
      if(is_prime(n)==0) 
        {
          ++k;
          if(k>=100) printf("%4d ",n);
        }
    }
  return 0;
}
