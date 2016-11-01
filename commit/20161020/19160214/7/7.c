#include<stdio.h>
int main()
{int x,a,b,c,y;
 scanf("%d",&x);
 a=x/100;
 b=(x-a*100)/10;
 c=x-a*100-b*10;
 y=a+b*10+c*100;
 printf("%d\n",y);
 return 0;
}
