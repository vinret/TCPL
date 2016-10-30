#include <stdio.h> 
int main()
{
	int i=0,a[i],j;
	scanf("%d",&j);
	while(j=0)
	{
		i++;
		a[i]=j%2;
		j=j/2;
	}
	while(i=0)
	{
		i--;
		printf("%d",a[i]);
	}
	printf(" \n");
	printf("%o\n",j);
	printf("%X\n",j);
}
