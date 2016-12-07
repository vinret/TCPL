#include<stdio.h>
int GCD_recursive(int m,int n)
{
 if(0==m*n)
   return 0;
 else 
   if(m<n)
   {
    int temp=m;
    m=n;
    n=temp;
    } 
 if(0==m%n)
 return n;
 else
 return GCD_recursive(n,m%n);
 }

int main()
{
  int m,n;
  printf("Please input m,n:\n");
  scanf("%d%d",&m,&n);
  if(GCD_recursive(m,n))
    printf("(m,n)=%d\n",GCD_recursive(m,n));
  else
    printf("error!\n");
    
    return 0;
}

