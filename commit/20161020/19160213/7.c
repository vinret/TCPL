#include<stdio.h>
int main()
{
int x,a,b,c;
scanf("%d",&x);
a=x/100;
b=(x-(x/100)*100)/10;
c=x%10;
if(c!=0)
printf("%d%d%d\n",c,b,a);
else
{ 
if (b!=0)
printf("%d%d\n",b,a);
else
printf("%d\n",a);
}
return 0;
}
