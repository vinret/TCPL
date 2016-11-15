#include <stdio.h>
int is_prime(int n);
int main()
{
 int count=0,j,x;
 for (j=1;;j++)
 {
  x=(is_prime(j));
  if(!x)
  {  
   count++;
   if(count>=100) printf("%d ",j);
  }
  if(count==1000) break;
 }
 return 0;
}

int is_prime(int n)
{
if(n==1) return -1;
if(n==2) return 0;
int i;
for(i=2;i<=n-1;i++)
  if(n%i==0) break;
if(i<n) 
  return -1;
else 
  return 0;
}
