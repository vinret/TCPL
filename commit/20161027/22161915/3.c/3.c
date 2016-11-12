#include <stdio.h>
int main ()
{
    int step=0,N;
    scanf("%d",&N);
    while (N!=1)
  {
    N=N%2?(3*N+1)/2:N/2;
    step++;
  }
  printf("%d\n",step);
  return 0;
}
