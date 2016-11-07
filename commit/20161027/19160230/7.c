#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
int d,f;
scanf("%d %d %d",&a,&b,&c);
d=pow(a,b);
f=d%c;
printf("%d",f);
return 0;
}
