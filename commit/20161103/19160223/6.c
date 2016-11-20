#include <stdio.h>

int Factorial( const int N );

int main()

{

    int N, NF;

         scanf("%d", &N);

    NF = Factorial(N);

    if (NF)

                  printf("%d! = %d\n", N, NF);

    else

                  printf("Invalid input\n");

         return 0;

}

int Factorial(const int N)

{

         int i,NF=1;

         if(N<0)

                  return 0;

         else

         {

                  for(i=N;i!=0;i--)

                          NF=NF*i;

                  return NF;

         }

}
