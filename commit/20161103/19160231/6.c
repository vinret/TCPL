#include<stdio.h>
int Factorial( const int N);
int main()
{
int N,NF;
scanf("%d",&N);
NF=Factorial(N);
if(NF) printf("%d! = %d\n",N,NF);
else printf("Invalid input\n");
return 0;
}

int Factorial( const int  N)
{
int z,NF=1;
if(N<0) return 0;
else for(z=1;z<=N;z++){

NF=NF*z;}; return NF;

}
