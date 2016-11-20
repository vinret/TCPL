#include <stdio.h>

int Factorial( const int N );

int main()
{
	int N, NF;
				
	scanf("%d", &N);
	NF = Factorial(N);
	if (NF)  printf("%d! = %d\n", N, NF);
	else printf("Invalid input\n");

	return 0;
}
int Factorial( const int N )
{
	if(N<=12)
	{
		if(N>=0)
		{
			int i,sum=1;
			for(i=1;i<=N;i++)
			{
					sum*=i;
			}
			return sum;
		}
		else return 0;
	}
		else
			return 0;
}
