#include<stdio.h>
int main()
{
   int d;
   char c;
   float f1,f2;

   scanf("%f %d %c%f",&f1,&d,&c,&f2);
   printf("%c %d %.2f %.2f",c,d,f1,f2);
   return 0;
}
