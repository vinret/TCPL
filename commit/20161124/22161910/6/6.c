#include<stdio.h>
int count_in_bin(int n)
{
    int count=0;
    while(n!=0)
{
  n&=(n-1);
  count++;
}
return count;
}
int main()
{
  int n;
  printf("input n:\n");
  scanf("%d",&n);
  printf("该数的二进制形式中有%d个1\n",count_in_bin(n));
  return 0;
}
