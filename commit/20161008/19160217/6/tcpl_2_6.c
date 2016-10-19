#include<stdio.h>
unsigned setbits(unsigned x,int p,int n,unsigned y)
{
  return x&~(~(~0<<n)<<(p+1-n))|(y&~(~0<<n))<<(p+1-n);
}
int main()
{
unsigned int x;
unsigned int y;
int p;
int n;
int r;
scanf("%d,%d,%d,%d",&x,&p,&n,&y);
r=setbits(x,p,n,y);

printf("%d\n",r);
return 0;
}
