#include<stdio.h>
int GCD_iterative(int m, int n);
int main()
{
  int m,n,s;
  scanf("%d %d",&m,&n);
   s=GCD_iterative(m,n);
   printf("%d",s);
   return 0;
}

int GCD_iterative(int m, int n)
{
   if(m%n==0)
       return n;
    else
        return GCD_iterative(n,m%n);
}
