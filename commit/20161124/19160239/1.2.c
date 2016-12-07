#include<stdio.h>
int GCD_iterative(int m,int n)
{
 int a;
 if(m%n==0)
 return n;
 else
{
 a=n;
 n=m%n;
 m=a;
 return GCD_iterative(m,n);
}
}
int main()
{
 int m,n;
 printf("please input two numbers:\n");
 scanf("%d %d",&m,&n);
 printf("zui da gong yue shu is:%d",GCD_iterative(m,n));
return 0;
}
