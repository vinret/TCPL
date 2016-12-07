#include<stdio.h>
int GCD_iterative(int m, int n)
{
    int temp;
    if(m<n)
    { 
      temp=m;
      m=n;
      n=temp;
    }
    while(m%n)
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
    printf("请输入两个整数：");
    scanf("%d %d",&m,&n);
    printf("%d与%d的最大公约数为：%d\n",m,n,GCD_iterative(m,n));
   
    return 0;
} 
