#include<stdio.h>
int main()
{
  int n,i;
  printf("please input n(n>3):");
  scanf("%d",&n);
  for (i=2;i<=n/2;i++)
    if(n%1==0)
      break;
  if (i<=n/2)
   printf("n is not a prime number\n");
  else
   printf("n is a prime number\n");
  return 0;
}
