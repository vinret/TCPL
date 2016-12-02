#include<stdio.h>
int GCD_recursive(int m,int n);

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
    int m,n;
    printf("请输入两个整数:");
    scanf("%d %d",&m,&n);
    printf("这两个整数的最大公约数是%d\n",GCD_recursive(m,n));
    return 0;
}
