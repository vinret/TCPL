#include<stdio.h>
int is_pow2(int n)
{
   int m;
   m=(n-1)&n;
   if(m!=0)
   return -1;
   else
   return 0;
}
int main()
{
   int n;
   printf("input n:\n");
   scanf("%d",&n);
   printf("%d\n",is_pow2(n));
   return 0;
}

