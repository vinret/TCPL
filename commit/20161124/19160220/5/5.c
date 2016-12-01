#include <stdio.h>
int is_pow2(int n)
{if((n&n-1)==0) return 0;
 else return -1;}
int main()
{int n;
 printf("Please input a number n:");
 scanf("%d",&n);
 if(is_pow2(n)==0)
   printf("%d is the pow of 2.\n",n);
 else
   printf("%d is not the pow of 2.\n",n);
 return 0;}
