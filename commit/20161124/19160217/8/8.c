#include<stdio.h>
#include<math.h>
int prime(int n);
int main()
{
  int a[10001],i=1,count=0,M,n,N;
  scanf("%d %d",&M,&N);
  for(n=2;count<=N;n++)
  {
    if(prime(n)==0)
    {
      count++;
      a[i]=n;
      ++i;
    }
    
  }
    for(i=M;i<N;i++)
    {
      if((i-M+1)%10!=0)
        printf("%d ",a[i]);
      else printf("%d\n",a[i]);
    }
    printf("%d",a[N]);
    return 0;
}
int prime(int n)
{
  int i;
  for(i=2;i<=sqrt(n);i++)
  {
    if(n%i==0) break;
  }
  if(i<=sqrt(n))
    return -1;
  else return 0;
}
