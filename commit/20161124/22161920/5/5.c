#include<stdio.h>
int is_pow2(int n);

int main()
{
int n;
printf("请输入一个整数：");
scanf("%d",&n);
if(is_pow2(n)==0)
printf("该数是2的幂次方\n");
else
printf("该数不是2的幂次方\n");
return 0;
}

int is_pow2(int n)
{
if((n&(n-1))==0)
return 0;
else 
return -1;
}
