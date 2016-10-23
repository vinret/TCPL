#include <stdio.h>
int main()
{
int a,b,c,d;
scanf("%d",&a);
b=a/100;
d=a%10;
c=a-b*100-d;
a=b+c+d*100;
printf("%d\n",a);
return 0;
}
