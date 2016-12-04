//基于最大公约数，求最小公倍数。  
#include<stdio.h> 
int LCM(int m, int n);
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
  int  LCM(int m, int n)
{
  int x;
  x=m*n/GCD_recursive(m,n);
  return x;
}
 
int main()
{
    int m,n;
    printf("请输入两个正整数m和n：");
    scanf("%d%d",&m,&n);
    printf("m和n的最小公倍数是%d\n", LCM(m,n));
    return 0;
}
