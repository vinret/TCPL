#include<stdio.h>
int main()
{
int a,b;
scanf("%d",&a);
b=a/100+(a-a/100*100)/10*10+a%10*100;
printf("%d",b);
return 0;
}

