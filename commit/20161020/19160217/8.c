#include <stdio.h>
 int main()
{
  int n,i=0,a[32],b;
  scanf("%d",&n);
   b=n;
  while(n>0)
 {
   a[i]=n%2;
   i=i+1;
   n=n/2;
 }
  for(i=i-1;i>=0;i--)
  printf("%d",a[i]);
  printf("\n");
  printf("%o\n",b);
  printf("%x\n",b);
 
  return 0;
}
