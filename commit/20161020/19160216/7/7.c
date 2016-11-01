#include <stdio.h>
int main()
{ 
int a,b,c,d,x;
scanf ("%d",&a);
b=a/100;
c=a%100/10;
d=a-b*100-c*10;
x=d*100+c*10+b;
printf("%d\n",x);
return 0;
}

