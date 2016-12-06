#include<stdio.h>

int main()

{

         int N,M,A[50],i,k,temp;

         scanf("%d %d",&N,&M);

         for(i=0;i<N-1;i++)

                  scanf("%d ",&A[i]);

         scanf("%d",&A[i]);

         for(k=0;k<M;k++)

         {

                  temp=A[N-1];

   for (i=N-1;i>0;i--)

       A[i]=A[i-1];

   A[0]=temp;

         }

         for(i=0;i<N-1;i++)

                  printf("%d ",A[i]);

         printf("%d\n",A[i]);

         return 0;

}
