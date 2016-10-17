#include<stdio.h>
int main()
{
unsigned long x,y,z;
int p,n;
printf("x=");
scanf("%o",&x);
printf("y=");
scanf("%o",&y);
printf("p=");
scanf("%d",&p);
printf("n=");
scanf("%d",&n);
z=x>>(8-p);
z=z^8;
y=y>>n;
y=y<<n;
z=y|z;
printf("%o\n",z);
return 0;
}
