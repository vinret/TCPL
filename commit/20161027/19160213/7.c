#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,y,z;
scanf("%d %d %d",&a,&b,&c);
y=pow(a,b);
z=y%c;
printf("%d\n",z);
return 0;
}
