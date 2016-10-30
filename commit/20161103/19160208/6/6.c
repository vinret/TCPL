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
   int a=1,i;
   if(N>=0)
   {
       for(a=1,i=2;i<=N;i++)
       a=a*i;
       return a; 
   }
   else
       return 0;
}
