#include<stdio.h>

int GCD_recursive(int m,int n);//递归求最大公约数

int LCM(int m,int n);

int main()

{

         int m,n;

         scanf("%d %d",&m,&n);

         printf("The least common multiple of %d and %d is %d\n",m,n,LCM(m,n));

         return 0;

}

int GCD_recursive(int m,int n)

{

         int t,a;

         if(m<n)

         {

                  a=m;

                  m=n;

                  n=a;

         }

         t=m%n;

         if(t==0)

                  return n;

         else

                  GCD_recursive(n,t);

}

int LCM(int m,int n)

{

         int result;

         result=(m*n)/GCD_recursive(m,n);

         return result;

}
