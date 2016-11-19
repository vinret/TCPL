#include<stdio.h>
#include<math.h>
void printf_hex(int a);
int main()
{
    int i;
    scanf("%d",&i);
    printf_hex(i);
    return 0;
}
void printf_hex(int a)
{
   int x[100];
   int n;
   for(n=0;a!=0;n++)
   {
       x[n]=a%16;
       a=a/16;
   }
   n--;
   for(;n>=0;n--)
   {
      if(x[n]>=9)
      {
        x[n]=x[n]+87;
        printf("%c",x[n]);
      }
      else
        printf("%d",x[n]);
   }
}
