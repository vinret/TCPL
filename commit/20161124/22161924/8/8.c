#include <stdio.h>
#include <math.h>
int prime(int n)
{
    int m;
    for(m=2;m<=sqrt(n);m++)
    {
       if(n%m==0)
       return 0;
    }
    return 1;
}
int main()
{
    int M,N,i=0,P,count=0;
    scanf("%d %d",&M,&N);
    for(P=2;count<N;P++)
    { 
       if(prime(P)==0)
       {
          count++;
          if(count>=M&&count!=N)
          { i++;
            if(i<10) printf("%d ",P);
            else 
            {  printf("%d\n",P);
               i=0; 
            }
          }
          if(count==N) printf("%d",P);
       } 
    }
    return 0;
}

