#include<stdio.h>
#include<stdlib.h>
int main()
{
int x;
char y[100];
printf("please input a number:");
scanf("%d",&x);
itoa(x,y,2);
printf("%o,%X,%s",x,x,y);
return 0;
}
