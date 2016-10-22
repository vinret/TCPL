#include<stdio.h>
int main()
{
unsigned short a,b;
printf("Please input a and b:");
scanf("%d%d",&a,&b);
a=a^b;
b=b^a;
a=a^b;
printf("%d,%d\n",a,b);
return 0;
}
