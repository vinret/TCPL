#include<stdio.h>
int GCD_recursive(int m,int n)
{
 int a;
 while(m%n!=0)
 {
  a=n;
  n=m%n;
  m=a;
 }
 return n;
}
int main()
{
 int m,n,k1,k2,k3;
 printf("please input two numbers:\n");
 scanf("%d %d",&m,&n);
 k1=m/GCD_recursive(m,n);
 k2=n/GCD_recursive(m,n);
 k3=k1*k2*GCD_recursive(m,n);
 printf("zui xiao gong bei shu is:%d\n",k3);
 return 0;
}

