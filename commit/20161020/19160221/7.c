#include <stdio.h>
int main()
{
short int x,a,b,c;
scanf("%hd",&x);
a=x/100;
b=(x-a*100)/10;
c=(x-a*100-b*10);
printf("%d\n",c*100+b*10+a);
return 0;
}
