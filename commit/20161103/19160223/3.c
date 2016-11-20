#include<stdio.h>

int main()

{

         int i,A,B,D,c,k,x[1000];

         scanf("%d %d %d",&A,&B,&D);

         c=A+B;

         for(i=1;c!=0;i++)

         {

                  x[i]=c%D;

                  c=c/D;

         }

         for(k=i-1;k!=0;k--)

                  printf("%d",x[k]);

         printf("\n");

         return 0;

}
