#include<stdio.h>
int is_pow2(int n);

int main()
{
 int n,k;
 printf("Please input n:");
 scanf("%d",&n);
 k=is_pow2(n);
 if(k==0)
  printf("%d is pow2.\n",n);
 else
  printf("%d is not pow2.\n",n);
 return 0;
}

int is_pow2(int n)
{
 int i=0;
 if(n==0)
  return -1;
 else
 {
  while(n!=0)
  {
   if(n%2==1)
    i++;
   n/=2;
  }
  return i==1?0:-1;
 }
}
