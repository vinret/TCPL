#include<stdio.h>
int main()
{
int x;
printf("now please input a random number x\n");
scanf("%d",&x);
printf("%d\n",x*(x*x+2*x+3)+1);
return 0;
}
