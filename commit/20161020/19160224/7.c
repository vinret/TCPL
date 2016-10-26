#include<stdio.h>
int main()
{
 int x;
 scanf("%d",&x);
 int a,b,c;
 a=x/100;
 b=x/10%10;
 c=x%10;
 x=a+b*10+c*100;
 return 0;
}
