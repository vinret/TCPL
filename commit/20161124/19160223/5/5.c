#include<stdio.h>

int is_pow2(int n);

int main()

{

         int n;

         scanf("%d",&n);

         if(is_pow2(n)==0)

                  printf("%d is a power of 2.\n",n);

         else

         {

                  if(is_pow2(n)==-1)

                          printf("%d is not a power of 2.\n",n);

         }

         return 0;

}

int is_pow2(int n)

{

         int x[100],i=0,k=0;

         do

         {

                  x[i]=n%2;

                  n/=2;

                  i++;

         }while(n!=0);

         for(;i>=0;i--)

         {

                  if(x[i]==1)

                          k+=1;

         }

         if(k==1)

                  return 0;

         else

                  return -1;

}
