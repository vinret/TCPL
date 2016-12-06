#include<stdio.h>
int is_pow2(int n);
int main()
{
  int a;
  scanf("%d",&a);
  printf("返回值是:%d\n",is_pow2(a));
  return 0;
}
int is_pow2(int n)
{
  if((n&(n-1))==0) return 0;
    else return -1;
}
