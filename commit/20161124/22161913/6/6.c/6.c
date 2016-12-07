#include<stdio.h>
int count1_in_bin(int n)
{
    int a=0;
    while(n)
    {
      n=n&(n-1);
      a++;
    }
    return a;
}
int main()
{
    int i;
    scanf("%d",&i);
    printf("该数的二进制中1的个数为:%d\n",count1_in_bin(i));
    return 0;
}
