#include<stdio.h>
int main()
{
	int a,b,c,d,Sum;
	float Average;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	Sum=a+b+c+d;
	Average=(float)Sum/4;
	printf("Sum=%d\n",Sum);
	printf("Average=%.1f\n",Average);
	return 0;
	
}
