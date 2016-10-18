#include <math.h>
#include<stdio.h>
int main()
{  
   int x=1;
   int a=2,b=3,c=4;
   
  if( sqrt(sqrt(x*x))!=(4*a)/(b*c))  puts("1");
  if( sqrt(sqrt(x*x))==(4*a)/(b*c))    puts("0");
  return 0;
}

