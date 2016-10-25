#include <stdio.h>
unsigned setbits(unsigned x,unsigned y,int p,int n)
{
   return(x&~((~(~0<<n))<<(p-n+1)))|(y&~(~0<<n))<<(p+1-n);
}

int main()
{ 
   unsigned x,y;
   int p,n;
   x=27;
   y=111;
   p=5;
   n=3;
   setbits(x,y,p,n);
   printf("%d");
   return 0;
}   
