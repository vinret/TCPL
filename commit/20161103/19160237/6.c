#include<stdio.h>
int Factorial( const int N);

int main()
{
	int N,NF;

	scanf("%d",&N);
	NF = Factorial(N);
	if(NF) printf("%d!=%d\n",N,NF);
	else printf("Invalid input\n");

	return 0;
}

int Factorial( const int N)
{
        int NF=1;
	if(N>=0)
	{
		if(N==0)
			NF=1;
		else
		{for(int i=1;i<=N;i++)
			NF=NF*i;
		}
	}
	else
		NF=0;
	return NF;
}
