#include<stdio.h>
 int Factorial(const int N);
 int fac_bit_count(int n);

int main()
{ 
   int N,n,b;
   scanf("%d",&N);
   n=Factorial(N);
   b=fac_bit_count(n);
   printf("%d",b);
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

int fac_bit_count(int n)
  { int a=0;
    while(n/10!=0) 
   {   a=a+1;
       n=n/10;
   }
     a=a+1;
     return a;
   }
