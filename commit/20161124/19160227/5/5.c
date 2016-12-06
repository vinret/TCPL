#include <stdio.h>
int is_pow2(int n);
void main()
{
 int n;
 printf("please input a number: ");
 scanf("%d",&n);
 printf("%d\n",is_pow2(n));
}
int is_pow2(int n)
{
 int i,c=0,a[100],k=0;
 while(n!=0)
 {
  i=n%2;
  a[c]=i;
  c++;
  n=n/2;
 }
 for(;c>=0;c--)
 {
  if (a[c]==1)
   k+=1;
 }
 if(k==1)
  return 0;
 else
  return -1;
}

