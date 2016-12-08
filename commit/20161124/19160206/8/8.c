#include <stdio.h>
#include <math.h>
int is_prime(int n)
{
  int i;
  for(i=2;i<=sqrt(n);++i)
    {  if(n%i==0) break;}
  if(i<=sqrt(n)) 
return -1;
  else 
return 0;
}

int main()
{
  int m,n,i=0,p,count=0;
  scanf("%d %d",&m,&n);

  for(p=2;count<n;++p)
{ 
 if(is_prime(p)==0)
{
   ++count;
 if(count>=m&&count!=n)
{ 
   ++i;
  if(i<10) printf("%d ",p);
   i=0;
}
}
  if(count==n) printf("%d",p);
}
return 0;
}
