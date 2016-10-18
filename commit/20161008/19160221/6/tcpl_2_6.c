#include <stdio.h>
unsigned setbits(unsigned x,unsigned y,int p,int n)
{
   return (x&~(~(~0<<n)<<(p+1-n)))|(y&~(~0<<n))<<(p+1-n);
}
int main()
{
int x=16,y=8;
printf("%o\n",setbits(x,y,3,4));

}

