#include<stdio.h>
#include<string.h>
int main()
{
  int m,n,i;
  scanf("%d %d",&n,&m);
  int A[n];
  for(i=0;i<n;i++)
  {  if(m+i<n)
       scanf("%d",&A[m+i]);
     else
       scanf("%d",&A[m+i-n]);
  }
  for(i=0;i<n-1;i++)
    printf("%d ",A[i]); 
  printf("%d\n",A[n-1]);
  return 0;
}
