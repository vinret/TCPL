#include<stdio.h>

int main()

{

         int i,j,k,n,x,p,q,a,b;

         char c;

         scanf("%d %c",&x,&c);

         for(b=1;(2*b*b-1)<=x;b++)

         {

         }

         n=2*(b-1)-1;

         for(i=1;i<=(n+1)/2;i++)

         {

                  for(j=1;j<=i-1;j++)

                          printf(" ");

                  for(k=1;k<=n-2*(i-1);k++)

                          printf("%c",c);

                  printf("\n");

         }

         for(i=(n+1)/2+1;i<=n;i++)

         {

                  for(p=1;p<=n-i;p++)

                          printf(" ");

                  for(q=1;q<=(i-(n+1)/2)*2+1;q++)

                          printf("%c",c);

                  printf("\n");

         }

         a=x-2*(b-1)*(b-1)+1;

         printf("%d\n",a);

         return 0;

}
