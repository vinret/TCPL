#include<stdio.h>
int main()
{
  int T,n;
  long long A,B,C;
  scanf("%d",&T);
  for(n=1;n<=T;n++)
  {
    scanf("%lld %lld %lld",&A,&B,&C);
    if(A+B>C)
    printf("Case #%d: turn\n",n);
    else
    printf("Case #%d: false\n",n);
  }
  return 0;
}
