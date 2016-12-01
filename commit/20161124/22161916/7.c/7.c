#include<stdio.h>
int main()
{
    int N,M,i;
    scanf("%d %d",&N,&M);
    scanf(" ");
    int a[N+1];
    for(i=0;i<N;i++)
{
    int j=i;
    j=(i+M)%N;
    scanf("%d",&a[j]);
}
for(i=o;i<N;i++)
{
    printf("%d",a[i]);
    if(i<N-1)
    printf(" ");
}
  return 0;
}
