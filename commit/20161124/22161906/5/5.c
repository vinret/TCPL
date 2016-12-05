//2 的幂次方判断.int is_pow2(int n); 接受一个整数，若该数为 2 的幂次方（1,2,4,8..） ，返回 0；否则，返回-1（提示： 使用位运算） .

#include<stdio.h>
int is_pow2(int n); 
int is_pow2(int n)
{
    if(n>0 && n&(n-1)==0)
       return 0;
    else 
       return -1;
}

int main()
{
   int n;
   printf("请输入一个正整数n：");
   scanf("%d",&n);
   printf("%d\n",is_pow2(n) );
   return 0;
}

