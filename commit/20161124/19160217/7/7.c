#include<stdio.h>
int main()
{
  int N,M;
  scanf("%d %d",&N,&M);
  int a[101],i;
  for(i=1;i<=N;i++)
  {
    if(M%N+i<=N)
      scanf("%d",&a[i+M%N]);
    else
      scanf("%d",&a[i+M%N-N]);
  }
  for(i=1;i<N;i++)
    printf("%d ",a[i]);
  printf("%d",a[N]);
  return 0;
}
