#include<stdio.h>
int main()
{
int i;
scanf("%d",&i);
printf("%d\n",i%10*10*10+i/100+i%100-i%10);
return 0;
}
