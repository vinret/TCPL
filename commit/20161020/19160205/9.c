#include<stdio.h>
int main()
{
int a,b;
printf("please give me 2 number:");
scanf("%d %d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("%d,%d",a,b);
return 0;
}
