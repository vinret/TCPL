#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	b=(a%10)*100+a/100+((a%100)/10)*10;
	printf("%d\n",b);
	return 0;
}
