#include<stdio.h>
unsigned setbits(unsigned x,int p,int n,unsigned y)
{
unsigned b=y&~(~0<<n);
unsigned c=x<<(32-p+n)>>(32-p+n);
unsigned a=(x>>p)<<p;
      x=(b<<(p-n))+c+a;
       return x;

}
int main()
{
 unsigned x=146,y=26;
int p=6,n=2;
printf("%d",setbits(x,p,n,y));
return 0;
} 
