#include<stdio.h>
int main()
{
   int a,b,c;
   printf("输入一大于3的整数\n");
   scanf("%d",&a);
   if(a<=3)
   printf("此数小于4");
   for(b=2;b<a;b++)
   {
    c=a%b;
    if(c==0)
    printf("此数不是素数\n");
    break;
    };
   if(b==a&&a>3)
   printf("此数为素数\n");
   return 0;
}
