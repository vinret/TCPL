#include<stdio.h>
int main()
{
long long  A,B,C;
int   T,i=1;
    scanf("%d",&T);
    while(i<=T)
    {
      scanf("%lld%lld%lld",&A,&B,&C);
      if(A+B>C) printf("Case #%d: true\n",i);
      else      printf("Case #%d: false\n",i);
      i++;
    }
    return 0;
}                                                                                                      
