#include<stdio.h>
int main()
{
  long int A,B,C;
  int T,i;
  scanf("%d",&T);
  for(i=1;i<=T;i++)
  {
    scanf("%ld%ld%ld",&A,&B,&C);
    if(A+B>C) printf("Case #%d: true\n",i);
    else printf("Case #%d: false\n",i);
  }
  return 0;
}
