#include<stdio.h>
int Factorial( const int N );
int main()
{
    int N,NF;
    scanf("%d", &N);
    NF=Factorial(N);
    if(NF)printf("%d!=%d\n",N,NF);
    else printf("Invalid input\n");
    return 0;
}

int Factorial(const int N)
{
    if(N>0)
    {
	int i;
	int M=1;
	for(i=2;i<=N;i++)
	{
	M=M*i;
	}
	return M;
    }
	else if(N==0)
	return 1;
	else
	return 0; 
}
