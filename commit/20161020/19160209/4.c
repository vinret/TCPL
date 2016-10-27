#include<stdio.h>
int main()
{
int a,b,c,d,sum;
float average;
printf("Please input 4 number\n");
scanf("%d %d %d %d",&a,&b,&c,&d);
sum=a+b+c+d;
average=sum*1.0/4;
printf("Sum = %d\n",sum);
printf("Average = %.1f\n",average);
return 0;
}
