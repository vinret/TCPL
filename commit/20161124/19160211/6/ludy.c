#include <stdio.h>
int count1_in_bin(int n);
int main()
{
  int n,c;
  printf("输入整数n\n");
  scanf("%d",&n);
  c=count1_in_bin(n);
  printf("该数二进制表示1在个数为%d\n",c);
  return 0;
}
int count1_in_bin(int n)
{
  int i=0,r;
  while(n!=0)
  { 
    r=n%2;

    if(r==1)
    i++;

    n/=2;};
   return i;
}
