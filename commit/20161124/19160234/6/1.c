#include<stdio.h>
int count1_in_bin(int n); 
int main()
{
	int n;
    printf("请输入一个整数 ");
    scanf("%d",&n);
    printf("这个整数的二进制形式中共有 %d 个1\n",count1_in_bin(n));
    return 0;
}


int count1_in_bin(int n)
{
    int count=0;
    while(n>0)
	{
		if((n&1)==1)
            count++;
            n=n>>1;
    }
    return count;
}
