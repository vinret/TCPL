#include<stdio.h>
int main()
{
int a,b,c,d;
scanf("%d %d %d %d",&a,&b,&c,&d);
int Sum;
Sum=a+b+c+d;
printf("Sum=%d",Sum);
float Average;
Average=(a+b+c+d)/4;
printf("Average=%.1f",Average);
return 0;
}
