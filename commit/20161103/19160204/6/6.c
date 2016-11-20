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
 int i,L=1;
 if(N==0||N==1) return 1;
 if(N<0) return 0;
 else
 {
  for(i=1;i<=N;i++)
   L*=i;
  return L; 
 }
}
