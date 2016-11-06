#include<stdio.h>
int main()
{
   int a;
   printf("please input an integer which is greater than 3: ");
   scanf("%d",&a);
   if(a%2!=0 || a%3!=0)
   printf("this one is not a prime number\n");
   if(a%2==0 && a%3==0)
   printf("this one is a prime number\n");
   return 0;
}
