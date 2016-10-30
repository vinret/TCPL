#include<stdio.h>
int main()
{
    int n,a;
    printf("please input a positive integer which is not exceeding 1000: ");
    scanf("%d",&n);
    for(a=0;n!=1;a++)
   {
    if(n%2==0)
    n=n/2;
    else 
    n=(3*n+1)/2;
   }
    printf("%d\n",a);
    printf("\n");
    return 0;
}
