#include <stdio.h>
int is_pow2(int n);
int main()
{
  int n,k;
  printf("输入整数n\n");
  scanf("%d",&n);
  if(n==1)
 {printf("此数为2的幂次方\n");
  return 0;} 
  k=is_pow2(n);
  k++;
  if(k)
  printf("此数为2的幂次方\n");
  else
  printf("此数不为2的幂次方\n");
  return 0;
}

int is_pow2(int n)
{ 
  int a;
  a=(n&(n-1));
  if(a==0)
  return 0;
  else
  return -1;
}
