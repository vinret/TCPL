#include<stdio.h>

int main()

{

         int a,b,c,d;

         scanf("%d",&a);

         b=a/100;

         c=(a-b*100)/10;

         d=a%10;

         printf("%d\n",d*100+c*10+b);

         return 0;

}
