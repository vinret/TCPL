#include<stdio.h>
int main()
{
   unsigned short x,y,z;
   int n,p;

   printf("x=");
   scanf("%o",&x);
   printf("y=");
   scanf("%o",&y);
   printf("n=");
   scanf("%d",&n);
   printf("p=");
   scanf("%d",&p);

  x=x&~(~(~0<<n)<<(p+1-n));
  y=(y&~(~0<<n))<<(p+1-n);
  z=x|y;
  printf("%o\n",z);
  return 0;
}

