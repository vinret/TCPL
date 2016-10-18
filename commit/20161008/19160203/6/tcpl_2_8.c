#include<stdio.h>
int main()
{
unsigned short x,y,z;
short int n;
printf("x=");
scanf("%o",&x);
printf("n=");
scanf("%d",&n);
y=x<<(16-n);
z=x>>n;
z=z|y;
printf("%d\n",z);
return 0;
}
