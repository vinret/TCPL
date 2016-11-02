#include<stdio.h>
int main()
{
	int x,a,b,c;
	scanf("%d",&x);
	if(x>999||x<100)
	{
		printf("Unavailable");
	}
	else
	{
	a=x/100;
	b=(x%100)/10;
	c=x%100-b*10;
	x=a+b*10+c*100;
	printf("%d",x);
	return 0;
	}
}
