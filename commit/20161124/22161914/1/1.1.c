#include<stdio.h>
int GCD_recursive(int m,int n)
{
   if(n>m){
   m=m^n;
   n=m^n;
   m=m^n;
}
   int t;
   while(m%n)
{
   t=m%n;
   m=n;
   n=t;
}
   return n;
}  
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",GCD_recursive(m,n));
    return 0;
}
