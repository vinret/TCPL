#include<stdio.h>
int main()
{
 int i,T;
 long long int A,B,C;
 scanf("%d",&T);
 for(i=1;i<=T;i++)
 {
  scanf("%lld %lld %lld",&A,&B,&C);
  printf("Case #%d: %s\n",i,A+B>C?"true":"false");
 }
 return 0;
}
