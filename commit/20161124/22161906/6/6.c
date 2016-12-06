// 二进制中 1 的个数。 int count1_in_bin(int n); 接受一个整数，返回该数的二进制表示中 1 的个数。 
#include<stdio.h>
int count1_in_bin(int n);
int count1_in_bin(int n)
{
    int i=0;
    while(n!=0)
  {
    if(n%2==1)
    i++;
    n=n/2;
  }
   return i;
} 
     
int main()
{
    int n;
    printf("请输入一个整数n：");
    scanf("%d",&n);
    printf("%d\n",count1_in_bin(n));
    return 0;
}

