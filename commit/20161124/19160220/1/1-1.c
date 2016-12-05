#include <stdio.h>
int GCD_rescursive(int m,int n)
{int r;
 r=m%n;
 if(r==0)
   return n;
 else
   return GCD_rescursive(n,r);}

int main()
{int m,n,GCD;
 printf("Please input two number m and n:");
 scanf("%d %d",&m,&n);
 GCD=GCD_rescursive(m,n);
 printf("their GCD is %d\n",GCD);
 return 0;}
 
