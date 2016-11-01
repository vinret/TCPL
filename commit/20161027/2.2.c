#include<stdio.h>
int main()
{
   int n;
  printf("请输入n(n>=3):");
  scanf("%d", &n);
  if (n%2!=0 || n%3!=0)
   printf("%d不是素数\n", n);
  if (n%2==0 && n%3==0)
   printf("%d是素数\n", n);
   return 0;
}
               
