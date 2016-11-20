#include<stdio.h>
int Factorial(const int N);
int main()
{
    int N,NF;
    scanf("%d",&N);
    NF = Factorial(N);
    if (NF) printf("%d!=%d\n",N,NF);
    else printf("Invalid input\n");

    return 0;
}
int Factorial(const int N)
{
 int NF = 1;
 int i;
 while(N>=0&&N<=12)
 {
    for(i=0;i<=N;i++)
    {
      if(i==0)
       {
          NF=1;
       }
      else
       {
         NF=NF*i;
       }
   }
    return NF;
 }
 return 0;
}
         
  
