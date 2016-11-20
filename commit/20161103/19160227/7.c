#include <stdio.h>
#include <math.h>
int is_prime(int n);

int main()
{
  int n=2;
  int count=1;
  while(count<=1000)
{
   if(is_prime(n)!=-1)
	{
	  if (count>=100)
	     printf("第%d个素数是%d\t",count,n);
	  count++;
	  n++;
	}
   else
     n++;
}
   return 0;
}

 int is_prime(int n)
{
 int m;
 for(m=2;m<=sqrt(n);m++)
{
    if(n%m==0)
      return -1;
}
  return 0;  
}
