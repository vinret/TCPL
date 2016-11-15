#include <stdio.h>
int main()
{
	int a,b,i=1,j,k;
	char c;
	scanf("%d%c",&a,&c);
	if(a<7)
		printf("%c",c);
	else
	{
		while(i*i-(a+1)/2<=0)
		i++;
	}
	b=i-1;
	for(i=b;i>0;i--)
	{
		j=2*i-1;
		k=b-1;
		for(k=k;k>=1;k--)
			printf(" ");
		for(j=j;j>0;j--)
			printf("%c",c);
		printf("\n");
	}
	for(i=2;i<=b;i++)
	{
		j=2*i-1;
		k=b-1;
		for(k=k;k>=1;k--)
			printf(" ");
		for(j=j;j>0;j--)
			printf("%c",c);
		printf("\n");
	}
	return 0;
}
