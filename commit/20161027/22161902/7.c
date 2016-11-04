#include <stdio.h>
int main()
{
double a,b;
long int jg,i,c;
printf("分别输入a(a>0),b(b<1le10),c");
scanf("%lf %lf %ld",&a,&b,&c);
if(b==1)
a=a;
else
{for(i=1;i<b;i++)
a=a*a;}
jg=(int)(a)%c;
printf("%ld\n",jg);
return 0;
}
