#include<stdio.h>
int main ()
{
   int a,b,c,d;
  scanf("%d %d %d %d",&a,&b,&c,&d);
   float S,A;
   S=a+b+c+d;
   A=S/4;
   printf("Sum=");
   printf("%.1f",S);
   printf("Average=");
   printf("%.1f",A);
   return 0;
}
                 
