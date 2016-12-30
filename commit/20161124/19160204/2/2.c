#include<stdio.h>
int GCD_interative(int m,int n);
int LCM(int m,int n,int GCD);

int main()
{
 int m,n,GCD,L;
 
 printf("Please input m and n:");
 scanf("%d %d",&m,&n);
 GCD=GCD_interative(m,n);
 L=LCM(m,n,GCD);
 printf("The LCM of %d and %d is %d.\n",m,n,L);
 
 return 0;
}

int GCD_interative(int m,int n)
{
 int a,b;
 if(m*n==0)
  return m==0?n:m;
 else
 {
  a=m>n?n:m;
  b=m>n?m:n;
  return GCD_interative(a,b%a);
 }
}

int LCM(int m,int n,int GCD)
{
 return m*n/GCD;
}
