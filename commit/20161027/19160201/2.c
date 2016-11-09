#include<stdio.h>
int main()
{
 int n,i;
 printf("Please input n(n>3):");
 scanf("%d",&n);
 for(i=2;i<n/2;i++)
  if (n%i==0)
  break;
  if(i<n/2)
  printf("%d isn't a prime number.\n",n);
 else 
  printf("%d is a prime number.\n",n);
 return 0;


}
