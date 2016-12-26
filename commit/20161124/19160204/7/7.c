#include<stdio.h>
int main()
{
 int A[100],N,M,i;
 scanf("%d %d",&N,&M);
 M=M%N;
 for(i=0;i<N;i++)
  scanf("%d",&A[i]);
 for(i=0;i<N-1;i++)
 {
  if(i-M<0)
   printf("%d ",A[i-M+N]);
  else
   printf("%d ",A[i-M]);
 }
 printf("%d\n",A[N-M-1]);
 return 0;
}
