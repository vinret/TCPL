#include <stdio.h>
int main()
{
  int i = 0, n;
  scanf("%d", &n);
  while(n != 1)
  {
    n = n % 2 ? (3 * n + 1) / 2 : n / 2;
    i++;
  }
  printf("%d\n", i);
  return 0;
}

