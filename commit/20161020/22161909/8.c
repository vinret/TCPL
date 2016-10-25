#include <stdio.h>
int main()
{
	int D;
	int a,b,n;
        
	printf("Please enter the decimalism=  ");
	scanf("%d",&D);

	printf("The octonary=  %o\n",D);
	printf("The hexadecimal=  %X\n",D);
	
	printf("The binary=  ");
        
	b=D;
	n=0;
	while (b!=0)
	{
		b=b/2;
		n=++n;
	}

	int z[n],i=1;
	b=D;
	while (b!=0)
	{
		a=b%2;
		b=b/2;
		z[i]=a;
		i=++i;
	}
       
	for (i=i-1;i>0;i--)
		printf("%d",z[i]);

        printf("\n");
	return 0;
}

