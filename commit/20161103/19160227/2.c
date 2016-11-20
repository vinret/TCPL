#include <stdio.h>
int main()
{
	int T,i;
	long int A[9],B[9],C[9];
	scanf("%d",&T);
	for(i=1;i<=T;i++)
		scanf("%ld%ld%ld",&A[i],&B[i],&C[i]);
	for(i=1;i<=T;i++)
	{
		if(A[i]+B[i]>C[i])
			printf("Case#%d:true\n",i);
		else
			printf("Case#%d:flase\n",i);
	}
	return 0;
}


