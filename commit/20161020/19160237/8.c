#include<stdio.h>
int main()
{
	int  n,i,a[64];
	int x;
	scanf("%d",&n);
	x=n;
	i=0;
	while(x!=0)
	{
		a[i]=x%2;
		x=x/2;
		i++;
	}
	for(i=i-1;i>=0;i--)
		printf("%d",a[i]);
	printf("\n");


	printf("%o\n",n);
	printf("%x\n",n);

	return 0;
}
            
