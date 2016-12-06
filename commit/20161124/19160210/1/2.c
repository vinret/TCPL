#include<stdio.h>
int GCD_iterative(int m,int n)
{
 int a=1,temp;
if (n>m) 
  {temp=n;n=m;m=temp;} 
  a=m%n;
if (a!=0)
   GCD_iterative(n,a);
 else return n;
}

int main()
{int m,n;
scanf("%d%d",&m,&n);
 printf("%d\n",GCD_iterative(m,n));
 return 0;
}


