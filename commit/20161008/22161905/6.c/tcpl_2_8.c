#include<stdio.h>
int main()
{
unsigned rightrot(unsigned x,unsigned n);
unsigned a = rightrot(3,1);
    printf("%u\n",a);
}

unsigned rightrot(unsigned x,unsigned n)
{
      while(n > 0)
 {
      if((x&1)==1)
    { 
      x=(x>>1)|~(~0U>>1); 
    } 
      else
   {
      x=(x>>1);
   } 
   n--;
 }
    return x;
}
