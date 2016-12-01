#include<stdio.h>
int is_pow2(int n);
int main()
{
 int n,s;
 printf("Please input n(n>0):");
 scanf("%d",&n);
 s=is_pow2(n);
 printf("%d",s);
 return 0;
}

int is_pow2(int n)
{
  int c;
  if((n&(n-1))==0)
     return 0;
  else
     return -1;

}

