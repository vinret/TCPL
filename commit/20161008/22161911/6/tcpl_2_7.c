unsigned invert()
{
    unsigned x;
    int p;
    int n;
    return x ^ (~(~0U << n) << p);
}

#include <stdio.h>

int main()
{
  unsigned x;
  int p, n;

  for(x = 0; x < 700; x += 49)
    for(n = 1; n < 8; n++)
      for(p = 1; p < 8; p++)
        printf("%u, %d, %d: %u\n", x, n, p, invert(x, n, p));
  return 0;
}

