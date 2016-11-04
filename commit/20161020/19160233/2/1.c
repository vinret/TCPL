#include<stdio.h>
int main()
{
	int a,b,c,d,sum;
	double average;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	sum=a+b+c+d;
	average=sum/4;
	printf("sum=%d;average=%.1f",sum,average);
	return 0;
}
