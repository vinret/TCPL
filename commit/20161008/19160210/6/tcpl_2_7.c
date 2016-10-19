#  include<stdio.h>
int main()
{
unsigned x=105,y,z;
int p=5,n=3;
y=~0;
y=y<<n;
y=~y;
y=y<<(p-n+1);
y=~y;
x=x&y;    //将x中第p位开始的n项清零

y=~0;
y=y<<n;
y=~y;
y=y<<(p-n+1);
z=~x;
z=z&y;    //将x中第p位开始的n项取反并提出

x=x|z;
printf("%d\n",x);
return 0;
}
