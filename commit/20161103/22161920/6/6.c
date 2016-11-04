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
if(N<0||N>12)
return 0;
else if(N==0)
return 1;
int a=1,b=1;
for(;a<=N;a++)
b=b*a;
return b;
}
