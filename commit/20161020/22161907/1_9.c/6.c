#include <stdio.h>
int main()
{
   int a,b;
   printf("Please write a number=");
   scanf("%d", &a);
   b=a/16*10+a%16*1;
   printf("%d\n", b);
   return 0;
}
