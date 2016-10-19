#include<stdio.h>
unsigned invert(unsigned x,int p,int n)
{
unsigned	 b=((~((x>>(p-n))&~(~0<<n)))<<(32-n))>>(32-p);
unsigned c=x<<(32-p+n)>>(32-p+n);
unsigned a=(x>>p)<<p;
x=b+c+a;
       return x;

}
int main()
{
 unsigned x=146;
int p=6,n=2;
printf("%d",invert(x,p,n));
return 0;
}
