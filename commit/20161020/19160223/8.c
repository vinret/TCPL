#include<stdio.h>

void fun(int d)

{

         if(d==0) return ;

         else

         {

                  fun(d/2);

                  printf("%d",d%2);

         }

}

int main()

{

         int a;

         scanf("%d",&a);

         fun(a);

         printf(" %o %x\n",a,a);

         return 0;

}
