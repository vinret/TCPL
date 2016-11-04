#include<stdio.h>
int main()
{
	int a,b,c,d,sum;
	float average;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	sum=a+b+c+d;
	average=sum/4;
	printf("%d\n%f\n",sum,average);
	return 0;
 } 
