#include<stdio.h>
int  main()
{
   int a,b,c,d;
   scanf("%d,%d,%d,%d\n", &a, &b, &c, &d);
   int e;
   float f;
   e=a+b+c+d;
   f=e/4;
   printf("Sum= %d\n", e);
   printf("Average= %.1f\n", f);
   return 0;
}
