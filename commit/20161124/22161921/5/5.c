#include<stdio.h>
#include<stdlib.h>
int is_pow2(int n); 
int main()
{
    int num;
    printf("please input a number:\n");
    scanf("%d",&num);
   if(num&(num-1))
   printf("-1\n");
   else
   printf("0\n");
}
int is_pow2(int n)
{
    if(n==1)
    return 0;
    else
    return  is_pow2(n>>1) ;
}
