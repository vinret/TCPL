#include<stdio.h>
#include<math.h>
int prime(int r);
int main()
{
  int r;
  for(r=541;r<=1000;r++)
  { if(prime(r))
 printf("%d ",r);
  }
return 0;
}
int prime(int r)
{
 int m;
 for(m=2;m<=sqrt(r);m++)
 {
  if(r%m==0)
   return 0;
 } 
 return 1;
}
