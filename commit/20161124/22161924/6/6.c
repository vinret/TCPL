#include<stdio.h>
int count1_in_bin(int n)
{
    int num,i,count=0;
    num=n;
    for(i=0;i<32;i++)
    {
       if(num%2==1) count++;
       num/=2;
    }
    return count;       
}
int main()
{
    int n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    printf("%d\n",count1_in_bin(n));
    return 0;
}
