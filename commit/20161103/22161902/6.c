#include <stdio.h>
int Factorial(const int N);
int main()
{
int N,NF;
scanf("%d",&N);
NF=Factorial(N);
if(NF) printf("%d!=%d\n",N,NF);
else printf("Invalid input\n");
return 0;
}
int Factorial(N)
{
int jc;
if(N>1)
{jc=N;
while(N>=2)
{N--;
jc=jc*N;
}}
else {if(N==1||N==0)
jc=1;
if(N<0) jc=0;}
return jc;
}

