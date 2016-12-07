#include<stdio.h>
#include<stdlib.h>
int is_pow2(int n)
{
    if(n>=1)
    {   
      while(n%2==0) n>>=1;
      if(n==1) return 0;
      else return -1;
    }
    else return -1;
}
int main()
{
    int n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    printf("%d\n",is_pow2(n));
    return 0;
}
