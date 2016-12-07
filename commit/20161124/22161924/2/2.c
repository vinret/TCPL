#include<stdio.h>
int gcd(int m,int n);
int LCM(int m, int n);

int gcd(int m,int n)
{
    int temp;
    if(m<n)
    { 
      temp=n;
      n=m;
      m=temp;
    }
    if(m%n!=0) return gcd(n,m%n);
}
int LCM(int m, int n)
{
    if(m%n==0) return m;
    else return  m*n/gcd(m,n);
}
int main()
{
    int m,n;
    printf("请输入两个整数：");
    scanf("%d %d",&m,&n);
    printf("%d与%d的最小公倍数为：%d\n",m,n,LCM(m,n));
    return 0;
} 
