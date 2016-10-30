#include <stdio.h>
int main()
{
  int a,b[10],c,d,i=0;
  scanf("%d",&a);
  c=a;
  d=a;
  while(a!=0)
  {
    b[i]=a%2;
    a/=2;
    i++;
   }
   i--;
   for(;i>=0;i--)
   printf("%d",b[i]);
   printf("\n");
   printf("%o\n",c);
   printf("%x\n",d);
   return 0;
}
