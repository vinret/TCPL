#include <stdio.h>
int Callatz(unsigned int n )
{
if (n==1||n==0)
  return 0;
if(n%2==0)
  return Callatz(n/2)+1;
else
  return Callatz((3*n+1)/2)+1;
}

int main()
{
unsigned int n;
scanf("%d",&n);
printf("%d",Callatz(n));
return 0;
}
