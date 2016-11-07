#include<stdio.h>
int main()
{
   int n,i=0,j,k;
   char c;
   scanf("%d%*c%c",&n,&c);
   while(2*i*i-1<=n)
  {
    i++;
  }
    i--;
    k=i;
   while(i>1)
  {
    j=i-1;
   while(j<k-1)
   {
    printf(" ");
    j++;
   }
    j=i*2-1;
   while(j>=1)
   {
    printf("%c",c);
    j--;
   }
    i--;
    printf("\n");
  }
  while(i<=k)
  {
   j=i-1;
   while(j<k-1)
   {
    printf(" ");
    j++;
   }
   j=i*2-1;
   while(j>=1)
   {
    printf("%c",c);
    j--;
   }
    i++;
    printf("\n");
  }
  printf("%d\n",n-2*k*k+1);
  return 0;
}
