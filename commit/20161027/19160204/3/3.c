#include<stdio.h>
int main()
{
 int n,i;
 printf("Please input n:");
 scanf("%d",&n);
 for(i=0;n!=1;i++)
  (n%2==0)?(n=n/2):(n=(3*n+1)/2);
 printf("%d\n",i);
 return 0;
}
