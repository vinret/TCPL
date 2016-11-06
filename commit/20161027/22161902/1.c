#include <stdio.h>
int main()
{
int a=0,t;
while(a<9)
{
a++;
int n=1;
while(n<a+1)
{
t=a*n;
printf("%d*%d=%d",a,n,t);
printf(" ");
n++;
}
printf("\n");
}
return 0;
}

