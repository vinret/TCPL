#include <stdio.h>
int main()
{
	unsigned long int A,B,C,c;
        int D,i,j;
	scanf("%ld %ld %d",&A,&B,&D);
	
	C=A+B;
        c=C;
	
	for(i=0;C!=0;i++)	C=C/D;
	int z[i];

	for(j=0;c!=0;j++)
	{
		z[j]=c%D;
		c=c/D;
	}
        
	for(j--;j>=0;j--)
		printf("%d",z[j]);
	printf("\n");
	return 0;
}

