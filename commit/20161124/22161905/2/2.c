#include<stdio.h>
int gcd(int m,int n)
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
int LCM(int m,int n)
{
  int a,b;
  a=m/gcd(m,n);
  b=n/gcd(m,n);
  return a*b*gcd(m,n);
}
int main()
{
    int m,n;
    printf("Please input two numbers: ");
    scanf("%d %d",&m,&n);

    printf("最小公倍数是：%d\n",LCM(m,n));

    return 0;
}
