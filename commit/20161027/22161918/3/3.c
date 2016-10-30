#include<stdio.h>
int main()
{
  int step=0,N;
  printf("请输入一个数字N：");
  scanf("%d",&N);
  while(N!=1)
  {
    N=N%2?(3*N+1)/2:N/2;
    step++;
  }
  printf("您输入的数字至少需要%d步可达到目的\n",step);
  return 0;
}
