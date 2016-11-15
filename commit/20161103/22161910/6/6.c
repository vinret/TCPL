#include<stdio.h>
int Facorial(const int N);
int main()
{
  int N ,NF;
  scanf("%d",&N);
  NF=Factorial(N);
  if(NF) 
  printf("%d!=%d\n",N,NF);
  else printf("lnvalid input\n");
  return 0;
}
  int Factorial(const int N)
{
  if(N==0||N==1)
  return 1;
  else
  return N*Factorial(N-1);
}
