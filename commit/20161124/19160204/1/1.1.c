#include<stdio.h>
int GCD_recursive(int m,int n);

int main()
{
 int m,n,GCD;

 printf("Please input m and n:");
 scanf("%d %d",&m,&n);
 GCD=GCD_recursive(m,n);
 printf("The GCD of %d and %d is %d\n",m,n,GCD);

 return 0;
}

int GCD_recursive(int m,int n)
{
 int l;

 while(m*n!=0)
 {
  if(m>n)
  {
   l=n;
   n=m%n;
   m=l;
  }
  else
  {
   l=m;
   m=n%m;
   n=l;
  }
 }
 return m==0?n:m;
}
