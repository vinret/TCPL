#include <stdio.h>
int count1_in_bin(int n);
void main()
{
 int n;
 printf("please input a number: ");
 scanf("%d",&n);
 printf("%d\n",count1_in_bin(n));
}
int count1_in_bin(int n)
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
    return k;
}

