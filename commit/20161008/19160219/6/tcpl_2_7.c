#include<stdio.h>
int main()
{
unsigned short x,y,z;
int p,n;
printf("x=");
scanf("%o",&x);
printf("p=");
scanf("%d",&p);
printf("n=");
scanf("%d",&n);
y=x>>(16-p+n);
y=y<<(16-p+n);
z=x<<p;
z=z>>p;
x=~(x&(~0<<(16-n)>>(p-n)));
x=x&(~0<<(16-n)>>(p-n));
x=y|x;
x=x|z;
printf("%o\n",x);
return 0;
}

