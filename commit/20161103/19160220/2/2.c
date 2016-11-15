#include <stdio.h>
int main()
{
  int n;
  printf("Please input lines(n):");
  scanf("%d",&n);
  long long A[10],B[10],C[10];
  int m=0;
  while(m<n)
  {
   scanf("%lld %lld %lld",&A[m],&B[m],&C[m]);
   m++;
  }
  m=0;
  while(m<n)
  {
   if(A[m]+B[m]>C[m])
    printf("Case #%d: true\n",m+1);
   else
    printf("Case #%d: false\n",m+1);
   m++;
  }
  return 0;
}   

