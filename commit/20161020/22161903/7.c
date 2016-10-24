#include<stdio.h>

int main()
{
int x,a,b,c;
scanf("%d",&x);
a=x/100;
b=(x-a*100)/10;
c=x%10;

printf("%d\n",c*100+b*10+a);
return 0;
}
