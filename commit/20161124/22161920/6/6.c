#include<stdio.h>

int count1_in_bin(int n);

int main()
{
int m,n;
printf("请输入一个整数：\n");
scanf("%d",&n);
m=count1_in_bin(n);
printf("该数二进制表示中1的个数为：%d\n",m);
return 0;
}

int count1_in_bin(int n)
{
int i=0,t;
while(n>0)
{t=n%2;
n=n/2;
if(t==1){
i++;}
}
return i;
}
