#include<stdio.h>

int fac_bit_count(int n);

int main()

{

         int n;

         scanf("%d",&n);

         printf("%d\n",fac_bit_count(n));

         return 0;

}

int fac_bit_count(int n)

{

          int i,a=1,j=0;

          for(i=n;i!=0;i--)

                   a=a*i;

          do

          {

                   a=a/10;

                   j++;

          }

          while(a!=0);

          return j;

}
