#include<stdio.h>
#include<math.h>
int main()
{
double a,b;
int c,n;
printf("Please input a,b,c\n");
scanf("%lf%lf%d",&a,&b,&c);
n=(int)pow(a,b)%c;
printf("%d\n",n);
return 0;
}
