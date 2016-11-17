#include<stdio.h>
#include<math.h>
int is_prime(int n);
int main()
{
  int j;
  for(j=100;j<=1000;j++)
  if(is_prime(j)==0)
  printf("%d\t",j);
  printf("\n");
  return 0;
}
  int is_prime(int n)
 {
  int i;
  for(i=2;i<=sqrt(n);i++)
  if(n%i==0)
  return -1;
  else
  return 0;
}
