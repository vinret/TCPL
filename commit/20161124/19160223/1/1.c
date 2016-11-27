#include<stdio.h>

int GCD_iterative(int m,int n);//循环

int GCD_recursive(int m,int n);//递归

int main()

{

         int a,m,n;

         scanf("%d %d",&m,&n);

         if(m<n)

         {

                  a=m;

                  m=n;

                  n=a;

         }

         printf("The greatest common divisor of %d and %d is %d\n",m,n,GCD_iterative(m,n));

         printf("The greatest common divisor of %d and %d is %d\n",m,n,GCD_recursive(m,n));

         return 0;

}

int GCD_iterative(int m,int n)//循环

{

         int t;

         do

         {

                  t=m%n;

                  m=n;

                  n=t;

         }while(t!=0);

         return m;

}

int GCD_recursive(int m,int n)//递归

{

         int t;

         t=m%n;

         if(t==0)

                  return n;

         else

                  GCD_recursive(n,t);

}
