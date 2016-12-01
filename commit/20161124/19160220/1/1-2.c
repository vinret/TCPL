#include <stdio.h>
int GCD_iterative(int m,int n)
{int r;
 r=m%n;
 if(r==0) return n;
 while(r!=0)
  {m=n;
   n=r;
   r=m%n;
  }
 return n;}

int main()
{int m,n,GCD;
 printf("Please input two number m and n:");
 scanf("%d %d",&m,&n);
 GCD=GCD_iterative(m,n);
 printf("their GCD is %d\n",GCD);
 return 0;}

