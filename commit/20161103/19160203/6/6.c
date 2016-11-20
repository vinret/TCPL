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
{ int product,i;
  if(N>=0)
   { for(product=1,i=1;i<=N;i++)
       product=product*i;
     return product; }
  else
     return 0;
}
       
