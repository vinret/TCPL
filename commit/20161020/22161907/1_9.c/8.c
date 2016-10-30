#include<stdio.h>
int main()
{
   int x,a,b,n;
   printf("input a number=");
   scanf("%d", &x);
   printf("%o,%x\n", x,x);
   b=x;
   n=0;
   while (b!=0)
  {
     b=b/2;
     n=++n;
 }
  int z[n],i=1;
   b=x;
  while  (b!=0)
 {
     a=b%2;
     b=b/2;
     z[i]=a;
     i=++i;
  }
   for (i=i-1;i>0;i--)
       printf("%d\n", z[i]);
    return 0;
}
     
