#include<stdio.h>
int count1_in_bin(int n){
	int i=0;
	for(;n>0;n=n>>1)
		if(n&1==1) i++;
	return i;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("二进制中1的个数为：%d\n",count1_in_bin(n));
	return 0;
}
