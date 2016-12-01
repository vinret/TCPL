#include<stdio.h>
int GCD_recursive(int m, int n);
int main()
{
 int m,n,s;
 scanf("%d %d",&m,&n);
 s= GCD_recursive(m,n);
 printf("%d",s);
 return 0;
}

int GCD_recursive(int m, int n)
{
   while(m%n!=0)
      {
        int a=m%n;
         m=n;
         n=a;
       }
   return n;
}   
 


