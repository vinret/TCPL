#include<stdio.h>
int main()
{
     int d;
     scanf("%d",&d);
     int a=d/100 ;
     int b=(d%100)/10;
     int c=(d%100)%10;
     printf("%d\n",c*100+b*10+a);
     return 0;
}
