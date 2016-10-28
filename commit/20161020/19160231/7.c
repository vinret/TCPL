#include<stdio.h>
int main()
{
int a;
scanf("%d\n",&a);
printf("%d\n",a%10*100+a/100+a%100-a%10);
return 0;
}
