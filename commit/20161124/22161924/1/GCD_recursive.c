#include <stdio.h>
int GCD_recursive(int m, int n)
{
    int temp;
    if(m<n) 
    {
      temp=m;
      m=n;
      n=temp;
    }
    if(m%n==0) return n;
    else return GCD_recursive(n,m%n);
}
int main()
{ 
    int m,n;
    printf("请输入两个整数：");
    scanf("%d %d",&m,&n);
    printf("%d与%d的最大公约数是：%d\n",m,n,GCD_recursive(m,n));
    
    return 0;
}
                      

