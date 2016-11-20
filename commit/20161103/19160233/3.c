#include<stdio.h>
int main()
{
	int A,B,C,D;
	int a[31],i=0;
	scanf("%d%d%d",&A,&B,&D);

	C=A+B;
	for(i=0;C!=0;i++)
	{
		a[i] = C % D;
		C=C/D;
	}
	for(i=i-1;i>=0;i--)
		printf("%d",a[i]);

	return 0;
}
