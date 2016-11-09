#include <stdio.h>
int main()
{
	int n,i;
	printf("n(n>3)=");
	scanf("%d",&n);
	for(i=2;i<=(n-1);i++)
		if(n%i==0)
			break;
		if(i<n)
		   printf("%d不是素数",n);
		else
			printf("%d是素数",n);
	printf("\n");
	return 0;
}
