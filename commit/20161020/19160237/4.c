#include<stdio.h>
int main()
{
	int num1,num2,num3,num4;
	int sum;
	float average;
	

	scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
	sum=num1+num2+num3+num4;
	average=sum/4.0;
	printf("Sum=%d;Average=%.1f",sum,average);
	return 0;
}

