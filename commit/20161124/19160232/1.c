#include<stdio.h>
int main()
{
	int a,b,i,j;
	scanf("%d%d",&a,&b);
	j=a%b;
	while(0!=j)
	{
		a=b;
		b=j;
		j=a%b;		
	}
	printf("a,b最大公约数为%d\n",b);
 } 
