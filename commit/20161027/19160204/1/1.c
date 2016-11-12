#include<stdio.h>
int main()
{
 int a,b,c,n;
 for(a=1;a<=9;a++)
 {
  n=a;
  for(b=1;b<=n;b++)
  {
   c=a*b;
   printf("%d*%d=%d ",a,b,c);
  }
  printf("\n");
 }
 return 0;
}

