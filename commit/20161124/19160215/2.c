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

int LCM(int m,int n)
{
 int ans=m*n/GCD_recursive(m,n);
 return ans;
 }


int main()
{
  int m,n;
  printf("Please input m,n:\n");
  scanf("%d%d",&m,&n);
  if(GCD_recursive(m,n))
  {
    LCM(m,n);
    printf("[m,n]=%d\n",LCM(m,n));  
    }
  else
    printf("error!\n");

    return 0;
}

