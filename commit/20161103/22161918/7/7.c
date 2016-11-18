#include<stdio.h>
#include<math.h>
int is_prime(int n);
int main()
{
  int i,j=0;
  for(i=2;i<10000;i++)
  {  if(is_prime(i)==0)
     {  j++;
        if(j>99&&j<1001)
          printf("%d ",i); }
  }
}
int is_prime(int n)
{
  int m;
  for(m=2;m<=sqrt(n);m++)
  {  if(n%m==0)
       return -1; }
  return 0;
}
