#include<stdio.h>
int prime(int n);
int main()
{
  int a=0,b=0,m,n,i,A[1500];
  scanf("%d%d",&m,&n);
  for(i=2;i<10001;i++)
  {
    if(prime(i)==0)
    {  A[b]=i;
       b++; }
  }
  for(i=m-1;i<n-1;i++,a++)
  {  
    if(a&&a%10==0)
      printf("\n");
    printf("%d ",A[i]);
  }
  printf("%d\n",A[n-1]);
  return 0;
}
int prime(int n)
{
  int c;
  for(c=2;c<n;c++)
  {  if(n%c==0)  return 1;  }
  return 0;
}
