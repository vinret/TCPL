#include<stdio.h>
int main()
{
  int N,a[N],M,i;
  scanf("%d %d",&N,&M);
  for(i=0;i<N;i++)
    scanf("%d",&a[i]);
  if(M>N) M=M%N;
  for(i=N-1;i>=0;i--)
      *(a+i+M)=*(a+i);
  for(i=N;i<N+M;i++)
      a[i-N]=a[i];
  for(i=0;i<N;i++)
  {
    if(i<N-1)
      printf("%d ",a[i]);
    else
      printf("%d\n",a[i]);
  }
  return 0;
}
    
