#include <stdio.h>
int count1_in_bin(int n)
{int j,count1=0,x[32];
  for(j=0;n!=0;j++)
  {
    x[j]=n%2;
    n=n/2;
    if(x[j]==1)  count1++;
  }
  return count1;}
int main()
{int n;
 printf("Please input a number n:");
 scanf("%d",&n);
 printf("the number of 1 in its bin is %d\n",count1_in_bin(n));
 return 0;}
