#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Please input four numbers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
printf("Sum=%d,Average=%.1f\n",a+b+c+d,(a+b+c+d)*1.0/4);
return 0;
}
