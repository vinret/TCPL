#include<stdio.h>
int GCD_interative(int m,int n);

int main()
{
 int m,n,GCD;

 printf("Please input m and n:");
 scanf("%d %d",&m,&n);
 GCD=GCD_interative(m,n);
 printf("The GCD of %d and %d is %d\n",m,n,GCD);

 return 0;
}

int GCD_interative(m,n)
{
 if(m*n==0)
  return m==0?n:m;
 else
  {
   int a=m>n?n:m;
   int b=m>n?m:n;
   return GCD_interative(a,b%a);
  }
}
