#include<stdio.h>
#include<math.h>
int main()
{
double a,b;
int c,d;
scanf("%lf%lf%d",&a,&b,&c);
d=(int)(pow(a,b));
printf("%d\n",d%c);
return 0;
}
