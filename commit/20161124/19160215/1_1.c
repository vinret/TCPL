#include<stdio.h>
int GCD_iterative(int m,int n)
{
 if(0==m*n)
   return 0;
 else
 {
  if(m<n)
  {
   int temp=m;
   m=n;
   n=temp;
   }  
  while(n!=0)
  {
   int r=m%n;
   m=n;
   n=r;
   }
   return m;
   }
}

int main()
{
  int m,n;
  printf("Please input m,n:\n");
  scanf("%d%d",&m,&n);
  if(GCD_iterative(m,n))
    printf("(m,n)=%d\n",GCD_iterative(m,n));
  else
    printf("error!\n");
  
  return 0;
}

