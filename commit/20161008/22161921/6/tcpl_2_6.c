#include <stdio.h>
unsigned setbites(unsigned x,int p,int n,unsigned y)
{
        
         return x &~(~(~0<<n)<<(p+1-n))|(y&~(~0<<n))<<(p+1-n);
         return 0;
         
}
