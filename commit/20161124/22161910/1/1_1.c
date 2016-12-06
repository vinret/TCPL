#include<stdio.h>
int GCD_recursive(int m,int n)
{
   int r;
   if(m>0&&n>0)
{
   r=m%n;
}
   while(r!=0)
{
    m=n;
    n=r;
    r=m%n;
}
   return n;
}
int main()
{
   int m,n;
   printf("input m n:\n");
   scanf("%d%d",&m,&n);
   GCD_recursive(m,n);
   printf("最大公约数为：%d\n",GCD_recursive(m,n));
   return 0;
}
