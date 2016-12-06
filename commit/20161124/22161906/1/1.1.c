//辗转相除法(循环)
//辗转相除法:  设两数为a、b(a>b)，求a和b最大公约数(a，b)的步骤如下：用a除以b，得a÷b=q......r1(0≤r1)。若r1=0，则(a，b)=b；若r1≠0，则再用b除以r1，得b÷r1=q......r2 (0≤r2）.若r2=0，则(a，b)=r1，若r2≠0，则继续用r1除以r2，……如此下去，直到能整除为止。其最后一个为被除数的余数的除数即为(a, b)。
 
#include<stdio.h>
int GCD_recursive(int m, int n);  

  int GCD_recursive(int m, int n)
{
  int temp;
  while(m%n!=0)
 {
   temp=n;
   n=m%n;
   m=temp;
 }
   return n;
}   

   int main()
{
   int m,n;
   printf("请输入两个正整数m和n（m>n):");
   scanf("%d%d",&m,&n);
   printf("这两个正整数的最大公约数为%d\n",GCD_recursive(m,n));
   return 0;
}
 
