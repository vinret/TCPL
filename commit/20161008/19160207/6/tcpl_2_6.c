#include<stdio.h>
int main(void)
{
unsigned int x=15,y=8;
int p=3,n=2;
char M;
M=x&~(~(~0<<n)<<(p+1-n))|(y&~(~0<<n))<<(p+1-n);
printf("%d\n",M);
return 0;
}
