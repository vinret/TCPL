#include<stdio.h>
int main()
{
 int x,a,b,c;
 scanf("%d",&x);

 a=x%10;
 b=(x-a)%100;
 c=x-a-b;
 x=a*100+b+c/100;

 printf("%d\n",x);
 return 0;
}
