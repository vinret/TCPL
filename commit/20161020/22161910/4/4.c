#include<stdio.h>
int main()
{
   int a,b,c,d,S;
   float A;
   scanf("%d%d%d%d",&a,&b,&c,&d);
   S=a+b+c+d;
   A=(a+b+c+d)/4;
   printf("Sum=%d,Average=%.1f\n",S,A);
   return 0;
}
