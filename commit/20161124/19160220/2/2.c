#include <stdio.h>
int GCD(int m,int n)
{int r;
 r=m%n;
 if(r==0) return n;
 while(r!=0)
  {m=n;
   n=r;
   r=m%n;
  }
 return n;}
int LCM(int m,int n)
{int gcd,lcm;
 gcd=GCD(m,n);
 lcm=m*n/gcd;
 return lcm;}
int main()
{int m,n,lcm;
 printf("Please input two number m and n:");
 scanf("%d %d",&m,&n);
 lcm=LCM(m,n);
 printf("their LCM is %d\n",lcm);
 return 0;
}
 
